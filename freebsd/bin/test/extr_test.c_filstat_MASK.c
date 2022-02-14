
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; int st_gid; int st_uid; int st_size; } ;
typedef int off_t ;
typedef enum token { ____Placeholder_token } token ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (char*,struct stat*) ;
 scalar_t__ FUNC_11 (char*,struct stat*) ;

__attribute__((used)) static int
FUNC_12(char *VAR_10, enum token VAR_11)
{
 struct stat VAR_12;

 if (VAR_11 == 130 ? FUNC_10(VAR_10, &VAR_12) : FUNC_11(VAR_10, &VAR_12))
  return 0;

 switch (VAR_11) {
 case 136:
  return (FUNC_7(VAR_10, VAR_1) == 0);
 case 128:
  return (FUNC_7(VAR_10, VAR_8) == 0);
 case 141:

  if (FUNC_7(VAR_10, VAR_9) != 0)
   return 0;
  if (FUNC_2(VAR_12.st_mode) || FUNC_9() != 0)
   return 1;
  return (VAR_12.st_mode & (VAR_7 | VAR_5 | VAR_6)) != 0;
 case 140:
  return (FUNC_7(VAR_10, VAR_0) == 0);
 case 135:
  return FUNC_5(VAR_12.st_mode);
 case 142:
  return FUNC_2(VAR_12.st_mode);
 case 143:
  return FUNC_1(VAR_12.st_mode);
 case 144:
  return FUNC_0(VAR_12.st_mode);
 case 139:
  return FUNC_3(VAR_12.st_mode);
 case 133:
  return FUNC_6(VAR_12.st_mode);
 case 130:
  return FUNC_4(VAR_12.st_mode);
 case 131:
  return (VAR_12.st_mode & VAR_3) != 0;
 case 134:
  return (VAR_12.st_mode & VAR_2) != 0;
 case 132:
  return (VAR_12.st_mode & VAR_4) != 0;
 case 137:
  return VAR_12.st_size > (off_t)0;
 case 129:
  return VAR_12.st_uid == FUNC_9();
 case 138:
  return VAR_12.st_gid == FUNC_8();
 default:
  return 1;
 }
}
