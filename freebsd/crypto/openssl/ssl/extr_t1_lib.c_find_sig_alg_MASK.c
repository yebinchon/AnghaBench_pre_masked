
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_16__ {scalar_t__ hash; scalar_t__ sig; size_t sig_idx; int curve; } ;
struct TYPE_15__ {size_t shared_sigalgslen; TYPE_2__* cert; TYPE_4__** shared_sigalgs; } ;
struct TYPE_14__ {TYPE_1__* pkeys; } ;
struct TYPE_13__ {int * privatekey; } ;
typedef TYPE_3__ SSL ;
typedef TYPE_4__ SIGALG_LOOKUP ;
typedef int EVP_PKEY ;
typedef int EC_KEY ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (TYPE_3__*,TYPE_4__ const*,int) ;
 int FUNC_5 (TYPE_3__*,TYPE_4__ const*,int *,int *) ;
 int FUNC_6 (int ,TYPE_4__ const*) ;
 int FUNC_7 (TYPE_4__ const*,int *) ;

__attribute__((used)) static const SIGALG_LOOKUP *FUNC_8(SSL *VAR_7, X509 *VAR_8, EVP_PKEY *VAR_9)
{
    const SIGALG_LOOKUP *VAR_10 = ((void*)0);
    size_t VAR_11;

    int VAR_12 = -1;

    EVP_PKEY *VAR_13;


    for (VAR_11 = 0; VAR_11 < VAR_7->shared_sigalgslen; VAR_11++) {
        VAR_10 = VAR_7->shared_sigalgs[VAR_11];


        if (VAR_10->hash == VAR_4
            || VAR_10->hash == VAR_5
            || VAR_10->sig == VAR_0
            || VAR_10->sig == VAR_2)
            continue;

        if (!FUNC_7(VAR_10, ((void*)0)))
            continue;
        if ((VAR_9 == ((void*)0) && !FUNC_4(VAR_7, VAR_10, -1))
                || (VAR_9 != ((void*)0) && !FUNC_5(VAR_7, VAR_10, VAR_8, VAR_9)))
            continue;

        VAR_13 = (VAR_9 != ((void*)0)) ? VAR_9
                                 : VAR_7->cert->pkeys[VAR_10->sig_idx].privatekey;

        if (VAR_10->sig == VAR_1) {

            if (VAR_12 == -1) {
                EC_KEY *VAR_14 = FUNC_3(VAR_13);
                VAR_12 = FUNC_0(FUNC_1(VAR_14));
            }
            if (VAR_10->curve != VAR_6 && VAR_12 != VAR_10->curve)
                continue;



        } else if (VAR_10->sig == VAR_3) {

            if (!FUNC_6(FUNC_2(VAR_13), VAR_10))
                continue;
        }
        break;
    }

    if (VAR_11 == VAR_7->shared_sigalgslen)
        return ((void*)0);

    return VAR_10;
}
