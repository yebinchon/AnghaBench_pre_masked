
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int error_depth; int untrusted; TYPE_1__* param; int chain; } ;
typedef TYPE_2__ X509_STORE_CTX ;
typedef int X509_NAME ;
struct TYPE_9__ {int akid; } ;
typedef TYPE_3__ X509_CRL ;
typedef int X509 ;
struct TYPE_7__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ,int) ;

__attribute__((used)) static void FUNC_6(X509_STORE_CTX *VAR_6, X509_CRL *VAR_7,
                           X509 **VAR_8, int *VAR_9)
{
    X509 *VAR_10 = ((void*)0);
    X509_NAME *VAR_11 = FUNC_0(VAR_7);
    int VAR_12 = VAR_6->error_depth;
    int VAR_13;

    if (VAR_12 != FUNC_4(VAR_6->chain) - 1)
        VAR_12++;

    VAR_10 = FUNC_5(VAR_6->chain, VAR_12);

    if (FUNC_2(VAR_10, VAR_7->akid) == VAR_5) {
        if (*VAR_9 & VAR_2) {
            *VAR_9 |= VAR_0 | VAR_1;
            *VAR_8 = VAR_10;
            return;
        }
    }

    for (VAR_12++; VAR_12 < FUNC_4(VAR_6->chain); VAR_12++) {
        VAR_10 = FUNC_5(VAR_6->chain, VAR_12);
        if (FUNC_1(FUNC_3(VAR_10), VAR_11))
            continue;
        if (FUNC_2(VAR_10, VAR_7->akid) == VAR_5) {
            *VAR_9 |= VAR_0 | VAR_3;
            *VAR_8 = VAR_10;
            return;
        }
    }



    if (!(VAR_6->param->flags & VAR_4))
        return;





    for (VAR_13 = 0; VAR_13 < FUNC_4(VAR_6->untrusted); VAR_13++) {
        VAR_10 = FUNC_5(VAR_6->untrusted, VAR_13);
        if (FUNC_1(FUNC_3(VAR_10), VAR_11))
            continue;
        if (FUNC_2(VAR_10, VAR_7->akid) == VAR_5) {
            *VAR_8 = VAR_10;
            *VAR_9 |= VAR_0;
            return;
        }
    }
}
