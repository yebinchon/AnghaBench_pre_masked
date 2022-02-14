
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ strength; scalar_t__ (* SRP_verify_param_callback ) (TYPE_1__*,int ) ;int N; int g; int SRP_cb_arg; int B; } ;
struct TYPE_6__ {TYPE_2__ srp_ctx; } ;
typedef TYPE_1__ SSL ;
typedef TYPE_2__ SRP_CTX ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (TYPE_1__*,int ,int ,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ) ;

int FUNC_6(SSL *VAR_6)
{
    SRP_CTX *VAR_7 = &VAR_6->srp_ctx;




    if (FUNC_2(VAR_7->g, VAR_7->N) >= 0 || FUNC_2(VAR_7->B, VAR_7->N) >= 0
        || FUNC_0(VAR_7->B)) {
        FUNC_4(VAR_6, VAR_0, VAR_2,
                 VAR_3);
        return 0;
    }

    if (FUNC_1(VAR_7->N) < VAR_7->strength) {
        FUNC_4(VAR_6, VAR_1, VAR_2,
                 VAR_5);
        return 0;
    }

    if (VAR_7->SRP_verify_param_callback) {
        if (VAR_7->SRP_verify_param_callback(VAR_6, VAR_7->SRP_cb_arg) <= 0) {
            FUNC_4(VAR_6, VAR_1,
                     VAR_2,
                     VAR_4);
            return 0;
        }
    } else if (!FUNC_3(VAR_7->g, VAR_7->N)) {
        FUNC_4(VAR_6, VAR_1, VAR_2,
                 VAR_5);
        return 0;
    }

    return 1;
}
