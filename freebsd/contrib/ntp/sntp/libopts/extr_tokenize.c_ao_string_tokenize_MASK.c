
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int** tkn_list; size_t tkn_ct; } ;
typedef TYPE_1__ token_list_t ;
typedef int ch_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const) ;

 char* FUNC_1 (char const*) ;
 TYPE_1__* FUNC_2 (char const*) ;
 int FUNC_3 (int**,char const**) ;
 int FUNC_4 (int**,char const**) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_1__*) ;

token_list_t *
FUNC_6(char const * VAR_2)
{
    token_list_t * VAR_3 = FUNC_2(VAR_2);
    ch_t * VAR_4;




    if (VAR_3 == ((void*)0))
        return VAR_3;

    VAR_4 = (ch_t *)(VAR_3->tkn_list[0]);
    VAR_3->tkn_ct = 0;

    do {
        VAR_3->tkn_list[ VAR_3->tkn_ct++ ] = VAR_4;
        for (;;) {
            int VAR_5 = (ch_t)*VAR_2;
            if (FUNC_0(VAR_5)) {
            found_white_space:
                VAR_2 = FUNC_1(VAR_2+1);
                break;
            }

            switch (VAR_5) {
            case '"':
                FUNC_3(&VAR_4, &VAR_2);
                if (VAR_2 == ((void*)0)) {
                    FUNC_5(VAR_3);
                    VAR_1 = VAR_0;
                    return ((void*)0);
                }
                if (FUNC_0(*VAR_2))
                    goto found_white_space;
                break;

            case '\'':
                FUNC_4(&VAR_4, &VAR_2);
                if (VAR_2 == ((void*)0)) {
                    FUNC_5(VAR_3);
                    VAR_1 = VAR_0;
                    return ((void*)0);
                }
                if (FUNC_0(*VAR_2))
                    goto found_white_space;
                break;

            case 128:
                goto copy_done;

            default:
                VAR_2++;
                *(VAR_4++) = (unsigned char)VAR_5;
            }
        } copy_done:;




        *(VAR_4++) = 128;
    } while (*VAR_2 != 128);

    VAR_3->tkn_list[ VAR_3->tkn_ct ] = ((void*)0);

    return VAR_3;
}
