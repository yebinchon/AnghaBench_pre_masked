
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ** tkn_list; } ;
typedef TYPE_1__ token_list_t ;
typedef int ch_t ;


 char* FUNC_0 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 char const VAR_2 ;
 char* FUNC_1 (char const*) ;
 int VAR_3 ;
 TYPE_1__* FUNC_2 (int) ;

__attribute__((used)) static token_list_t *
FUNC_3(char const * VAR_4)
{
    token_list_t * VAR_5;

    int VAR_6 = 2;

    if (VAR_4 == ((void*)0)) goto enoent_res;





    VAR_4 = FUNC_1(VAR_4);
    if (*VAR_4 == VAR_2) goto enoent_res;






    {
        char const * VAR_7 = VAR_4;

        do {
            VAR_6++;
            VAR_7 = FUNC_0(VAR_7+1);
            VAR_7 = FUNC_1(VAR_7);
        } while (*VAR_7 != VAR_2);

        VAR_5 = FUNC_2(sizeof(*VAR_5) + (size_t)(VAR_7 - VAR_4)
                     + ((size_t)VAR_6 * sizeof(ch_t *)));
    }

    if (VAR_5 == ((void*)0))
        VAR_3 = VAR_1;
    else VAR_5->tkn_list[0] = (ch_t *)(VAR_5->tkn_list + (VAR_6 - 1));

    return VAR_5;

    enoent_res:

    VAR_3 = VAR_0;
    return ((void*)0);
}
