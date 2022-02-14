
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t yytype_int16 ;
typedef int YYSTYPE ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int *) ;
 int* VAR_1 ;
 unsigned long* VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static void
FUNC_2 (yytype_int16 *VAR_4, YYSTYPE *VAR_5, int VAR_6)
{
  unsigned long int VAR_7 = VAR_2[VAR_6];
  int VAR_8 = VAR_1[VAR_6];
  int VAR_9;
  FUNC_0 (VAR_0, "Reducing stack by rule %d (line %lu):\n",
             VAR_6 - 1, VAR_7);

  for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
    {
      FUNC_0 (VAR_0, "   $%d = ", VAR_9 + 1);
      FUNC_1 (VAR_0,
                       VAR_3[VAR_4[VAR_9 + 1 - VAR_8]],
                       &(VAR_5[(VAR_9 + 1) - (VAR_8)])
                                              );
      FUNC_0 (VAR_0, "\n");
    }
}
