
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int canon_enclen; int canon_enc; } ;
typedef TYPE_1__ X509_NAME ;


 int FUNC_0 (int ,int ,unsigned char*,int *,int ,int *) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int *) ;

unsigned long FUNC_3(X509_NAME *VAR_1)
{
    unsigned long VAR_2 = 0;
    unsigned char VAR_3[VAR_0];


    FUNC_2(VAR_1, ((void*)0));
    if (!FUNC_0(VAR_1->canon_enc, VAR_1->canon_enclen, VAR_3, ((void*)0), FUNC_1(),
                    ((void*)0)))
        return 0;

    VAR_2 = (((unsigned long)VAR_3[0]) | ((unsigned long)VAR_3[1] << 8L) |
           ((unsigned long)VAR_3[2] << 16L) | ((unsigned long)VAR_3[3] << 24L)
        ) & 0xffffffffL;
    return VAR_2;
}
