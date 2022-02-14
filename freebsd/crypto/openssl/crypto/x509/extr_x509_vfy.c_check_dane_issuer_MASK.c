
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num_untrusted; int chain; int * dane; } ;
typedef TYPE_1__ X509_STORE_CTX ;
typedef int X509 ;
typedef int SSL_DANE ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int *,int) ;
 int * FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(X509_STORE_CTX *VAR_3, int VAR_4)
{
    SSL_DANE *VAR_5 = VAR_3->dane;
    int VAR_6 = 0;
    X509 *VAR_7;

    if (!FUNC_0(VAR_5) || VAR_4 == 0)
        return VAR_2;






    VAR_7 = FUNC_2(VAR_3->chain, VAR_4);
    if (VAR_7 != ((void*)0) && (VAR_6 = FUNC_1(VAR_3, VAR_7, VAR_4)) < 0)
        return VAR_0;
    if (VAR_6 > 0) {
        VAR_3->num_untrusted = VAR_4 - 1;
        return VAR_1;
    }

    return VAR_2;
}
