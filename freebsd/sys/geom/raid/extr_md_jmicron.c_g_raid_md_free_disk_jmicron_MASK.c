
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid_md_object {int dummy; } ;
struct g_raid_md_jmicron_perdisk {struct g_raid_md_jmicron_perdisk* pd_meta; } ;
struct g_raid_disk {int * d_md_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct g_raid_md_jmicron_perdisk*,int ) ;

__attribute__((used)) static int
FUNC_1(struct g_raid_md_object *VAR_1,
    struct g_raid_disk *VAR_2)
{
 struct g_raid_md_jmicron_perdisk *VAR_3;

 VAR_3 = (struct g_raid_md_jmicron_perdisk *)VAR_2->d_md_data;
 if (VAR_3->pd_meta != ((void*)0)) {
  FUNC_0(VAR_3->pd_meta, VAR_0);
  VAR_3->pd_meta = ((void*)0);
 }
 FUNC_0(VAR_3, VAR_0);
 VAR_2->d_md_data = ((void*)0);
 return (0);
}
