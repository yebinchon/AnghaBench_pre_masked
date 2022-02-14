
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idr {int lock; scalar_t__ layers; int * top; } ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct idr *VAR_0)
{

 FUNC_1(&VAR_0->lock);
 FUNC_0(VAR_0->top, VAR_0->layers - 1);
 VAR_0->top = ((void*)0);
 VAR_0->layers = 0;
 FUNC_2(&VAR_0->lock);
}
