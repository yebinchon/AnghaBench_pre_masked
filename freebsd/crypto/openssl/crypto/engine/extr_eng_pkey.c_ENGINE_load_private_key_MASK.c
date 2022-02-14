
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UI_METHOD ;
struct TYPE_4__ {scalar_t__ funct_ref; int * (* load_privkey ) (TYPE_1__*,char const*,int *,void*) ;} ;
typedef int EVP_PKEY ;
typedef TYPE_1__ ENGINE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_3 (TYPE_1__*,char const*,int *,void*) ;

EVP_PKEY *FUNC_4(ENGINE *VAR_6, const char *VAR_7,
                                  UI_METHOD *VAR_8, void *VAR_9)
{
    EVP_PKEY *VAR_10;

    if (VAR_6 == ((void*)0)) {
        FUNC_2(VAR_0,
                  VAR_4);
        return 0;
    }
    FUNC_1(VAR_5);
    if (VAR_6->funct_ref == 0) {
        FUNC_0(VAR_5);
        FUNC_2(VAR_0, VAR_2);
        return 0;
    }
    FUNC_0(VAR_5);
    if (!VAR_6->load_privkey) {
        FUNC_2(VAR_0,
                  VAR_3);
        return 0;
    }
    VAR_10 = VAR_6->load_privkey(VAR_6, VAR_7, VAR_8, VAR_9);
    if (!VAR_10) {
        FUNC_2(VAR_0,
                  VAR_1);
        return 0;
    }
    return VAR_10;
}
