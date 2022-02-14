
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ru_nsignals; } ;
struct thread {TYPE_1__ td_ru; } ;
struct sigacts {int ps_sigreset; int ps_signodefer; int * ps_catchmask; int ps_mtx; } ;
typedef int sigset_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_2 (int) ;
 int FUNC_3 (struct thread*,int ,int *,int *,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct sigacts*,int) ;

__attribute__((used)) static void
FUNC_6(int VAR_4, struct thread *VAR_5, struct sigacts *VAR_6)
{
 sigset_t VAR_7;

 FUNC_4(&VAR_6->ps_mtx, VAR_0);
 VAR_5->td_ru.ru_nsignals++;
 VAR_7 = VAR_6->ps_catchmask[FUNC_2(VAR_4)];
 if (!FUNC_1(VAR_6->ps_signodefer, VAR_4))
  FUNC_0(VAR_7, VAR_4);
 FUNC_3(VAR_5, VAR_3, &VAR_7, ((void*)0),
     VAR_1 | VAR_2);
 if (FUNC_1(VAR_6->ps_sigreset, VAR_4))
  FUNC_5(VAR_6, VAR_4);
}
