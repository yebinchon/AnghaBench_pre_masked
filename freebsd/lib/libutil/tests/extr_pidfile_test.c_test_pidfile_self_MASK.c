
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pidfh {int dummy; } ;
typedef scalar_t__ pid_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct pidfh*) ;
 struct pidfh* FUNC_2 (char const*,int,scalar_t__*) ;
 scalar_t__ FUNC_3 (struct pidfh*) ;
 char const* FUNC_4 (int) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static const char *
FUNC_6(void)
{
 const char *VAR_1 = "test_pidfile_self";
 struct pidfh *VAR_2, *VAR_3;
 pid_t VAR_4 = 0;
 int VAR_5;

 FUNC_5(VAR_1);
 VAR_2 = FUNC_2(VAR_1, 0600, &VAR_4);
 if (VAR_2 == ((void*)0) && VAR_4 != 0)
  return ("pidfile exists and is locked");
 if (VAR_2 == ((void*)0))
  return (FUNC_4(VAR_0));
 if (FUNC_3(VAR_2) != 0) {
  VAR_5 = VAR_0;
  FUNC_1(VAR_2);
  FUNC_5(VAR_1);
  return (FUNC_4(VAR_5));
 }

 VAR_3 = FUNC_2(VAR_1, 0600, &VAR_4);
 if (VAR_3 != ((void*)0)) {
  FUNC_1(VAR_2);
  FUNC_1(VAR_3);
  FUNC_5(VAR_1);
  return ("managed to opened pidfile twice");
 }
 if (VAR_4 != FUNC_0()) {
  FUNC_1(VAR_2);
  FUNC_5(VAR_1);
  return ("pidfile contained wrong PID");
 }
 FUNC_1(VAR_2);
 FUNC_5(VAR_1);
 return (((void*)0));
}
