
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid_volume {int * v_md_data; } ;
struct g_raid_md_object {int dummy; } ;
struct g_raid_md_intel_pervolume {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct g_raid_md_intel_pervolume*,int ) ;

__attribute__((used)) static int
FUNC_1(struct g_raid_md_object *VAR_1,
    struct g_raid_volume *VAR_2)
{
 struct g_raid_md_intel_pervolume *VAR_3;

 VAR_3 = (struct g_raid_md_intel_pervolume *)VAR_2->v_md_data;
 FUNC_0(VAR_3, VAR_0);
 VAR_2->v_md_data = ((void*)0);
 return (0);
}
