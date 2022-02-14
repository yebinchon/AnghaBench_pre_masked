
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* version; } ;
struct TYPE_5__ {TYPE_1__ tbsCertificate; } ;
typedef TYPE_2__ Certificate ;



int
FUNC_0(const Certificate *VAR_0)
{
    return VAR_0->tbsCertificate.version ? *VAR_0->tbsCertificate.version + 1 : 1;
}
