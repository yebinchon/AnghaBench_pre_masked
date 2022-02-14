
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pidfh {int dummy; } ;
struct kevent {int dummy; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kevent*,int ,int ,int ,int ,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 int FUNC_5 () ;
 int FUNC_6 (int,struct kevent*,int,struct kevent*,int,int *) ;
 scalar_t__ FUNC_7 (int,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (struct pidfh*) ;
 struct pidfh* FUNC_10 (char const*,int,int*) ;
 scalar_t__ FUNC_11 (struct pidfh*) ;
 scalar_t__ FUNC_12 (int*) ;
 int FUNC_13 (int,char*,int) ;
 int FUNC_14 (int ,int ) ;
 int VAR_5 ;
 char const* FUNC_15 (int) ;
 int FUNC_16 (char const*) ;
 int FUNC_17 (int,int*,int ) ;
 int FUNC_18 (int,char*,int) ;

__attribute__((used)) static const char *
FUNC_19(const char *VAR_6, int VAR_7)
{
 struct pidfh *VAR_8 = ((void*)0);
 pid_t VAR_9 = 0, VAR_10 = 0;
 int VAR_11[2], VAR_12, VAR_13;
 struct kevent VAR_14, VAR_15;
 char VAR_16;
 int VAR_17;

 FUNC_16(VAR_6);
 if (FUNC_12(VAR_11) != 0)
  return (FUNC_15(VAR_4));

 if (VAR_7) {
  VAR_8 = FUNC_10(VAR_6, 0600, &VAR_9);
  if (VAR_8 == ((void*)0) && VAR_9 != 0)
   return ("pidfile exists and is locked");
  if (VAR_8 == ((void*)0))
   return (FUNC_15(VAR_4));
 }

 VAR_10 = FUNC_5();
 if (VAR_10 == -1)
  return (FUNC_15(VAR_4));
 if (VAR_10 == 0) {

  FUNC_4(VAR_11[0]);
  FUNC_14(VAR_2, VAR_5);
  if (!VAR_7) {
   VAR_8 = FUNC_10(VAR_6, 0600, &VAR_9);
   if (VAR_8 == ((void*)0) && VAR_9 != 0)
    return ("pidfile exists and is locked");
   if (VAR_8 == ((void*)0))
    return (FUNC_15(VAR_4));
  }
  if (FUNC_11(VAR_8) != 0) {
   VAR_12 = VAR_4;
   FUNC_9(VAR_8);
   FUNC_16(VAR_6);
   return (FUNC_15(VAR_12));
  }
  if (VAR_8 == ((void*)0))
   FUNC_3(1);
  if (FUNC_11(VAR_8) != 0)
   FUNC_3(2);
  VAR_17 = FUNC_8();
  if (VAR_17 == -1)
   FUNC_3(3);
  FUNC_0(&VAR_15, VAR_2, VAR_0, VAR_1, 0, 0, ((void*)0));

  if (FUNC_6(VAR_17, &VAR_15, 1, ((void*)0), 0, ((void*)0)) != 0)
   FUNC_3(4);

  if (FUNC_18(VAR_11[1], "*", 1) != 1)
   FUNC_3(5);

  if (FUNC_6(VAR_17, ((void*)0), 0, &VAR_14, 1, ((void*)0)) != 1)
   FUNC_3(6);
  FUNC_3(0);
 }

 FUNC_4(VAR_11[1]);
 if (VAR_8)
  FUNC_9(VAR_8);


 if (FUNC_13(VAR_11[0], &VAR_16, 1) != 1) {
  VAR_12 = VAR_4;
  FUNC_16(VAR_6);
  FUNC_7(VAR_10, VAR_3);
  VAR_4 = VAR_12;
  return (FUNC_15(VAR_4));
 }


 VAR_8 = FUNC_10(VAR_6, 0600, &VAR_9);
 if (VAR_8 != ((void*)0)) {
  FUNC_9(VAR_8);
  FUNC_16(VAR_6);
  return ("managed to lock contested pidfile");
 }


 if (VAR_9 == 0) {
  FUNC_16(VAR_6);
  return (FUNC_15(VAR_4));
 }


 if (VAR_9 != VAR_10) {
  FUNC_16(VAR_6);
  return ("pidfile contained wrong PID");
 }


 if (VAR_8)
  FUNC_9(VAR_8);
 FUNC_16(VAR_6);
 if (FUNC_7(VAR_10, VAR_2) != 0)
  return (FUNC_15(VAR_4));
 if (FUNC_17(VAR_10, &VAR_13, 0) == -1)
  return (FUNC_15(VAR_4));
 if (FUNC_2(VAR_13))
  return ("child caught signal");
 if (FUNC_1(VAR_13) != 0)
  return ("child returned non-zero status");


 return (((void*)0));
}
