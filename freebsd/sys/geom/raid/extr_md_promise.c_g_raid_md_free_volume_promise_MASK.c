
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid_volume {int * v_md_data; } ;
struct g_raid_md_promise_pervolume {int pv_started; int pv_start_co; struct g_raid_md_promise_pervolume* pv_meta; } ;
struct g_raid_md_object {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct g_raid_md_promise_pervolume*,int ) ;

__attribute__((used)) static int
FUNC_2(struct g_raid_md_object *VAR_1,
    struct g_raid_volume *VAR_2)
{
 struct g_raid_md_promise_pervolume *VAR_3;

 VAR_3 = (struct g_raid_md_promise_pervolume *)VAR_2->v_md_data;
 if (VAR_3 && VAR_3->pv_meta != ((void*)0)) {
  FUNC_1(VAR_3->pv_meta, VAR_0);
  VAR_3->pv_meta = ((void*)0);
 }
 if (VAR_3 && !VAR_3->pv_started) {
  VAR_3->pv_started = 1;
  FUNC_0(&VAR_3->pv_start_co);
 }
 FUNC_1(VAR_3, VAR_0);
 VAR_2->v_md_data = ((void*)0);
 return (0);
}
