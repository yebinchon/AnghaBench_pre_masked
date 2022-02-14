
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_bearer {scalar_t__ usr_handle; } ;
struct eth_bearer {int * bearer; } ;



__attribute__((used)) static void FUNC_0(struct tipc_bearer *VAR_0)
{
 ((struct eth_bearer *)VAR_0->usr_handle)->bearer = ((void*)0);
}
