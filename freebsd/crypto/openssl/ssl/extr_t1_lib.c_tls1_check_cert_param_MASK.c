
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int X509 ;
struct TYPE_8__ {size_t shared_sigalgslen; TYPE_1__** shared_sigalgs; int server; } ;
struct TYPE_7__ {int sigandhash; } ;
typedef TYPE_2__ SSL ;
typedef int EVP_PKEY ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,int) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(SSL *VAR_5, X509 *VAR_6, int VAR_7)
{
    uint16_t VAR_8;
    EVP_PKEY *VAR_9;
    VAR_9 = FUNC_1(VAR_6);
    if (VAR_9 == ((void*)0))
        return 0;

    if (FUNC_0(VAR_9) != VAR_0)
        return 1;

    if (!FUNC_3(VAR_5, VAR_9))
        return 0;
    VAR_8 = FUNC_4(VAR_9);




    if (!FUNC_2(VAR_5, VAR_8, !VAR_5->server))
        return 0;




    if (VAR_7 && FUNC_5(VAR_5)) {
        int VAR_10;
        size_t VAR_11;


        if (VAR_8 == VAR_3)
            VAR_10 = VAR_1;
        else if (VAR_8 == VAR_4)
            VAR_10 = VAR_2;
        else
            return 0;
        for (VAR_11 = 0; VAR_11 < VAR_5->shared_sigalgslen; VAR_11++) {
            if (VAR_10 == VAR_5->shared_sigalgs[VAR_11]->sigandhash)
                return 1;;
        }
        return 0;
    }
    return 1;
}
