
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_nlink; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (char*,int,int ) ;
 int FUNC_4 (int,struct stat*) ;
 int VAR_5 ;
 char* VAR_6 ;

int
FUNC_5(void)
{

 if (*VAR_6 == '\0')
  return (-1);







 for (;;) {
  struct stat VAR_7;

  VAR_5 = FUNC_3(VAR_6, VAR_3|VAR_2|VAR_1, 0);
  if (VAR_5 == -1) {
   if (VAR_4 == VAR_0) {
    FUNC_2(1, "the password db file is busy");
   } else {
    FUNC_1(1, "could not lock the passwd file: ");
   }
  }






  if (FUNC_4(VAR_5, &VAR_7) == -1)
   FUNC_1(1, "fstat() failed: ");
  if (VAR_7.st_nlink != 0)
   break;
  FUNC_0(VAR_5);
  VAR_5 = -1;
 }
 return (VAR_5);
}
