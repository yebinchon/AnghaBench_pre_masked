
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid_volume {int * v_md_data; } ;
struct g_raid_md_object {int dummy; } ;
struct g_raid_md_ddf_pervolume {int pv_started; int pv_start_co; int pv_meta; } ;
struct g_raid_md_ddf_object {int mdio_starting; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct g_raid_md_ddf_pervolume*,int ) ;

__attribute__((used)) static int
FUNC_3(struct g_raid_md_object *VAR_1,
    struct g_raid_volume *VAR_2)
{
 struct g_raid_md_ddf_object *VAR_3;
 struct g_raid_md_ddf_pervolume *VAR_4;

 VAR_3 = (struct g_raid_md_ddf_object *)VAR_1;
 VAR_4 = (struct g_raid_md_ddf_pervolume *)VAR_2->v_md_data;
 FUNC_1(&VAR_4->pv_meta);
 if (!VAR_4->pv_started) {
  VAR_4->pv_started = 1;
  VAR_3->mdio_starting--;
  FUNC_0(&VAR_4->pv_start_co);
 }
 FUNC_2(VAR_4, VAR_0);
 VAR_2->v_md_data = ((void*)0);
 return (0);
}
