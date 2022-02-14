
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int base; scalar_t__ state; } ;
typedef int STRINGINFO ;
typedef TYPE_1__ FICL_VM ;
typedef unsigned int FICL_INT ;
typedef int FICL_COUNT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (TYPE_1__*) ;
 char FUNC_5 (unsigned int) ;

int FUNC_6(FICL_VM *VAR_3, STRINGINFO VAR_4)
{
    FICL_INT VAR_5 = 0;
    char VAR_6 = VAR_1;
 char VAR_7 = VAR_1;
    unsigned VAR_8 = VAR_3->base;
    char *VAR_9 = FUNC_2(VAR_4);
    FICL_COUNT VAR_10= (FICL_COUNT)FUNC_1(VAR_4);
    unsigned VAR_11;
    unsigned VAR_12;

    if (VAR_10 > 1)
    {
        switch (*VAR_9)
        {
        case '-':
            VAR_9++;
            VAR_10--;
            VAR_6 = VAR_2;
            break;
        case '+':
            VAR_9++;
            VAR_10--;
            VAR_6 = VAR_1;
            break;
        default:
            break;
        }
    }

    if ((VAR_10 > 0) && (VAR_9[VAR_10-1] == '.'))
    {
        VAR_7 = VAR_2;
        VAR_10--;
    }

    if (VAR_10 == 0)
        return VAR_1;

    while ((VAR_10--) && ((VAR_11 = *VAR_9++) != '\0'))
    {
        if (!FUNC_3(VAR_11))
            return VAR_1;

        VAR_12 = VAR_11 - '0';

        if (VAR_12 > 9)
            VAR_12 = FUNC_5(VAR_11) - 'a' + 10;

        if (VAR_12 >= VAR_8)
            return VAR_1;

        VAR_5 = VAR_5 * VAR_8 + VAR_12;
    }

 if (VAR_7)
  FUNC_0(0);

    if (VAR_6)
        VAR_5 = -VAR_5;

    FUNC_0(VAR_5);
    if (VAR_3->state == VAR_0)
        FUNC_4(VAR_3);

    return VAR_2;
}
