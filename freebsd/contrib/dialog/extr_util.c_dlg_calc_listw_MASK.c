
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

int
FUNC_1(int VAR_0, char **VAR_1, int VAR_2)
{
    int VAR_3, VAR_4, VAR_5 = 0, VAR_6 = 0;
    for (VAR_4 = 0; VAR_4 < (VAR_0 * VAR_2); VAR_4 += VAR_2) {
 if ((VAR_3 = FUNC_0(VAR_1[VAR_4])) > VAR_5)
     VAR_5 = VAR_3;
 if ((VAR_3 = FUNC_0(VAR_1[VAR_4 + 1])) > VAR_6)
     VAR_6 = VAR_3;
    }
    return VAR_5 + VAR_6;
}
