
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_acl_entry {int addr; } ;


 int FUNC_0 (struct mac_acl_entry**,int*,int ) ;

__attribute__((used)) static void FUNC_1(struct mac_acl_entry **VAR_0,
           int *VAR_1)
{
 while (*VAR_1)
  FUNC_0(VAR_0, VAR_1, (*VAR_0)[0].addr);
}
