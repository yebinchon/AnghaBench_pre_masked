
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pidfh {int dummy; } ;
typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int FUNC_0 (struct pidfh*) ;
 struct pidfh* FUNC_1 (char const*,int,scalar_t__*) ;
 scalar_t__ FUNC_2 (struct pidfh*) ;
 char const* FUNC_3 (int ) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static const char *
FUNC_5(void)
{
 const char *VAR_1 = "test_pidfile_uncontested";
 struct pidfh *VAR_2;
 pid_t VAR_3 = 0;

 FUNC_4(VAR_1);
 VAR_2 = FUNC_1(VAR_1, 0600, &VAR_3);
 if (VAR_2 == ((void*)0) && VAR_3 != 0)
  return ("pidfile exists and is locked");
 if (VAR_2 == ((void*)0))
  return (FUNC_3(VAR_0));
 if (FUNC_2(VAR_2) != 0) {
  FUNC_0(VAR_2);
  FUNC_4(VAR_1);
  return ("failed to write PID");
 }
 FUNC_0(VAR_2);
 FUNC_4(VAR_1);
 return (((void*)0));
}
