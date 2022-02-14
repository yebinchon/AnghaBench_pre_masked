
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct k_itimer {TYPE_1__* sigq; } ;
typedef int siginfo_t ;
struct TYPE_2__ {int info; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct k_itimer*) ;
 struct k_itimer* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int VAR_1 ;
 TYPE_1__* FUNC_3 () ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static struct k_itimer * FUNC_5(void)
{
 struct k_itimer *VAR_2;
 VAR_2 = FUNC_1(VAR_1, VAR_0);
 if (!VAR_2)
  return VAR_2;
 if (FUNC_4(!(VAR_2->sigq = FUNC_3()))) {
  FUNC_0(VAR_1, VAR_2);
  return ((void*)0);
 }
 FUNC_2(&VAR_2->sigq->info, 0, sizeof(siginfo_t));
 return VAR_2;
}
