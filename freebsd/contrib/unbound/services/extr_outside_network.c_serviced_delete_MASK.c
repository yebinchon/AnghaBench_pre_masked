
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct waiting_tcp {scalar_t__ next_waiting; int * pkt; } ;
struct serviced_query {scalar_t__ status; int node; int outnet; scalar_t__ pending; } ;
struct pending_tcp {int dummy; } ;
struct pending {scalar_t__ pc; } ;


 int FUNC_0 (int ,struct pending_tcp*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct pending*) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int ,struct waiting_tcp*) ;
 int FUNC_6 (struct waiting_tcp*) ;

__attribute__((used)) static void
FUNC_7(struct serviced_query* VAR_4)
{
 if(VAR_4->pending) {

  if(VAR_4->status == VAR_1 ||
   VAR_4->status == VAR_0 ||
   VAR_4->status == VAR_2 ||
   VAR_4->status == VAR_3) {
   struct pending* VAR_5 = (struct pending*)VAR_4->pending;
   if(VAR_5->pc)
    FUNC_3(VAR_4->outnet, VAR_5->pc);
   FUNC_2(VAR_4->outnet, VAR_5);


   FUNC_1(VAR_4->outnet);
  } else {
   struct waiting_tcp* VAR_6 = (struct waiting_tcp*)
    VAR_4->pending;
   if(VAR_6->pkt == ((void*)0)) {
    FUNC_0(VAR_4->outnet,
     (struct pending_tcp*)VAR_6->next_waiting);
   } else {
    FUNC_5(VAR_4->outnet, VAR_6);
    FUNC_6(VAR_6);
   }
  }
 }

 FUNC_4(&VAR_4->node, ((void*)0));
}
