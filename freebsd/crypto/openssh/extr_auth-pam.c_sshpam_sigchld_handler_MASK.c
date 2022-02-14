
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pam_thread; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_1__* VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int ) ;
 int VAR_7 ;
 int FUNC_7 (int ,int *,int ) ;

__attribute__((used)) static void
FUNC_8(int VAR_8)
{
 FUNC_6(VAR_1, VAR_3);
 if (VAR_5 == ((void*)0))
  return;
 if (FUNC_7(VAR_5->pam_thread, &VAR_7, VAR_4)
     <= 0) {

  FUNC_4(VAR_5->pam_thread, VAR_2);
  while (FUNC_7(VAR_5->pam_thread,
      &VAR_7, 0) == -1) {
   if (VAR_6 == VAR_0)
    continue;
   return;
  }
 }
 if (FUNC_2(VAR_7) &&
     FUNC_3(VAR_7) == VAR_2)
  return;
 if (!FUNC_1(VAR_7))
  FUNC_5("PAM: authentication thread exited unexpectedly");
 if (FUNC_0(VAR_7) != 0)
  FUNC_5("PAM: authentication thread exited uncleanly");
}
