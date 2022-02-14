
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* pctx; } ;
struct TYPE_9__ {TYPE_1__* pmeth; } ;
struct TYPE_8__ {int (* digestsign ) (TYPE_3__*,unsigned char*,size_t*,unsigned char const*,size_t) ;} ;
typedef TYPE_3__ EVP_MD_CTX ;


 int FUNC_0 (TYPE_3__*,unsigned char*,size_t*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,unsigned char const*,size_t) ;
 int FUNC_2 (TYPE_3__*,unsigned char*,size_t*,unsigned char const*,size_t) ;

int FUNC_3(EVP_MD_CTX *VAR_0, unsigned char *VAR_1, size_t *VAR_2,
                   const unsigned char *VAR_3, size_t VAR_4)
{
    if (VAR_0->pctx->pmeth->digestsign != ((void*)0))
        return VAR_0->pctx->pmeth->digestsign(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
    if (VAR_1 != ((void*)0) && FUNC_1(VAR_0, VAR_3, VAR_4) <= 0)
        return 0;
    return FUNC_0(VAR_0, VAR_1, VAR_2);
}
