
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Value_t ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__* VAR_4 ;
 int FUNC_2 (char,int ) ;
 int* VAR_5 ;
 size_t* VAR_6 ;
 int* VAR_7 ;
 char** VAR_8 ;

__attribute__((used)) static void
FUNC_3(int VAR_9)
{
    Value_t *VAR_10;
    int VAR_11;
    Value_t *VAR_12;
    Value_t *VAR_13;

    VAR_3 = (unsigned)VAR_4[VAR_9];
    FUNC_0(VAR_0, "\n\tq%d [label=\"%d:\\l", VAR_9, VAR_9);

    for (VAR_10 = VAR_1; VAR_10 < VAR_2; VAR_10++)
    {
 VAR_13 = VAR_12 = VAR_5 + *VAR_10;

 while (*VAR_12 >= 0)
     ++VAR_12;
 VAR_11 = -(*VAR_12);
 FUNC_0(VAR_0, "  %s -> ", VAR_8[VAR_6[VAR_11]]);

 for (VAR_12 = VAR_5 + VAR_7[VAR_11]; VAR_12 < VAR_13; VAR_12++)
     FUNC_0(VAR_0, "%s ", VAR_8[*VAR_12]);

 FUNC_2('.', VAR_0);

 while (*VAR_12 >= 0)
 {
     FUNC_0(VAR_0, " %s", VAR_8[*VAR_12]);
     VAR_12++;
 }

 if (*VAR_13 < 0)
     FUNC_1(-*VAR_13);

 FUNC_0(VAR_0, "\\l");
    }
    FUNC_0(VAR_0, "\"];");
}
