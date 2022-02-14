
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int member_1; int member_0; } ;
struct sigaction {int sa_mask; int sa_handler; } ;
typedef int ssize_t ;
typedef int pid_t ;
typedef int action ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*) ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct sigaction*,int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (struct timespec const*,int *) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (int,char*,size_t) ;
 int FUNC_11 (int ,struct sigaction*,int *) ;
 int VAR_9 ;
 int FUNC_12 (int *) ;
 int VAR_10 ;
 int FUNC_13 (int ) ;
 scalar_t__ VAR_11 ;
 int FUNC_14 (int,int*,int ) ;
 int FUNC_15 (char*) ;

__attribute__((used)) static int
FUNC_16(void)
{
 pid_t VAR_12;
 ssize_t VAR_13;
 int VAR_14, VAR_15;
 size_t VAR_16 = VAR_2;
 char VAR_17[VAR_2];
 struct sigaction VAR_18;
 static const struct timespec VAR_19 = { 0, 500000000 };


 FUNC_5(&VAR_18, 0, sizeof(VAR_18));
 VAR_18.sa_handler = VAR_9;
 FUNC_12(&VAR_18.sa_mask);

 if (FUNC_11(VAR_5, &VAR_18, ((void*)0)) == -1)
  FUNC_2(1, "sigaction");

 (void)FUNC_13(VAR_1);

 if (FUNC_6(VAR_1, VAR_6 | VAR_7) == -1)
  FUNC_2(1, "mkfifo");

 switch ((VAR_12 = FUNC_4())) {
 case -1:
  FUNC_2(1, "fork");
 case 0:



  if ((VAR_14 = FUNC_8(VAR_1, VAR_4, 0)) == -1)
   FUNC_2(1, "failed to open fifo");


  FUNC_0();
  return 0;

 default:
  break;
 }

 if (VAR_11) {
  FUNC_9("Child pid is %d\n", VAR_12 );
  FUNC_3(VAR_10);
 }


 for (;;) {
  if ((VAR_14 = FUNC_8(VAR_1, VAR_3, 0)) == -1) {
   if (VAR_8 == VAR_0)
    continue;
   else
    FUNC_2(1, "Failed to open the fifo in read mode");
  }

  break;

 }

 FUNC_7(&VAR_19, ((void*)0));
 if (VAR_11) {
  FUNC_9("Was sleeping...\n");
  FUNC_3(VAR_10);
 }

 for (;;) {
  VAR_13 = FUNC_10(VAR_14, VAR_17, VAR_16);

  if (VAR_13 == -1) {
   FUNC_15("Failed to read");
   if (VAR_8 == VAR_0) {
    if (VAR_11) {
     FUNC_9("Parent interrupted, "
         "continuing...\n");
     FUNC_3(VAR_10);
    }
    continue;
   }

   break;
  }

  if (VAR_13 == 0) {
   if (VAR_11) {
    FUNC_9("Writers have closed, looks like we "
        "are done\n");
    FUNC_3(VAR_10);
   }
   break;
  }

  if (VAR_11) {
   FUNC_9("Received %zd bytes message '%s'\n", VAR_13, VAR_17);
   FUNC_3(VAR_10);
  }
 }

 FUNC_1(VAR_14);

 if (VAR_11) {
  FUNC_9("We are done.. now reap the child");
  FUNC_3(VAR_10);
 }


 while (FUNC_14(VAR_12, &VAR_15, 0) == -1)
  if (VAR_8 != VAR_0) {
   FUNC_15("Failed to reap the child");
   return 1;
  }

 if (VAR_11) {
  FUNC_9("We are done completely\n");
  FUNC_3(VAR_10);
 }
 return 0;
}
