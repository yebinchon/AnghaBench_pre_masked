
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * pending; } ;
struct TYPE_6__ {int * pending; } ;
struct TYPE_8__ {int allocator; int ctx; int biom; int ssl; TYPE_2__ encrypt; TYPE_1__ decrypt; } ;
typedef TYPE_3__ serf_ssl_context_t ;
typedef int apr_status_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,TYPE_3__*) ;

__attribute__((used)) static apr_status_t FUNC_5(
    serf_ssl_context_t *VAR_1)
{

    if (VAR_1->decrypt.pending != ((void*)0)) {
        FUNC_3(VAR_1->decrypt.pending);
    }
    if (VAR_1->encrypt.pending != ((void*)0)) {
        FUNC_3(VAR_1->encrypt.pending);
    }


    FUNC_1(VAR_1->ssl);
    FUNC_2(VAR_1->biom);
    FUNC_0(VAR_1->ctx);

    FUNC_4(VAR_1->allocator, VAR_1);

    return VAR_0;
}
