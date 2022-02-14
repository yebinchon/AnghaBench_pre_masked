
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t Value_t ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 size_t* VAR_1 ;
 size_t* VAR_2 ;
 int* VAR_3 ;
 int * VAR_4 ;
 char** VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_1(void)
{
    int VAR_7;
    Value_t *VAR_8;

    FUNC_0(VAR_6, "\n\nRules never reduced:\n");
    for (VAR_7 = 3; VAR_7 < VAR_0; ++VAR_7)
    {
 if (!VAR_4[VAR_7])
 {
     FUNC_0(VAR_6, "\t%s :", VAR_5[VAR_2[VAR_7]]);
     for (VAR_8 = VAR_1 + VAR_3[VAR_7]; *VAR_8 >= 0; ++VAR_8)
  FUNC_0(VAR_6, " %s", VAR_5[*VAR_8]);
     FUNC_0(VAR_6, "  (%d)\n", VAR_7 - 2);
 }
    }
}
