
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_3__* node_p ;
struct TYPE_9__ {int q_mtx; } ;
struct TYPE_11__ {TYPE_1__ nd_input_queue; TYPE_2__* nd_type; int nd_refs; int nd_vnet; } ;
struct TYPE_10__ {int refs; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_3__*) ;
 scalar_t__ FUNC_8 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_9 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;
 scalar_t__ FUNC_10 (int *) ;

void
FUNC_11(node_p VAR_5)
{

 if (VAR_5 == &VAR_4)
  return;

 FUNC_1(VAR_5->nd_vnet);

 if (FUNC_10(&VAR_5->nd_refs)) {

  VAR_5->nd_type->refs--;
  FUNC_5();
  if (FUNC_8(VAR_5)) {
   VAR_0--;
   FUNC_4(VAR_5, VAR_3);
  }
  FUNC_6();

  FUNC_2();
  VAR_1--;
  FUNC_4(VAR_5, VAR_2);
  FUNC_3();

  FUNC_9(&VAR_5->nd_input_queue.q_mtx);
  FUNC_7(VAR_5);
 }
 FUNC_0();
}
