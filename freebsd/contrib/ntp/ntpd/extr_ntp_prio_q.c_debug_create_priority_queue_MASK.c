
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ no_of_elements; int * front; int get_order; } ;
typedef TYPE_1__ queue ;
typedef int q_order_func ;


 TYPE_1__* FUNC_0 (int *,int,char const*,int) ;
 TYPE_1__* FUNC_1 (int) ;

queue *FUNC_2(
 q_order_func VAR_0




 )
{
 queue *VAR_1;


 VAR_1 = FUNC_1(sizeof(queue));




 VAR_1->get_order = VAR_0;
 VAR_1->front = ((void*)0);
 VAR_1->no_of_elements = 0;

 return VAR_1;
}
