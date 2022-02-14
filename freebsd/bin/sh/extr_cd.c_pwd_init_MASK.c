
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_dev; scalar_t__ st_ino; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int * FUNC_1 () ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (char*,scalar_t__,int ) ;
 int FUNC_6 (char*,struct stat*) ;

void
FUNC_7(int VAR_2)
{
 char *VAR_3;
 struct stat VAR_4, VAR_5;

 VAR_3 = FUNC_2("PWD");
 if (VAR_3 && *VAR_3 == '/' && FUNC_6(".", &VAR_4) != -1 &&
     FUNC_6(VAR_3, &VAR_5) != -1 &&
     VAR_4.st_dev == VAR_5.st_dev &&
     VAR_4.st_ino == VAR_5.st_ino) {
  if (VAR_1)
   FUNC_0(VAR_1);
  VAR_1 = FUNC_4(VAR_3);
 }
 if (FUNC_1() == ((void*)0) && VAR_2)
  FUNC_3("sh: cannot determine working directory\n");
 FUNC_5("PWD", VAR_1, VAR_0);
}
