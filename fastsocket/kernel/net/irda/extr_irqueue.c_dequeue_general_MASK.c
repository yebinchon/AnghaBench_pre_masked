
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* q_next; TYPE_1__* q_prev; } ;
typedef TYPE_2__ irda_queue_t ;
struct TYPE_6__ {TYPE_2__* q_next; } ;


 int FUNC_0 (int,char*) ;

__attribute__((used)) static irda_queue_t *FUNC_1(irda_queue_t **VAR_0, irda_queue_t* VAR_1)
{
 irda_queue_t *VAR_2;

 FUNC_0( 4, "dequeue_general()\n");




 VAR_2 = *VAR_0;

 if ( *VAR_0 == ((void*)0) ) {



 } else if ( (*VAR_0)->q_next == *VAR_0 ) {




  *VAR_0 = ((void*)0);

 } else {



  VAR_1->q_prev->q_next = VAR_1->q_next;
  VAR_1->q_next->q_prev = VAR_1->q_prev;
  if ( (*VAR_0) == VAR_1)
   (*VAR_0) = VAR_1->q_next;
 }




 return VAR_2;
}
