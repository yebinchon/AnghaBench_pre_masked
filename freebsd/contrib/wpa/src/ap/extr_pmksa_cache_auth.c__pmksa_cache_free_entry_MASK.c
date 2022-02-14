
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsn_pmksa_cache_entry {int radius_class; int cui; int identity; int vlan_desc; } ;


 int FUNC_0 (struct rsn_pmksa_cache_entry*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct rsn_pmksa_cache_entry *VAR_0)
{
 FUNC_1(VAR_0->vlan_desc);
 FUNC_1(VAR_0->identity);
 FUNC_3(VAR_0->cui);

 FUNC_2(&VAR_0->radius_class);

 FUNC_0(VAR_0, sizeof(*VAR_0));
}
