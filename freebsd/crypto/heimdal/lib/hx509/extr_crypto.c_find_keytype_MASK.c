
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct signature_alg {int const* key_oid; } ;
typedef TYPE_1__* hx509_private_key ;
typedef int heim_oid ;
struct TYPE_3__ {int signature_alg; } ;


 struct signature_alg* FUNC_0 (int ) ;

__attribute__((used)) static const heim_oid *
FUNC_1(const hx509_private_key VAR_0)
{
    const struct signature_alg *VAR_1;

    if (VAR_0 == ((void*)0))
 return ((void*)0);

    VAR_1 = FUNC_0(VAR_0->signature_alg);
    if (VAR_1 == ((void*)0))
 return ((void*)0);
    return VAR_1->key_oid;
}
