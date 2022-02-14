
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int uc_sigmask; } ;
typedef TYPE_1__ const ucontext_t ;
typedef int uc ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__ const*) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__ const*,TYPE_1__ const*,int) ;

int
FUNC_4(const ucontext_t *VAR_3)
{
 ucontext_t VAR_4;

 if (VAR_3 == ((void*)0)) {
  VAR_2 = VAR_0;
  return (-1);
 }
 if (!FUNC_1(VAR_3->uc_sigmask, VAR_1))
  return (FUNC_2(VAR_3));
 (void) FUNC_3(&VAR_4, VAR_3, sizeof(VAR_4));
 FUNC_0(VAR_4.uc_sigmask, VAR_1);
 return (FUNC_2(&VAR_4));
}
