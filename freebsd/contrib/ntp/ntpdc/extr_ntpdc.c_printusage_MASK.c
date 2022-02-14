
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xcmd {char* keyword; int* arg; char** desc; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static void
FUNC_1(
 struct xcmd *VAR_4,
 FILE *VAR_5
 )
{
 int VAR_6, VAR_7;

 VAR_7 = 0;
 (void) FUNC_0(VAR_5, "usage: %s", VAR_4->keyword);
 for (VAR_6 = 0; VAR_6 < VAR_0 && VAR_4->arg[VAR_6] != VAR_1; VAR_6++) {
  if (VAR_7 == 0 && (VAR_4->arg[VAR_6] & ~VAR_3) == VAR_2) {
   (void) FUNC_0(VAR_5, " [ -4|-6 ]");
   VAR_7 = 1;
  }
  if (VAR_4->arg[VAR_6] & VAR_3)
      (void) FUNC_0(VAR_5, " [ %s ]", VAR_4->desc[VAR_6]);
  else
      (void) FUNC_0(VAR_5, " %s", VAR_4->desc[VAR_6]);
 }
 (void) FUNC_0(VAR_5, "\n");
}
