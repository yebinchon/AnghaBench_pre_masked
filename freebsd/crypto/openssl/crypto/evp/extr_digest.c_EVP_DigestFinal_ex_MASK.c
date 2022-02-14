
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* digest; int md_data; } ;
struct TYPE_7__ {unsigned int md_size; int (* final ) (TYPE_2__*,unsigned char*) ;int ctx_size; int (* cleanup ) (TYPE_2__*) ;} ;
typedef TYPE_2__ EVP_MD_CTX ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*,unsigned char*) ;
 int FUNC_4 (TYPE_2__*) ;

int FUNC_5(EVP_MD_CTX *VAR_2, unsigned char *VAR_3, unsigned int *VAR_4)
{
    int VAR_5;

    FUNC_1(VAR_2->digest->md_size <= VAR_0);
    VAR_5 = VAR_2->digest->final(VAR_2, VAR_3);
    if (VAR_4 != ((void*)0))
        *VAR_4 = VAR_2->digest->md_size;
    if (VAR_2->digest->cleanup) {
        VAR_2->digest->cleanup(VAR_2);
        FUNC_0(VAR_2, VAR_1);
    }
    FUNC_2(VAR_2->md_data, VAR_2->digest->ctx_size);
    return VAR_5;
}
