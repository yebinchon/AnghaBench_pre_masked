
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nvidia_raid_conf {int total_disks; scalar_t__ disk_number; } ;
struct g_raid_softc {struct g_raid_md_object* sc_md; } ;
struct g_raid_md_object {int dummy; } ;
struct g_raid_md_nvidia_perdisk {struct nvidia_raid_conf* pd_meta; } ;
struct g_raid_md_nvidia_object {int mdio_total_disks; int mdio_disks_present; TYPE_1__* mdio_meta; scalar_t__ mdio_started; } ;
struct g_raid_disk {scalar_t__ d_md_data; struct g_raid_softc* d_softc; } ;
struct TYPE_3__ {scalar_t__ disk_number; scalar_t__ total_disks; } ;


 int FUNC_0 (int,struct g_raid_softc*,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct g_raid_softc*) ;
 scalar_t__ FUNC_3 (struct g_raid_disk*) ;
 int FUNC_4 (struct g_raid_md_object*,int *,int *,int *) ;
 TYPE_1__* FUNC_5 (struct nvidia_raid_conf*) ;

__attribute__((used)) static void
FUNC_6(struct g_raid_disk *VAR_1)
{
 struct g_raid_softc *VAR_2;
 struct g_raid_md_object *VAR_3;
 struct g_raid_md_nvidia_object *VAR_4;
 struct nvidia_raid_conf *VAR_5;
 struct g_raid_md_nvidia_perdisk *VAR_6;

 VAR_2 = VAR_1->d_softc;
 VAR_3 = VAR_2->sc_md;
 VAR_4 = (struct g_raid_md_nvidia_object *)VAR_3;
 VAR_6 = (struct g_raid_md_nvidia_perdisk *)VAR_1->d_md_data;
 VAR_5 = VAR_6->pd_meta;

 if (VAR_4->mdio_started) {
  if (FUNC_3(VAR_1))
   FUNC_4(VAR_3, ((void*)0), ((void*)0), ((void*)0));
 } else {
  if (VAR_4->mdio_meta == ((void*)0) ||
      VAR_4->mdio_meta->disk_number >= VAR_4->mdio_meta->total_disks) {
   FUNC_0(1, VAR_2, "Newer disk");
   if (VAR_4->mdio_meta != ((void*)0))
    FUNC_1(VAR_4->mdio_meta, VAR_0);
   VAR_4->mdio_meta = FUNC_5(VAR_5);
   VAR_4->mdio_total_disks = VAR_5->total_disks;
   VAR_4->mdio_disks_present = 1;
  } else if (VAR_5->disk_number < VAR_4->mdio_meta->total_disks) {
   VAR_4->mdio_disks_present++;
   FUNC_0(1, VAR_2, "Matching disk (%d of %d up)",
       VAR_4->mdio_disks_present,
       VAR_4->mdio_total_disks);
  } else
   FUNC_0(1, VAR_2, "Spare disk");


  if (VAR_4->mdio_disks_present == VAR_4->mdio_total_disks)
   FUNC_2(VAR_2);
 }
}
