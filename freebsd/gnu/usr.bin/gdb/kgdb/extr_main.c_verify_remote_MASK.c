
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int path ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char*,char*) ;
 int FUNC_3 (char*) ;
 char* VAR_1 ;
 int FUNC_4 (char*,int,char*,char*) ;
 scalar_t__ FUNC_5 (char*,struct stat*) ;
 char* FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(void)
{
 char VAR_2[VAR_0];
 struct stat VAR_3;

 if (FUNC_5(VAR_1, &VAR_3) != 0) {
  FUNC_4(VAR_2, sizeof(VAR_2), "/dev/%s", VAR_1);
  if (FUNC_5(VAR_2, &VAR_3) != 0)
   return;
  FUNC_3(VAR_1);
  VAR_1 = FUNC_6(VAR_2);
 }
 if (!FUNC_0(VAR_3.st_mode) && !FUNC_1(VAR_3.st_mode))
  FUNC_2(1, "%s: not a special file, FIFO or socket", VAR_1);
}
