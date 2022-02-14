
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread {scalar_t__ sigblock; int sigmask; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *) ;

void
FUNC_1(struct pthread *VAR_1)
{
 if (--VAR_1->sigblock == 0)
  FUNC_0(VAR_0, &VAR_1->sigmask, ((void*)0));
}
