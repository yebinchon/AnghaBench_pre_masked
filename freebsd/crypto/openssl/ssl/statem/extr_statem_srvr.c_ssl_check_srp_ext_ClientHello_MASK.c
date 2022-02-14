
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int * login; int * TLS_ext_srp_username_callback; } ;
struct TYPE_13__ {TYPE_4__ srp_ctx; TYPE_3__* s3; } ;
struct TYPE_10__ {TYPE_1__* new_cipher; } ;
struct TYPE_11__ {TYPE_2__ tmp; } ;
struct TYPE_9__ {int algorithm_mkey; } ;
typedef TYPE_5__ SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_5__*,int*) ;
 int FUNC_1 (TYPE_5__*,int,int ,int ) ;

__attribute__((used)) static int FUNC_2(SSL *VAR_7)
{
    int VAR_8;
    int VAR_9 = VAR_2;

    if ((VAR_7->s3->tmp.new_cipher->algorithm_mkey & VAR_6) &&
        (VAR_7->srp_ctx.TLS_ext_srp_username_callback != ((void*)0))) {
        if (VAR_7->srp_ctx.login == ((void*)0)) {




            FUNC_1(VAR_7, VAR_1,
                     VAR_3,
                     VAR_5);
            return -1;
        } else {
            VAR_8 = FUNC_0(VAR_7, &VAR_9);
            if (VAR_8 < 0)
                return 0;
            if (VAR_8 == VAR_0) {
                FUNC_1(VAR_7, VAR_9, VAR_3,
                         VAR_9 == VAR_1
                         ? VAR_5
                         : VAR_4);
                return -1;
            }
        }
    }
    return 1;
}
