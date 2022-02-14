
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_size_t ;


 int FUNC_0 (unsigned char const,char,unsigned char*) ;
 scalar_t__ FUNC_1 (unsigned char const) ;
 int FUNC_2 (unsigned char const) ;

apr_size_t FUNC_3(char *VAR_0, const char *VAR_1,
                                apr_size_t VAR_2)
{
    unsigned char *VAR_3, *VAR_4;
    const unsigned char *VAR_5;

    if (!VAR_1 || !VAR_2) {
        return 0;
    }

    VAR_3 = (unsigned char *)VAR_0;
    VAR_5 = (const unsigned char *)VAR_1;
    VAR_4 = VAR_3 + VAR_2 - 1;

    for (; VAR_3 < VAR_4 && *VAR_5; ++VAR_5) {






        if (*VAR_5 && ( !FUNC_2(*VAR_5)
                   || *VAR_5 == '\\'
                   || FUNC_1(*VAR_5))) {
            *VAR_3++ = '\\';
            if (VAR_3 >= VAR_4) {
                --VAR_3;
                break;
            }

            switch(*VAR_5) {
            case '\b':
                *VAR_3++ = 'b';
                break;
            case '\n':
                *VAR_3++ = 'n';
                break;
            case '\r':
                *VAR_3++ = 'r';
                break;
            case '\t':
                *VAR_3++ = 't';
                break;
            case '\v':
                *VAR_3++ = 'v';
                break;
            case '\\':
                *VAR_3++ = *VAR_5;
                break;
            case '"':
                VAR_3[-1] = *VAR_5;
                break;
            default:
                if (VAR_3 >= VAR_4 - 2) {
                    VAR_4 = --VAR_3;
                    break;
                }
                FUNC_0(*VAR_5, 'x', VAR_3);
                VAR_3 += 3;
            }
        }
        else {
            *VAR_3++ = *VAR_5;
        }
    }
    *VAR_3 = '\0';

    return (VAR_3 - (unsigned char *)VAR_0);
}
