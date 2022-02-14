
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ gap_after; scalar_t__ gap_to; int last_in; int supported; } ;
struct tipc_node {TYPE_1__ bclink; } ;


 int FUNC_0 (struct tipc_node*) ;
 int FUNC_1 (struct tipc_node*) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct tipc_node *VAR_0, u32 VAR_1)
{
 if (!VAR_0->bclink.supported ||
     FUNC_2(VAR_1, FUNC_3(VAR_0->bclink.last_in)))
  return;

 FUNC_1(VAR_0);
 if (VAR_0->bclink.gap_after == VAR_0->bclink.gap_to)
  VAR_0->bclink.gap_to = VAR_1;
 FUNC_0(VAR_0);
}
