
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid_md_object {int dummy; } ;
struct g_raid_md_ddf_perdisk {int pd_meta; } ;
struct g_raid_disk {int * d_md_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct g_raid_md_ddf_perdisk*,int ) ;

__attribute__((used)) static int
FUNC_2(struct g_raid_md_object *VAR_1,
    struct g_raid_disk *VAR_2)
{
 struct g_raid_md_ddf_perdisk *VAR_3;

 VAR_3 = (struct g_raid_md_ddf_perdisk *)VAR_2->d_md_data;
 FUNC_0(&VAR_3->pd_meta);
 FUNC_1(VAR_3, VAR_0);
 VAR_2->d_md_data = ((void*)0);
 return (0);
}
