
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int uc_sigmask; } ;
typedef TYPE_1__ ucontext_t ;
typedef int uc ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__ const*) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*,TYPE_1__ const*,int) ;

int
FUNC_4(ucontext_t *VAR_3, const ucontext_t *VAR_4)
{
 ucontext_t VAR_5;

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0)) {
  VAR_2 = VAR_0;
  return (-1);
 }
 if (FUNC_1(VAR_4->uc_sigmask, VAR_1)) {
  (void) FUNC_3(&VAR_5, VAR_4, sizeof(VAR_5));
  FUNC_0(VAR_5.uc_sigmask, VAR_1);
  VAR_4 = &VAR_5;
 }
 return (FUNC_2(VAR_3, VAR_4));
}
