
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static bool
FUNC_3(const char *VAR_1)
{
 time_t VAR_2, VAR_3, VAR_4;

 VAR_4 = 0;
 VAR_2 = VAR_3 = FUNC_0();
 FUNC_2("%s\n", VAR_1);
 if (VAR_0 == -2)
  return (1);
 if (VAR_0 == -1)
  return (0);
 do {
  if (VAR_4 != VAR_2) {
   FUNC_2("press any key to interrupt reboot in %d seconds\r",
       VAR_0 - (int)(VAR_2 - VAR_3));
   VAR_4 = VAR_2;
  }


  if (FUNC_1())
   return (1);
  VAR_2 = FUNC_0();
 } while (VAR_2 - VAR_3 < VAR_0);
 return (0);
}
