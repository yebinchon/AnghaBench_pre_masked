
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 int FUNC_5 (int) ;
 int VAR_5 ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int,char const*,char const*,size_t,int,int) ;
 int FUNC_9 (int,char const*,char const*,size_t,int,int) ;
 int FUNC_10 (int ,int ,int ,int*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int*,int ) ;

__attribute__((used)) static void
FUNC_14(const char *VAR_6, const char *VAR_7, size_t VAR_8, bool VAR_9, bool VAR_10)
{
 pid_t VAR_11;
 int VAR_12;
 int VAR_13[2];
 int VAR_14;

 if (FUNC_10(VAR_0, VAR_3, 0, VAR_13) == -1)
  FUNC_0(VAR_1, "socketpair (%s)", FUNC_11(VAR_5));

 switch ((VAR_11 = FUNC_6())) {
 case 0:
  FUNC_8(VAR_13[0], VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
  return;
 case -1:
  FUNC_0(VAR_1, "fork (%s)", FUNC_11(VAR_5));
 default:
  VAR_14 = FUNC_9(VAR_13[1], VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
 again:
  switch (FUNC_13(VAR_11, &VAR_12, VAR_4)) {
  case -1:
   FUNC_0(VAR_1, "wait (%s)", FUNC_11(VAR_5));
  case 0:
   if (VAR_14 == 0)




    goto again;

   if (FUNC_7(VAR_11, VAR_2) == -1)
    FUNC_0(VAR_1, "kill (%s)",
        FUNC_11(VAR_5));
   goto again;
  default:
   if (FUNC_4(VAR_12)) {
    if (FUNC_5(VAR_12) == VAR_2)
     FUNC_1(VAR_1,
         "receiver failed and was killed" "by sender");

    else
     FUNC_0(VAR_1,
         "receiver got signaled (%s)",
         FUNC_12(FUNC_5(VAR_12)));
   } else if (FUNC_3(VAR_12)) {
    if (FUNC_2(VAR_12) != 0)
     FUNC_0(VAR_1,
         "receiver exited with status %d",
         FUNC_2(VAR_12));
   } else {
    FUNC_0(VAR_1,
        "receiver exited with unexpected status %d",
        VAR_12);
   }
   break;
  }
  return;
 }
}
