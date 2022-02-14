
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ acked; scalar_t__ supported; } ;
struct tipc_node {TYPE_1__ bclink; } ;


 scalar_t__ FUNC_0 () ;

u32 FUNC_1(struct tipc_node *VAR_0)
{
 return (VAR_0->bclink.supported &&
  (FUNC_0() != VAR_0->bclink.acked));
}
