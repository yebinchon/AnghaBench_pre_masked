
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msqid_ds {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,struct msqid_ds*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;

void
FUNC_5(void)
{
 FUNC_1();

 if (FUNC_2(VAR_4, VAR_1, (struct msqid_ds *)0) == -1) {
  if (VAR_3 != VAR_0) {
   FUNC_3(VAR_2, "remove message queue: %m");
   FUNC_4("adjtimed: remove message queue");
  }
 }

 FUNC_0(2);
}
