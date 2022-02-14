
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rcu; } ;
struct k_itimer {TYPE_1__ it; int sigq; int it_pid; int it_id; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct k_itimer *VAR_3, int VAR_4)
{
 if (VAR_4) {
  unsigned long VAR_5;
  FUNC_4(&VAR_0, VAR_5);
  FUNC_1(&VAR_2, VAR_3->it_id);
  FUNC_5(&VAR_0, VAR_5);
 }
 FUNC_2(VAR_3->it_pid);
 FUNC_3(VAR_3->sigq);
 FUNC_0(&VAR_3->it.rcu, VAR_1);
}
