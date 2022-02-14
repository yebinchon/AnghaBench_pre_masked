
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int strVal; int nestVal; } ;
struct TYPE_6__ {TYPE_1__ v; } ;
typedef TYPE_2__ tOptionValue ;




 int VAR_0 ;
 char* FUNC_0 (char const*) ;
 char* FUNC_1 (char const*) ;
 TYPE_2__* FUNC_2 (int *,char const*,size_t,char const*,size_t) ;
 int FUNC_3 (int ,int *) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (char const*) ;

__attribute__((used)) static char const *
FUNC_6(char const * VAR_2, tOptionValue * VAR_3)
{
    tOptionValue * VAR_4;
    char const * VAR_5 = VAR_2+1;
    char const * VAR_6;
    size_t VAR_7 = 1;
    size_t VAR_8 = 0;





    VAR_5 = FUNC_1(VAR_2 + 1);
    if (VAR_5[-1] == ':')
        VAR_5--;
    VAR_7 = (size_t)(VAR_5 - VAR_2);

    VAR_5 = FUNC_0(VAR_5);

 re_switch:

    switch (*VAR_5) {
    case '=':
    case ':':
        VAR_5 = FUNC_0(VAR_5 + 1);
        if ((*VAR_5 == '=') || (*VAR_5 == ':'))
            goto default_char;
        goto re_switch;

    case 129:
    case ',':
        VAR_5++;


    case 128:
        FUNC_2(&(VAR_3->v.nestVal), VAR_2, VAR_7, ((void*)0), (size_t)0);
        break;

    case '"':
    case '\'':
        VAR_6 = VAR_5;
        VAR_5 = FUNC_5(VAR_5);
        VAR_8 = (size_t)(VAR_5 - VAR_6);
        VAR_4 = FUNC_2(&(VAR_3->v.nestVal), VAR_2, VAR_7, VAR_6,
                         VAR_8);
        if ((VAR_4 != ((void*)0)) && (VAR_1 == VAR_0))
            FUNC_3(VAR_4->v.strVal, ((void*)0));
        break;

    default:
    default_char:




        VAR_6 = VAR_5;
        for (;;) {
            char VAR_9 = *(VAR_5++);
            switch (VAR_9) {
            case 128:
                VAR_5--;
                VAR_8 = (size_t)(VAR_5 - VAR_6);
                goto string_done;


            case 129:
                if ( (VAR_5 > VAR_6 + 2)
                    && (VAR_5[-2] == '\\')
                    && (VAR_5[ 0] != 128))
                    continue;


            case ',':
                VAR_8 = (size_t)(VAR_5 - VAR_6) - 1;
            string_done:
                VAR_4 = FUNC_2(&(VAR_3->v.nestVal), VAR_2, VAR_7,
                                     VAR_6, VAR_8);
                if (VAR_4 != ((void*)0))
                    FUNC_4(VAR_4->v.strVal);
                goto leave_scan_name;
            }
        }
        break;
    } leave_scan_name:;

    return VAR_5;
}
