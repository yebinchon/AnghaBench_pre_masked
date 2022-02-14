
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ng_type {int refs; int name; } ;
typedef TYPE_1__* node_p ;
struct TYPE_9__ {scalar_t__ q_flags; int queue; } ;
struct TYPE_8__ {scalar_t__ nd_ID; int nd_hooks; TYPE_3__ nd_input_queue; int nd_vnet; struct ng_type* nd_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (scalar_t__,TYPE_1__*) ;
 size_t FUNC_6 (scalar_t__) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 () ;
 int * FUNC_12 (int ) ;

int
FUNC_13(struct ng_type *VAR_8, node_p *VAR_9)
{
 node_p VAR_10;


 if (FUNC_12(VAR_8->name) == ((void*)0)) {
  FUNC_10();
  return (VAR_0);
 }


 FUNC_4(VAR_10);
 if (VAR_10 == ((void*)0)) {
  FUNC_10();
  return (VAR_1);
 }
 VAR_10->nd_type = VAR_8;



 FUNC_7(VAR_10);
 VAR_8->refs++;

 FUNC_8(&VAR_10->nd_input_queue);
 FUNC_9(&VAR_10->nd_input_queue.queue);
 VAR_10->nd_input_queue.q_flags = 0;


 FUNC_2(&VAR_10->nd_hooks);


 FUNC_0();
 for (;;) {
  node_p VAR_11 = ((void*)0);
  VAR_10->nd_ID = VAR_2++;


  FUNC_5(VAR_10->nd_ID, VAR_11);
  if ((VAR_10->nd_ID != 0) && (VAR_11 == ((void*)0))) {
   break;
  }
 }
 VAR_5++;
 if (VAR_5 * 2 > VAR_4)
  FUNC_11();
 FUNC_3(&VAR_3[FUNC_6(VAR_10->nd_ID)], VAR_10,
     VAR_7);
 FUNC_1();


 *VAR_9 = VAR_10;
 return (0);
}
