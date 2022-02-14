
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int canon_enclen; int canon_enc; scalar_t__ modified; } ;
typedef TYPE_1__ X509_NAME ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int ,int ,scalar_t__) ;

int FUNC_2(const X509_NAME *VAR_0, const X509_NAME *VAR_1)
{
    int VAR_2;



    if (!VAR_0->canon_enc || VAR_0->modified) {
        VAR_2 = FUNC_0((X509_NAME *)VAR_0, ((void*)0));
        if (VAR_2 < 0)
            return -2;
    }

    if (!VAR_1->canon_enc || VAR_1->modified) {
        VAR_2 = FUNC_0((X509_NAME *)VAR_1, ((void*)0));
        if (VAR_2 < 0)
            return -2;
    }

    VAR_2 = VAR_0->canon_enclen - VAR_1->canon_enclen;

    if (VAR_2 != 0 || VAR_0->canon_enclen == 0)
        return VAR_2;

    return FUNC_1(VAR_0->canon_enc, VAR_1->canon_enc, VAR_0->canon_enclen);

}
