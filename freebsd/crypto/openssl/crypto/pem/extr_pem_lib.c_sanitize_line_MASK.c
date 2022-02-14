
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;

__attribute__((used)) static int FUNC_2(char *VAR_2, int VAR_3, unsigned int VAR_4)
{
    int VAR_5;

    if (VAR_4 & VAR_0) {

        while ((VAR_3 >= 0) && (VAR_2[VAR_3] <= ' '))
            VAR_3--;

        VAR_3++;
    } else if (VAR_4 & VAR_1) {
        for (VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5) {
            if (!FUNC_0(VAR_2[VAR_5]) || VAR_2[VAR_5] == '\n'
                || VAR_2[VAR_5] == '\r')
                break;
        }
        VAR_3 = VAR_5;
    } else {


        for (VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5) {
            if (VAR_2[VAR_5] == '\n' || VAR_2[VAR_5] == '\r')
                break;
            if (FUNC_1(VAR_2[VAR_5]))
                VAR_2[VAR_5] = ' ';
        }
        VAR_3 = VAR_5;
    }

    VAR_2[VAR_3++] = '\n';
    VAR_2[VAR_3] = '\0';
    return VAR_3;
}
