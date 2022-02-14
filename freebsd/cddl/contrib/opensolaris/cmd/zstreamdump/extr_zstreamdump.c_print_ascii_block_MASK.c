
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(char *VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  char VAR_4 = FUNC_0(VAR_1[VAR_3]) ? VAR_1[VAR_3] : '.';
  if (VAR_3 != 0 && VAR_3 % VAR_0 == 0) {
   (void) FUNC_1(" ");
  }
  (void) FUNC_1("%c", VAR_4);
 }
 (void) FUNC_1("\n");
}
