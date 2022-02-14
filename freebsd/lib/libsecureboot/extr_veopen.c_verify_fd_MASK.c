
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int off_t ;


 int FUNC_0 (int ) ;

 int VAR_0 ;


 int VAR_1 ;
 char* FUNC_1 (int,char const*) ;
 scalar_t__ FUNC_2 (int,struct stat*) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (int,char const*,char*,int ) ;

int
FUNC_5(int VAR_2, const char *VAR_3, off_t VAR_4, struct stat *VAR_5)
{
 struct stat VAR_6;
 char *VAR_7;
 int VAR_8;

 if (!VAR_5) {
  if (FUNC_2(VAR_2, &VAR_6) == 0)
   VAR_5 = &VAR_6;
 }
 if (VAR_5 && !FUNC_0(VAR_5->st_mode))
  return (0);
 VAR_7 = FUNC_1(VAR_2, VAR_3);
 if (!VAR_7) {
  FUNC_3("%s: no entry", VAR_3);
  return (VAR_0);
 }
 VAR_8 = FUNC_4(VAR_2, VAR_3, VAR_7, VAR_4);
 switch (VAR_8) {
 case 129:
 case 130:
 case 128:
  return (VAR_8);
 default:
  return (VAR_1);
 }
}
