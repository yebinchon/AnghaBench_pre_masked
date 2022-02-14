
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ) ;
 char* VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;

int
FUNC_1 (
    int VAR_3,
    char **VAR_4)
{

    VAR_1--;
    VAR_2++;

    if (VAR_4[VAR_1][(int) (VAR_2+1)] != '\0')
    {
        VAR_0 = &VAR_4[VAR_1++][(int) (VAR_2+1)];
    }
    else if (++VAR_1 >= VAR_3)
    {
        FUNC_0 ("\nOption requires an argument", 0);

        VAR_2 = 1;
        return (-1);
    }
    else
    {
        VAR_0 = VAR_4[VAR_1++];
    }

    VAR_2 = 1;
    return (0);
}
