
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rsocket {int * qp_list; } ;
struct TYPE_2__ {struct TYPE_2__* next; } ;
struct ds_qp {TYPE_1__ list; } ;


 int FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (struct ds_qp*) ;

__attribute__((used)) static void FUNC_2(struct rsocket *VAR_0, struct ds_qp *VAR_1)
{
 if (VAR_1->list.next != &VAR_1->list) {
  VAR_0->qp_list = FUNC_1(VAR_1);
  FUNC_0(&VAR_1->list);
 } else {
  VAR_0->qp_list = ((void*)0);
 }
}
