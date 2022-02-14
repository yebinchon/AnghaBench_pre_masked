
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_4__ {int * x509; } ;
struct TYPE_5__ {scalar_t__ type; TYPE_1__ _; } ;
typedef TYPE_2__ OSSL_STORE_INFO ;


 scalar_t__ VAR_0 ;

X509 *FUNC_0(const OSSL_STORE_INFO *VAR_1)
{
    if (VAR_1->type == VAR_0)
        return VAR_1->_.x509;
    return ((void*)0);
}
