
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucontextx {int ucontext; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;

int
FUNC_2(char *VAR_0)
{
 struct ucontextx *VAR_1;

 VAR_1 = (struct ucontextx *)VAR_0;
 if (FUNC_1(&VAR_1->ucontext) == -1)
  return (-1);
 FUNC_0(VAR_0);
 return (0);
}
