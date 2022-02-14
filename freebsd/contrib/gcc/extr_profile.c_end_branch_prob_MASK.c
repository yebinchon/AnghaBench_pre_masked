
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,char*,...) ;
 int* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

void
FUNC_1 (void)
{
  if (VAR_0)
    {
      FUNC_0 (VAR_0, "\n");
      FUNC_0 (VAR_0, "Total number of blocks: %d\n",
        VAR_2);
      FUNC_0 (VAR_0, "Total number of edges: %d\n", VAR_5);
      FUNC_0 (VAR_0, "Total number of ignored edges: %d\n",
        VAR_6);
      FUNC_0 (VAR_0, "Total number of instrumented edges: %d\n",
        VAR_7);
      FUNC_0 (VAR_0, "Total number of blocks created: %d\n",
        VAR_3);
      FUNC_0 (VAR_0, "Total number of graph solution passes: %d\n",
        VAR_9);
      if (VAR_10 != 0)
 FUNC_0 (VAR_0, "Average number of graph solution passes: %d\n",
   (VAR_9 + (VAR_10 >> 1))
   / VAR_10);
      FUNC_0 (VAR_0, "Total number of branches: %d\n",
        VAR_4);
      FUNC_0 (VAR_0, "Total number of branches never executed: %d\n",
        VAR_8);
      if (VAR_4)
 {
   int VAR_11;

   for (VAR_11 = 0; VAR_11 < 10; VAR_11++)
     FUNC_0 (VAR_0, "%d%% branches in range %d-%d%%\n",
       (VAR_1[VAR_11] + VAR_1[19-VAR_11]) * 100
       / VAR_4, 5*VAR_11, 5*VAR_11+5);
 }
    }
}
