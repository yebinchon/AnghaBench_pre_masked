
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int valType; } ;
typedef TYPE_1__ tOptionValue ;


 int FUNC_0 (char const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char const* FUNC_1 (char const*) ;
 int FUNC_2 (char const*,size_t) ;
 char const* FUNC_3 (char const*) ;

__attribute__((used)) static char const *
FUNC_4(char const * VAR_7, tOptionValue * VAR_8)
{
    size_t VAR_9 = 0;

    if (*(VAR_7++) != '=')
        goto woops;

    VAR_9 = (size_t)(FUNC_1(VAR_7) - VAR_7);

    if ((VAR_9 == 0) || (! FUNC_0(VAR_7[VAR_9]))) {
    woops:
        VAR_8->valType = VAR_4;
        return FUNC_3(VAR_7 + VAR_9);
    }







    switch (FUNC_2(VAR_7, VAR_9)) {
    default:
    case 128: goto woops;

    case 129:
        VAR_8->valType = VAR_6;
        break;

    case 134:
        VAR_8->valType = VAR_5;
        break;

    case 137:
    case 136:
        VAR_8->valType = VAR_0;
        break;

    case 133:
        VAR_8->valType = VAR_1;
        break;

    case 131:
    case 130:
        VAR_8->valType = VAR_3;
        break;

    case 132:
    case 135:
        VAR_8->valType = VAR_2;
    }

    return VAR_7 + VAR_9;
}
