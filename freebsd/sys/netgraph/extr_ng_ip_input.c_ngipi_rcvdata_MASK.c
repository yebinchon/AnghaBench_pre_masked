
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct epoch_tracker {int dummy; } ;
typedef int item_p ;
typedef int hook_p ;
struct TYPE_2__ {scalar_t__ td_ng_outbound; } ;


 int VAR_0 ;
 int FUNC_0 (struct epoch_tracker) ;
 int FUNC_1 (struct epoch_tracker) ;
 int FUNC_2 (int ,struct mbuf*) ;
 int FUNC_3 (int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_4 (int ,struct mbuf*) ;
 int FUNC_5 (int ,struct mbuf*) ;

__attribute__((used)) static int
FUNC_6(hook_p VAR_2, item_p VAR_3)
{
 struct mbuf *VAR_4;

 FUNC_2(VAR_3, VAR_4);
 FUNC_3(VAR_3);
 if (VAR_1->td_ng_outbound)
  FUNC_5(VAR_0, VAR_4);
 else {
  struct epoch_tracker VAR_5;

  FUNC_0(VAR_5);
  FUNC_4(VAR_0, VAR_4);
  FUNC_1(VAR_5);
 }
 return 0;
}
