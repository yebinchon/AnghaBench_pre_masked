
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbdata {int * mb_top; } ;


 int FUNC_0 (int *) ;

int
FUNC_1(struct mbdata *VAR_0)
{
 if (VAR_0->mb_top) {
  FUNC_0(VAR_0->mb_top);
  VAR_0->mb_top = ((void*)0);
 }
 return 0;
}
