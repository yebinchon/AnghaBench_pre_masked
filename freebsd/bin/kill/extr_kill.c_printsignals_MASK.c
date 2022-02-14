
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 int VAR_0 ;
 char** VAR_1 ;

__attribute__((used)) static void
FUNC_1(FILE *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 1; VAR_3 < VAR_0; VAR_3++) {
  (void)FUNC_0(VAR_2, "%s", VAR_1[VAR_3]);
  if (VAR_3 == (VAR_0 / 2) || VAR_3 == (VAR_0 - 1))
   (void)FUNC_0(VAR_2, "\n");
  else
   (void)FUNC_0(VAR_2, " ");
 }
}
