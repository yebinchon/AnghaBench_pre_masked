
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_node {scalar_t__ last_router; } ;



__attribute__((used)) static int FUNC_0(struct tipc_node *VAR_0)
{
 return (VAR_0 && (VAR_0->last_router >= 0));
}
