
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* kari; TYPE_1__* ktri; } ;
struct TYPE_9__ {scalar_t__ type; TYPE_3__ d; } ;
struct TYPE_7__ {int * pctx; } ;
struct TYPE_6__ {int * pctx; } ;
typedef int EVP_PKEY_CTX ;
typedef TYPE_4__ CMS_RecipientInfo ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

EVP_PKEY_CTX *FUNC_0(CMS_RecipientInfo *VAR_2)
{
    if (VAR_2->type == VAR_1)
        return VAR_2->d.ktri->pctx;
    else if (VAR_2->type == VAR_0)
        return VAR_2->d.kari->pctx;
    return ((void*)0);
}
