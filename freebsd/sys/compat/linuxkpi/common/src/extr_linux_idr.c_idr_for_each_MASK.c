
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idr {scalar_t__ layers; int top; } ;


 int FUNC_0 (int ,int ,scalar_t__,int (*) (int,void*,void*),void*) ;

int
FUNC_1(struct idr *VAR_0, int (*VAR_1)(int VAR_2, void *VAR_3, void *VAR_4), void *VAR_5)
{
 return (FUNC_0(VAR_0->top, 0, VAR_0->layers - 1, VAR_1, VAR_5));
}
