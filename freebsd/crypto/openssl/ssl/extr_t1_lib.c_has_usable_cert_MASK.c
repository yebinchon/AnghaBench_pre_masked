
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int sig_idx; } ;
struct TYPE_12__ {TYPE_2__* cert; } ;
struct TYPE_11__ {TYPE_1__* pkeys; } ;
struct TYPE_10__ {int privatekey; int x509; } ;
typedef TYPE_3__ SSL ;
typedef TYPE_4__ SIGALG_LOOKUP ;


 int FUNC_0 (TYPE_3__*,TYPE_4__ const*,int ,int ) ;
 int FUNC_1 (TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_2(SSL *VAR_0, const SIGALG_LOOKUP *VAR_1, int VAR_2)
{

    if (VAR_2 == -1)
        VAR_2 = VAR_1->sig_idx;
    if (!FUNC_1(VAR_0, VAR_2))
        return 0;

    return FUNC_0(VAR_0, VAR_1, VAR_0->cert->pkeys[VAR_2].x509,
                             VAR_0->cert->pkeys[VAR_2].privatekey);
}
