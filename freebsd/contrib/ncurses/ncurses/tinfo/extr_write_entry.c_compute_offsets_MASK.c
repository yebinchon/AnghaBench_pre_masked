
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(char **VAR_2, size_t VAR_3, short *VAR_4)
{
    int VAR_5 = 0;
    size_t VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
 if (VAR_2[VAR_6] == VAR_0) {
     VAR_4[VAR_6] = -1;
 } else if (VAR_2[VAR_6] == VAR_1) {
     VAR_4[VAR_6] = -2;
 } else {
     VAR_4[VAR_6] = (short) VAR_5;
     VAR_5 += (int) FUNC_2(VAR_2[VAR_6]) + 1;
     FUNC_0(("put Strings[%d]=%s(%d)", (int) VAR_6,
         FUNC_1(VAR_2[VAR_6]), (int) VAR_5));
 }
    }
    return VAR_5;
}
