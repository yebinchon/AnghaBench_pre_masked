
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (char*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 char** VAR_11 ;
 char* VAR_12 ;
 int* VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;

__attribute__((used)) static void
FUNC_8(FILE * VAR_17)
{
    int VAR_18, VAR_19;
    char *VAR_20;

    for (VAR_19 = 2; VAR_19 < VAR_7; ++VAR_19)
    {
 VAR_20 = VAR_11[VAR_19];
 if (FUNC_3(VAR_20) && (!VAR_10 || *VAR_20 != '"'))
 {
     FUNC_0(VAR_17, "#define ");
     VAR_18 = *VAR_20;
     if (VAR_18 == '"')
     {
  while ((VAR_18 = *++VAR_20) != '"')
  {
      FUNC_5(VAR_18, VAR_17);
  }
     }
     else
     {
  do
  {
      FUNC_5(VAR_18, VAR_17);
  }
  while ((VAR_18 = *++VAR_20) != 0);
     }
     if (VAR_17 == VAR_1)
  ++VAR_8;
     FUNC_0(VAR_17, " %d\n", VAR_13[VAR_19]);
 }
    }

    if (VAR_17 == VAR_1)
 ++VAR_8;
    if (VAR_17 != VAR_2 || VAR_5)
 FUNC_0(VAR_17, "#define YYERRCODE %d\n", VAR_13[1]);

    if (VAR_14 && VAR_9 && VAR_17 != VAR_4)
    {
 if (VAR_17 == VAR_1)
     ++VAR_8;
 FUNC_1("#undef yytname\n", VAR_17);
 if (VAR_17 == VAR_1)
     ++VAR_8;
 FUNC_1("#define yytname yyname\n", VAR_17);
    }

    if (VAR_17 == VAR_2 || (VAR_5 && !VAR_3))
    {
 if (VAR_16)
 {
     if (VAR_15 != 0)
     {
  FUNC_7(VAR_15);
  while ((VAR_18 = FUNC_2(VAR_15)) != VAR_0)
      FUNC_6(VAR_17, VAR_18);
     }
     FUNC_0(VAR_17, "extern YYSTYPE %slval;\n", VAR_12);
 }




    }
}
