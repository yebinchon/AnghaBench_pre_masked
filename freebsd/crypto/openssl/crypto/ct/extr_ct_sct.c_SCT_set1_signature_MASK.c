
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t sig_len; int * sig; int validation_status; } ;
typedef TYPE_1__ SCT ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (unsigned char const*,size_t) ;
 int VAR_2 ;

int FUNC_3(SCT *VAR_3, const unsigned char *VAR_4, size_t VAR_5)
{
    FUNC_1(VAR_3->sig);
    VAR_3->sig = ((void*)0);
    VAR_3->sig_len = 0;
    VAR_3->validation_status = VAR_2;

    if (VAR_4 != ((void*)0) && VAR_5 > 0) {
        VAR_3->sig = FUNC_2(VAR_4, VAR_5);
        if (VAR_3->sig == ((void*)0)) {
            FUNC_0(VAR_0, VAR_1);
            return 0;
        }
        VAR_3->sig_len = VAR_5;
    }
    return 1;
}
