
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int uint64_t ;
struct sys_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sys_info*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int ) ;
 struct sys_info* FUNC_3 () ;
 char* FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(void)
{
 uint64_t VAR_3;
 struct sys_info *VAR_4;
 int VAR_5[3] = { VAR_0, VAR_1, VAR_2 };
 int VAR_6;

 if ((VAR_4 = FUNC_3()) == ((void*)0))
  FUNC_1("could not retrieve system info");

 for (VAR_6 = 0; VAR_6 < 3; VAR_6++) {
  VAR_3 = FUNC_0(VAR_4, VAR_5[VAR_6]);
  if (VAR_3 > 0)
   FUNC_2("%s: %juMB\n", FUNC_4(VAR_5[VAR_6]),
       (uintmax_t)(VAR_3 / 1024 / 1024));
 }
}
