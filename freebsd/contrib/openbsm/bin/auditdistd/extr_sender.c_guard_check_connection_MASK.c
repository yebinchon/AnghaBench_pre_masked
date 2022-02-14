
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ adh_role; int adh_remoteaddr; int * adh_remote; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static void
FUNC_6(void)
{

 FUNC_0(VAR_1->adh_role == VAR_0);

 FUNC_3(&VAR_2);
 if (VAR_1->adh_remote != ((void*)0)) {
  FUNC_4(&VAR_2);
  FUNC_1(3, "remote_guard: Connection to %s is ok.",
      VAR_1->adh_remoteaddr);
  return;
 }





 FUNC_4(&VAR_2);
 FUNC_1(1, "remote_guard: Reconnecting to %s.",
     VAR_1->adh_remoteaddr);
 if (FUNC_5() == 0) {
  FUNC_2("Successfully reconnected to %s.",
      VAR_1->adh_remoteaddr);
 } else {
  FUNC_1(1, "remote_guard: Reconnect to %s failed.",
      VAR_1->adh_remoteaddr);
 }
}
