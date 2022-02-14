
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int num_nodes; TYPE_1__** b; } ;
struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ OPENSSL_LH_NODE ;
typedef TYPE_2__ OPENSSL_LHASH ;
typedef int BIO ;


 int FUNC_0 (int *,char*,unsigned int,unsigned int) ;

void FUNC_1(const OPENSSL_LHASH *VAR_0, BIO *VAR_1)
{
    OPENSSL_LH_NODE *VAR_2;
    unsigned int VAR_3, VAR_4;

    for (VAR_3 = 0; VAR_3 < VAR_0->num_nodes; VAR_3++) {
        for (VAR_2 = VAR_0->b[VAR_3], VAR_4 = 0; VAR_2 != ((void*)0); VAR_2 = VAR_2->next)
            VAR_4++;
        FUNC_0(VAR_1, "node %6u -> %3u\n", VAR_3, VAR_4);
    }
}
