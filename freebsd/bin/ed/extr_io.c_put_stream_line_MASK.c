
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char*) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int VAR_3 ;
 char* FUNC_2 (int ) ;

int
FUNC_3(FILE *VAR_4, const char *VAR_5, int VAR_6)
{
 while (VAR_6--)
  if (FUNC_1(*VAR_5++, VAR_4) < 0) {
   FUNC_0(VAR_3, "%s\n", FUNC_2(VAR_2));
   VAR_1 = "cannot write file";
   return VAR_0;
  }
 return 0;
}
