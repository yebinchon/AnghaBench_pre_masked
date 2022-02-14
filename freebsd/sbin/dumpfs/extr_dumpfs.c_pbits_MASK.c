
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, int VAR_1)
{
 int VAR_2;
 char *VAR_3;
 int VAR_4, VAR_5;

 for (VAR_4 = VAR_2 = 0, VAR_3 = VAR_0; VAR_2 < VAR_1; VAR_2++)
  if (FUNC_0(VAR_3, VAR_2)) {
   if (VAR_4)
    FUNC_1(",%s", VAR_4 % 6 ? " " : "\n\t");
   VAR_4++;
   FUNC_1("%d", VAR_2);
   VAR_5 = VAR_2;
   while ((VAR_2+1)<VAR_1 && FUNC_0(VAR_3, VAR_2+1))
    VAR_2++;
   if (VAR_2 != VAR_5)
    FUNC_1("-%d", VAR_2);
  }
 FUNC_1("\n");
}
