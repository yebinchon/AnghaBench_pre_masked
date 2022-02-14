
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int heim_oid ;
struct TYPE_8__ {int* version; TYPE_1__* extensions; } ;
struct TYPE_10__ {TYPE_2__ tbsCertificate; } ;
struct TYPE_9__ {int extnID; } ;
struct TYPE_7__ {size_t len; TYPE_3__ const* val; } ;
typedef TYPE_2__ TBSCertificate ;
typedef TYPE_3__ Extension ;
typedef TYPE_4__ Certificate ;


 scalar_t__ FUNC_0 (int *,int const*) ;

__attribute__((used)) static const Extension *
FUNC_1(const Certificate *VAR_0, const heim_oid *VAR_1, size_t *VAR_2)
{
    const TBSCertificate *VAR_3 = &VAR_0->tbsCertificate;

    if (VAR_3->version == ((void*)0) || *VAR_3->version < 2 || VAR_3->extensions == ((void*)0))
 return ((void*)0);

    for (;*VAR_2 < VAR_3->extensions->len; (*VAR_2)++) {
 if (FUNC_0(&VAR_3->extensions->val[*VAR_2].extnID, VAR_1) == 0)
     return &VAR_3->extensions->val[(*VAR_2)++];
    }
    return ((void*)0);
}
