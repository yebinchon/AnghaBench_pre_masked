
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int iplen; scalar_t__ ip; int emaillen; scalar_t__ email; scalar_t__ hosts; } ;
typedef TYPE_1__ X509_VERIFY_PARAM ;
struct TYPE_7__ {int * cert; TYPE_1__* param; } ;
typedef TYPE_2__ X509_STORE_CTX ;
typedef int X509 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_1 (int *,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_4(X509_STORE_CTX *VAR_3)
{
    X509_VERIFY_PARAM *VAR_4 = VAR_3->param;
    X509 *VAR_5 = VAR_3->cert;
    if (VAR_4->hosts && FUNC_2(VAR_5, VAR_4) <= 0) {
        if (!FUNC_3(VAR_3, VAR_1))
            return 0;
    }
    if (VAR_4->email && FUNC_0(VAR_5, VAR_4->email, VAR_4->emaillen, 0) <= 0) {
        if (!FUNC_3(VAR_3, VAR_0))
            return 0;
    }
    if (VAR_4->ip && FUNC_1(VAR_5, VAR_4->ip, VAR_4->iplen, 0) <= 0) {
        if (!FUNC_3(VAR_3, VAR_2))
            return 0;
    }
    return 1;
}
