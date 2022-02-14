
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* param; } ;
typedef TYPE_2__ X509_STORE_CTX ;
struct TYPE_12__ {scalar_t__ reason; } ;
typedef TYPE_3__ X509_REVOKED ;
struct TYPE_13__ {int flags; } ;
typedef TYPE_4__ X509_CRL ;
typedef int X509 ;
struct TYPE_10__ {int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_4__*,TYPE_3__**,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_2(X509_STORE_CTX *VAR_5, X509_CRL *VAR_6, X509 *VAR_7)
{
    X509_REVOKED *VAR_8;







    if (!(VAR_5->param->flags & VAR_4)
        && (VAR_6->flags & VAR_1) &&
        !FUNC_1(VAR_5, VAR_3))
        return 0;




    if (FUNC_0(VAR_6, &VAR_8, VAR_7)) {
        if (VAR_8->reason == VAR_0)
            return 2;
        if (!FUNC_1(VAR_5, VAR_2))
            return 0;
    }

    return 1;
}
