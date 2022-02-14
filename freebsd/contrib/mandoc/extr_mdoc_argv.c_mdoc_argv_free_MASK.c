
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdoc_arg {struct mdoc_arg* argv; scalar_t__ argc; scalar_t__ refcnt; } ;


 int FUNC_0 (struct mdoc_arg*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct mdoc_arg*) ;

void
FUNC_3(struct mdoc_arg *VAR_0)
{
 int VAR_1;

 if (((void*)0) == VAR_0)
  return;

 if (VAR_0->refcnt) {
  --(VAR_0->refcnt);
  if (VAR_0->refcnt)
   return;
 }
 FUNC_1(VAR_0->argc);

 for (VAR_1 = (int)VAR_0->argc - 1; VAR_1 >= 0; VAR_1--)
  FUNC_0(VAR_0, VAR_1);

 FUNC_2(VAR_0->argv);
 FUNC_2(VAR_0);
}
