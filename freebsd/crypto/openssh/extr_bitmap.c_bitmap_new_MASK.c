
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitmap {int len; scalar_t__ top; int * d; } ;


 int VAR_0 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (struct bitmap*) ;

struct bitmap *
FUNC_2(void)
{
 struct bitmap *VAR_1;

 if ((VAR_1 = FUNC_0(1, sizeof(*VAR_1))) == ((void*)0))
  return ((void*)0);
 if ((VAR_1->d = FUNC_0(1, VAR_0)) == ((void*)0)) {
  FUNC_1(VAR_1);
  return ((void*)0);
 }
 VAR_1->len = 1;
 VAR_1->top = 0;
 return VAR_1;
}
