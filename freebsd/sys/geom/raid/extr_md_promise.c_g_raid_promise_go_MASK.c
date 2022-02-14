
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid_volume {struct g_raid_softc* v_softc; struct g_raid_md_promise_pervolume* v_md_data; } ;
struct g_raid_softc {int dummy; } ;
struct g_raid_md_promise_pervolume {int pv_started; } ;


 int FUNC_0 (int ,struct g_raid_softc*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct g_raid_volume*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_2)
{
 struct g_raid_volume *VAR_3;
 struct g_raid_softc *VAR_4;
 struct g_raid_md_promise_pervolume *VAR_5;

 VAR_3 = VAR_2;
 VAR_5 = VAR_3->v_md_data;
 VAR_4 = VAR_3->v_softc;
 if (!VAR_5->pv_started) {
  FUNC_0(0, VAR_4, "Force volume start due to timeout.");
  FUNC_1(VAR_3, VAR_1,
      VAR_0);
 }
}
