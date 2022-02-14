
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int,int ,char*,char*) ;
 scalar_t__ FUNC_2 (int,char*,int) ;

void
FUNC_3(int VAR_2, char *VAR_3, int VAR_4)
{
 static char VAR_5[] = "\0";





 if (!VAR_4)
  return;




 if (FUNC_0(VAR_2, (off_t)-1, VAR_0) < 0) {
  FUNC_1(1, VAR_1, "Failed seek on file %s", VAR_3);
  return;
 }

 if (FUNC_2(VAR_2, VAR_5, 1) < 0)
  FUNC_1(1, VAR_1, "Failed write to file %s", VAR_3);
 return;
}
