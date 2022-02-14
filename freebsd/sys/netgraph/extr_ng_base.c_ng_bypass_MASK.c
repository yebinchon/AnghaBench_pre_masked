
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* hook_p ;
struct TYPE_9__ {struct TYPE_9__* hk_peer; } ;
struct TYPE_8__ {scalar_t__ hk_node; TYPE_3__* hk_peer; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_3__ VAR_1 ;
 int FUNC_5 (TYPE_1__*) ;

int
FUNC_6(hook_p VAR_2, hook_p VAR_3)
{
 if (VAR_2->hk_node != VAR_3->hk_node) {
  FUNC_4();
  return (VAR_0);
 }
 FUNC_2();
 if (FUNC_0(VAR_2) || FUNC_0(VAR_3)) {
  FUNC_3();
  return (VAR_0);
 }
 VAR_2->hk_peer->hk_peer = VAR_3->hk_peer;
 VAR_3->hk_peer->hk_peer = VAR_2->hk_peer;

 VAR_2->hk_peer = &VAR_1;
 VAR_3->hk_peer = &VAR_1;
 FUNC_3();

 FUNC_1(VAR_2);
 FUNC_1(VAR_3);


 FUNC_5(VAR_2);
 FUNC_5(VAR_3);
 return (0);
}
