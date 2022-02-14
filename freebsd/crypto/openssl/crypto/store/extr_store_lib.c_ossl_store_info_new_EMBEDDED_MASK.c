
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * pem_name; int * blob; } ;
struct TYPE_7__ {TYPE_2__ embedded; } ;
struct TYPE_9__ {TYPE_1__ _; } ;
typedef TYPE_3__ OSSL_STORE_INFO ;
typedef int BUF_MEM ;


 int VAR_0 ;
 int * FUNC_0 (char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int ) ;
 TYPE_3__* FUNC_3 (int ,int *) ;

OSSL_STORE_INFO *FUNC_4(const char *VAR_3,
                                              BUF_MEM *VAR_4)
{
    OSSL_STORE_INFO *VAR_5 = FUNC_3(VAR_2, ((void*)0));

    if (VAR_5 == ((void*)0)) {
        FUNC_2(VAR_1,
                      VAR_0);
        return ((void*)0);
    }

    VAR_5->_.embedded.blob = VAR_4;
    VAR_5->_.embedded.pem_name =
        VAR_3 == ((void*)0) ? ((void*)0) : FUNC_0(VAR_3);

    if (VAR_3 != ((void*)0) && VAR_5->_.embedded.pem_name == ((void*)0)) {
        FUNC_2(VAR_1,
                      VAR_0);
        FUNC_1(VAR_5);
        VAR_5 = ((void*)0);
    }

    return VAR_5;
}
