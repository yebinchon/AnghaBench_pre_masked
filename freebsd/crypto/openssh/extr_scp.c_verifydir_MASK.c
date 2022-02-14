
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int ) ;
 int FUNC_3 (char*,struct stat*) ;
 int FUNC_4 (int ) ;

void
FUNC_5(char *VAR_2)
{
 struct stat VAR_3;

 if (!FUNC_3(VAR_2, &VAR_3)) {
  if (FUNC_0(VAR_3.st_mode))
   return;
  VAR_1 = VAR_0;
 }
 FUNC_2("%s: %s", VAR_2, FUNC_4(VAR_1));
 FUNC_1(0);
}
