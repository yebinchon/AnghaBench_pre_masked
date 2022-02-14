
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statvfs {int f_flag; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,char const*,char*) ;
 scalar_t__ FUNC_1 (char const*,struct statvfs*) ;
 int VAR_3 ;
 char* FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;

int
FUNC_4(int VAR_4, char **VAR_5)
{
 const char *VAR_6 = ".";
 struct statvfs VAR_7;

 if (VAR_4 > 2)
  FUNC_3();
 else if (VAR_4 == 2)
  VAR_6 = VAR_5[1];

 if (FUNC_1(VAR_6, &VAR_7) != 0) {

  if (VAR_2 == VAR_0)
   return 0;
  FUNC_0(VAR_3, "statvfs for \"%s\" failed: %s\n",
       VAR_6, FUNC_2(VAR_2));
 }
 return (VAR_7.f_flag & VAR_1) ? 1 : 0;
}
