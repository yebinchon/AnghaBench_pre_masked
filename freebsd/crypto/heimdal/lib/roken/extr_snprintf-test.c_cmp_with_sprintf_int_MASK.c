
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int_values ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int) ;

__attribute__((used)) static int
FUNC_1 (void)
{
    int VAR_2 = 0;
    int VAR_3[] = {VAR_1, -17, -1, 0, 1, 17, 4711, 65535, VAR_0};
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < sizeof(VAR_3) / sizeof(VAR_3[0]); ++VAR_4) {
 VAR_2 += FUNC_0 ("%d", VAR_3[VAR_4]);
 VAR_2 += FUNC_0 ("%x", VAR_3[VAR_4]);
 VAR_2 += FUNC_0 ("%X", VAR_3[VAR_4]);
 VAR_2 += FUNC_0 ("%o", VAR_3[VAR_4]);
 VAR_2 += FUNC_0 ("%#x", VAR_3[VAR_4]);
 VAR_2 += FUNC_0 ("%#X", VAR_3[VAR_4]);
 VAR_2 += FUNC_0 ("%#o", VAR_3[VAR_4]);
 VAR_2 += FUNC_0 ("%10d", VAR_3[VAR_4]);
 VAR_2 += FUNC_0 ("%10x", VAR_3[VAR_4]);
 VAR_2 += FUNC_0 ("%10X", VAR_3[VAR_4]);
 VAR_2 += FUNC_0 ("%10o", VAR_3[VAR_4]);
 VAR_2 += FUNC_0 ("%#10x", VAR_3[VAR_4]);
 VAR_2 += FUNC_0 ("%#10X", VAR_3[VAR_4]);
 VAR_2 += FUNC_0 ("%#10o", VAR_3[VAR_4]);
 VAR_2 += FUNC_0 ("%-10d", VAR_3[VAR_4]);
 VAR_2 += FUNC_0 ("%-10x", VAR_3[VAR_4]);
 VAR_2 += FUNC_0 ("%-10X", VAR_3[VAR_4]);
 VAR_2 += FUNC_0 ("%-10o", VAR_3[VAR_4]);
 VAR_2 += FUNC_0 ("%-#10x", VAR_3[VAR_4]);
 VAR_2 += FUNC_0 ("%-#10X", VAR_3[VAR_4]);
 VAR_2 += FUNC_0 ("%-#10o", VAR_3[VAR_4]);
    }
    return VAR_2;
}
