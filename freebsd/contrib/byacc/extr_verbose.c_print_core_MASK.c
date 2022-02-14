
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nitems; int* items; } ;
typedef TYPE_1__ core ;
typedef size_t Value_t ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char,int ) ;
 size_t* VAR_0 ;
 size_t* VAR_1 ;
 int* VAR_2 ;
 TYPE_1__** VAR_3 ;
 char** VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_2(int VAR_6)
{
    int VAR_7;
    int VAR_8;
    int VAR_9;
    core *VAR_10;
    Value_t *VAR_11;
    Value_t *VAR_12;

    VAR_10 = VAR_3[VAR_6];
    VAR_8 = VAR_10->nitems;

    for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
    {
 VAR_12 = VAR_11 = VAR_0 + VAR_10->items[VAR_7];

 while (*VAR_11 >= 0)
     ++VAR_11;
 VAR_9 = -(*VAR_11);
 FUNC_0(VAR_5, "\t%s : ", VAR_4[VAR_1[VAR_9]]);

 for (VAR_11 = VAR_0 + VAR_2[VAR_9]; VAR_11 < VAR_12; VAR_11++)
     FUNC_0(VAR_5, "%s ", VAR_4[*VAR_11]);

 FUNC_1('.', VAR_5);

 while (*VAR_11 >= 0)
 {
     FUNC_0(VAR_5, " %s", VAR_4[*VAR_11]);
     VAR_11++;
 }
 FUNC_0(VAR_5, "  (%lu)\n", -2 - *VAR_11);
    }
}
