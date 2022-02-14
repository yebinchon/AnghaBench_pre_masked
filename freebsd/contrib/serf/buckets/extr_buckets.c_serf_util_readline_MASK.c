
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_size_t ;







 int FUNC_0 (char const**,int*,int*) ;
 char* FUNC_1 (char const*,char,int) ;

void FUNC_2(
    const char **VAR_0,
    apr_size_t *VAR_1,
    int VAR_2,
    int *VAR_3)
{
    const char *VAR_4;
    const char *VAR_5;
    const char *VAR_6;
    int VAR_7;
    int VAR_8;
    int VAR_9;




    if (VAR_2 == 131) {
        FUNC_0(VAR_0, VAR_1, VAR_3);
        return;
    }

    VAR_4 = *VAR_0;
    VAR_5 = VAR_6 = ((void*)0);
    VAR_7 = VAR_2 & 132;
    VAR_8 = VAR_2 & 131;
    VAR_9 = VAR_2 & 129;

    if (VAR_7 || VAR_8) {
        VAR_5 = FUNC_1(VAR_4, '\r', *VAR_1);
    }
    if (VAR_9) {
        VAR_6 = FUNC_1(VAR_4, '\n', *VAR_1);
    }

    if (VAR_5 != ((void*)0)) {
        if (VAR_6 != ((void*)0)) {
            if (VAR_5 + 1 == VAR_6)
                *VAR_3 = VAR_8 ? 131 : 132;
            else if (VAR_7 && VAR_5 < VAR_6)
                *VAR_3 = 132;
            else
                *VAR_3 = 129;
        }
        else if (VAR_5 == VAR_4 + *VAR_1 - 1) {




            *VAR_3 = VAR_8 ? 130 : 132;
        }
        else if (VAR_7)
            *VAR_3 = 132;
        else
            *VAR_3 = 128;
    }
    else if (VAR_6 != ((void*)0))
        *VAR_3 = 129;
    else
        *VAR_3 = 128;

    switch (*VAR_3) {
      case 129:
        *VAR_0 = VAR_6 + 1;
        break;
      case 132:
      case 131:
      case 130:
        *VAR_0 = VAR_5 + 1 + (*VAR_3 == 131);
        break;
      case 128:
        *VAR_0 += *VAR_1;
        break;
      default:

        return;
    }

    *VAR_1 -= *VAR_0 - VAR_4;
}
