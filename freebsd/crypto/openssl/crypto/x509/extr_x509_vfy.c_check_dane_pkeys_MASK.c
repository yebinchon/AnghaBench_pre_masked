
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ usage; scalar_t__ selector; scalar_t__ mtype; int spki; } ;
typedef TYPE_1__ danetls_record ;
struct TYPE_7__ {int num_untrusted; int bare_ta_signed; int chain; TYPE_3__* dane; } ;
typedef TYPE_2__ X509_STORE_CTX ;
typedef int X509 ;
struct TYPE_8__ {int mdpth; TYPE_1__* mtlsa; int * mcert; int trecs; } ;
typedef TYPE_3__ SSL_DANE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ) ;
 int * FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (int ,int) ;

__attribute__((used)) static int FUNC_7(X509_STORE_CTX *VAR_5)
{
    SSL_DANE *VAR_6 = VAR_5->dane;
    danetls_record *VAR_7;
    int VAR_8 = VAR_5->num_untrusted;
    X509 *VAR_9 = FUNC_4(VAR_5->chain, VAR_8 - 1);
    int VAR_10 = FUNC_5(VAR_6->trecs);
    int VAR_11;

    for (VAR_11 = 0; VAR_11 < VAR_10; ++VAR_11) {
        VAR_7 = FUNC_6(VAR_6->trecs, VAR_11);
        if (VAR_7->usage != VAR_2 ||
            VAR_7->selector != VAR_1 ||
            VAR_7->mtype != VAR_0 ||
            FUNC_1(VAR_9, VAR_7->spki) <= 0)
            continue;


        FUNC_0(VAR_6->mcert);
        VAR_6->mcert = ((void*)0);


        VAR_5->bare_ta_signed = 1;
        VAR_6->mdpth = VAR_8 - 1;
        VAR_6->mtlsa = VAR_7;


        VAR_8 = FUNC_2(VAR_5->chain);
        for (; VAR_8 > VAR_5->num_untrusted; --VAR_8)
            FUNC_0(FUNC_3(VAR_5->chain));

        return VAR_3;
    }

    return VAR_4;
}
