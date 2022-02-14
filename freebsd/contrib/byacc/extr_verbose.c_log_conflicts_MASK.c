
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int) ;
 int* VAR_0 ;
 int* VAR_1 ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2(void)
{
    int VAR_4;

    FUNC_1(VAR_3, "\n\n");
    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
    {
 if (VAR_1[VAR_4] || VAR_0[VAR_4])
 {
     FUNC_1(VAR_3, "State %d contains ", VAR_4);
     if (VAR_1[VAR_4] > 0)
  FUNC_1(VAR_3, "%d shift/reduce conflict%s",
   VAR_1[VAR_4],
   FUNC_0(VAR_1[VAR_4]));
     if (VAR_1[VAR_4] && VAR_0[VAR_4])
  FUNC_1(VAR_3, ", ");
     if (VAR_0[VAR_4] > 0)
  FUNC_1(VAR_3, "%d reduce/reduce conflict%s",
   VAR_0[VAR_4],
   FUNC_0(VAR_0[VAR_4]));
     FUNC_1(VAR_3, ".\n");
 }
    }
}
