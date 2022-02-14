
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct g_raid_volume {scalar_t__ v_md_data; } ;
struct g_raid_md_promise_pervolume {int pv_started; } ;
struct g_raid_md_object {int dummy; } ;



 int FUNC_0 (struct g_raid_volume*) ;

__attribute__((used)) static int
FUNC_1(struct g_raid_md_object *VAR_0,
    struct g_raid_volume *VAR_1, u_int VAR_2)
{
 struct g_raid_md_promise_pervolume *VAR_3;

 VAR_3 = (struct g_raid_md_promise_pervolume *)VAR_1->v_md_data;
 switch (VAR_2) {
 case 128:
  if (!VAR_3->pv_started)
   FUNC_0(VAR_1);
  return (0);
 }
 return (-2);
}
