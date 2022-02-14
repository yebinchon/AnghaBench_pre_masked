
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread {scalar_t__ sigblock; int sigmask; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *) ;
 int VAR_1 ;

void
FUNC_1(struct pthread *VAR_2)
{

 if (VAR_2->sigblock > 0) {
  VAR_2->sigblock++;
  return;
 }
 FUNC_0(VAR_0, &VAR_1, &VAR_2->sigmask);
 VAR_2->sigblock++;
}
