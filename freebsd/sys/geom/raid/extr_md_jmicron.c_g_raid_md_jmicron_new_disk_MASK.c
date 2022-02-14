
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct jmicron_raid_conf {int flags; } ;
struct g_raid_softc {struct g_raid_md_object* sc_md; } ;
struct g_raid_md_object {int dummy; } ;
struct g_raid_md_jmicron_perdisk {struct jmicron_raid_conf* pd_meta; } ;
struct g_raid_md_jmicron_object {scalar_t__ mdio_total_disks; scalar_t__ mdio_disks_present; TYPE_1__* mdio_meta; scalar_t__ mdio_started; } ;
struct g_raid_disk {scalar_t__ d_md_data; struct g_raid_softc* d_softc; } ;
struct TYPE_5__ {int flags; int disk_id; } ;


 int FUNC_0 (int,struct g_raid_softc*,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct g_raid_softc*) ;
 scalar_t__ FUNC_3 (struct g_raid_disk*) ;
 int FUNC_4 (struct g_raid_md_object*,int *,int *,int *) ;
 TYPE_1__* FUNC_5 (struct jmicron_raid_conf*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_7 (struct jmicron_raid_conf*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_9(struct g_raid_disk *VAR_2)
{
 struct g_raid_softc *VAR_3;
 struct g_raid_md_object *VAR_4;
 struct g_raid_md_jmicron_object *VAR_5;
 struct jmicron_raid_conf *VAR_6;
 struct g_raid_md_jmicron_perdisk *VAR_7;

 VAR_3 = VAR_2->d_softc;
 VAR_4 = VAR_3->sc_md;
 VAR_5 = (struct g_raid_md_jmicron_object *)VAR_4;
 VAR_7 = (struct g_raid_md_jmicron_perdisk *)VAR_2->d_md_data;
 VAR_6 = VAR_7->pd_meta;

 if (VAR_5->mdio_started) {
  if (FUNC_3(VAR_2))
   FUNC_4(VAR_4, ((void*)0), ((void*)0), ((void*)0));
 } else {




  if (VAR_5->mdio_meta == ((void*)0) ||
      FUNC_6(VAR_5->mdio_meta,
       VAR_5->mdio_meta->disk_id) == -3) {
   if (VAR_5->mdio_meta != ((void*)0))
    FUNC_1(VAR_5->mdio_meta, VAR_1);
   VAR_5->mdio_meta = FUNC_5(VAR_6);
   VAR_5->mdio_total_disks = FUNC_7(VAR_6);
  }
  VAR_5->mdio_meta->flags |= VAR_6->flags & VAR_0;

  VAR_5->mdio_disks_present++;
  FUNC_0(1, VAR_3, "Matching disk (%d of %d+%d up)",
      VAR_5->mdio_disks_present,
      VAR_5->mdio_total_disks,
      FUNC_8(VAR_5->mdio_meta));


  if (VAR_5->mdio_disks_present == VAR_5->mdio_total_disks +
      FUNC_8(VAR_5->mdio_meta))
   FUNC_2(VAR_3);
 }
}
