
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * dh; } ;
struct TYPE_5__ {scalar_t__ type; TYPE_1__ pkey; } ;
typedef TYPE_2__ EVP_PKEY ;
typedef int DH ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;

DH *FUNC_1(EVP_PKEY *VAR_4)
{
    if (VAR_4->type != VAR_1 && VAR_4->type != VAR_2) {
        FUNC_0(VAR_0, VAR_3);
        return ((void*)0);
    }
    return VAR_4->pkey.dh;
}
