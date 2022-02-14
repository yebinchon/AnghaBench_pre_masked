
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cpuset_t ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int *,char*,int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (char*,int,...) ;
 int FUNC_9 (int) ;

void
FUNC_10(void)
{
 int VAR_5, VAR_6;
 cpuset_t VAR_7;

 FUNC_5(&VAR_3, "ap boot", ((void*)0), VAR_1);

 FUNC_4(&VAR_2);
 FUNC_6(&VAR_7);

 while (!FUNC_1(&VAR_7)) {
  VAR_6 = FUNC_2(&VAR_7) - 1;
  FUNC_0(VAR_6, &VAR_7);

  if (VAR_6 >= VAR_0) {
   FUNC_8("cpu_mp_start: ignoring AP #%d.\n", VAR_6);
   continue;
  }

  if (VAR_6 != FUNC_7()) {
   if ((VAR_5 = FUNC_9(VAR_6)) != 0) {
    FUNC_8("AP #%d failed to start: %d\n", VAR_6, VAR_5);
    continue;
   }
   if (VAR_4)
    FUNC_8("AP #%d started!\n", VAR_6);
  }
  FUNC_3(VAR_6, &VAR_2);
 }
}
