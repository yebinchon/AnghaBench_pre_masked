
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xcmd {char* keyword; int* arg; char** desc; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static void
FUNC_1(
 struct xcmd *VAR_3,
 FILE *VAR_4
 )
{
 register int VAR_5;



 (void) FUNC_0(VAR_4, "usage: %s", VAR_3->keyword);
 for (VAR_5 = 0; VAR_5 < VAR_0 && VAR_3->arg[VAR_5] != VAR_1; VAR_5++) {
  if (VAR_3->arg[VAR_5] & VAR_2)
      (void) FUNC_0(VAR_4, " [ %s ]", VAR_3->desc[VAR_5]);
  else
      (void) FUNC_0(VAR_4, " %s", VAR_3->desc[VAR_5]);
 }
 (void) FUNC_0(VAR_4, "\n");
}
