
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_raid3_softc {size_t sc_ndisks; size_t sc_name; int sc_mediasize; int sc_sectorsize; TYPE_1__* sc_disks; } ;
struct g_raid3_metadata {size_t md_no; size_t md_all; int md_mediasize; int md_sectorsize; int md_mflags; int md_dflags; } ;
struct g_provider {int mediasize; int sectorsize; int name; } ;
struct TYPE_2__ {scalar_t__ d_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,char*,size_t,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int
FUNC_1(struct g_raid3_softc *VAR_7, struct g_provider *VAR_8,
    struct g_raid3_metadata *VAR_9)
{

 if (VAR_9->md_no >= VAR_7->sc_ndisks) {
  FUNC_0(1, "Invalid disk %s number (no=%u), skipping.",
      VAR_8->name, VAR_9->md_no);
  return (VAR_1);
 }
 if (VAR_7->sc_disks[VAR_9->md_no].d_state != VAR_6) {
  FUNC_0(1, "Disk %s (no=%u) already exists, skipping.",
      VAR_8->name, VAR_9->md_no);
  return (VAR_0);
 }
 if (VAR_9->md_all != VAR_7->sc_ndisks) {
  FUNC_0(1,
      "Invalid '%s' field on disk %s (device %s), skipping.",
      "md_all", VAR_8->name, VAR_7->sc_name);
  return (VAR_1);
 }
 if ((VAR_9->md_mediasize % VAR_9->md_sectorsize) != 0) {
  FUNC_0(1, "Invalid metadata (mediasize %% sectorsize != "
      "0) on disk %s (device %s), skipping.", VAR_8->name,
      VAR_7->sc_name);
  return (VAR_1);
 }
 if (VAR_9->md_mediasize != VAR_7->sc_mediasize) {
  FUNC_0(1,
      "Invalid '%s' field on disk %s (device %s), skipping.",
      "md_mediasize", VAR_8->name, VAR_7->sc_name);
  return (VAR_1);
 }
 if ((VAR_9->md_mediasize % (VAR_7->sc_ndisks - 1)) != 0) {
  FUNC_0(1,
      "Invalid '%s' field on disk %s (device %s), skipping.",
      "md_mediasize", VAR_8->name, VAR_7->sc_name);
  return (VAR_1);
 }
 if ((VAR_7->sc_mediasize / (VAR_7->sc_ndisks - 1)) > VAR_8->mediasize) {
  FUNC_0(1,
      "Invalid size of disk %s (device %s), skipping.", VAR_8->name,
      VAR_7->sc_name);
  return (VAR_1);
 }
 if ((VAR_9->md_sectorsize / VAR_8->sectorsize) < VAR_7->sc_ndisks - 1) {
  FUNC_0(1,
      "Invalid '%s' field on disk %s (device %s), skipping.",
      "md_sectorsize", VAR_8->name, VAR_7->sc_name);
  return (VAR_1);
 }
 if (VAR_9->md_sectorsize != VAR_7->sc_sectorsize) {
  FUNC_0(1,
      "Invalid '%s' field on disk %s (device %s), skipping.",
      "md_sectorsize", VAR_8->name, VAR_7->sc_name);
  return (VAR_1);
 }
 if ((VAR_7->sc_sectorsize % VAR_8->sectorsize) != 0) {
  FUNC_0(1,
      "Invalid sector size of disk %s (device %s), skipping.",
      VAR_8->name, VAR_7->sc_name);
  return (VAR_1);
 }
 if ((VAR_9->md_mflags & ~VAR_2) != 0) {
  FUNC_0(1,
      "Invalid device flags on disk %s (device %s), skipping.",
      VAR_8->name, VAR_7->sc_name);
  return (VAR_1);
 }
 if ((VAR_9->md_mflags & VAR_4) != 0 &&
     (VAR_9->md_mflags & VAR_3) != 0) {



  FUNC_0(1, "Both VERIFY and ROUND-ROBIN flags exist on "
      "disk %s (device %s), skipping.", VAR_8->name, VAR_7->sc_name);
  return (VAR_1);
 }
 if ((VAR_9->md_dflags & ~VAR_5) != 0) {
  FUNC_0(1,
      "Invalid disk flags on disk %s (device %s), skipping.",
      VAR_8->name, VAR_7->sc_name);
  return (VAR_1);
 }
 return (0);
}
