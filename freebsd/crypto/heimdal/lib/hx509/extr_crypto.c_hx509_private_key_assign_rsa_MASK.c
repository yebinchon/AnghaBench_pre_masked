
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* hx509_private_key ;
struct TYPE_4__ {void* rsa; } ;
struct TYPE_5__ {int * md; int signature_alg; TYPE_1__ private_key; } ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int VAR_1 ;

void
FUNC_1(hx509_private_key VAR_2, void *VAR_3)
{
    if (VAR_2->private_key.rsa)
 FUNC_0(VAR_2->private_key.rsa);
    VAR_2->private_key.rsa = VAR_3;
    VAR_2->signature_alg = VAR_0;
    VAR_2->md = &VAR_1;
}
