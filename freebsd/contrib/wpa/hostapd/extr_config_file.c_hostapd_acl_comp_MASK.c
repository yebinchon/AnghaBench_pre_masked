
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_acl_entry {int addr; } ;
typedef int macaddr ;


 int FUNC_0 (int ,int ,int) ;

int FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const struct mac_acl_entry *VAR_2 = VAR_0;
 const struct mac_acl_entry *VAR_3 = VAR_1;
 return FUNC_0(VAR_2->addr, VAR_3->addr, sizeof(macaddr));
}
