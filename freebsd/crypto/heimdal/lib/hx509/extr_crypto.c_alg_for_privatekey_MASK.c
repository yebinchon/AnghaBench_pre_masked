
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* hx509_private_key ;
typedef int heim_oid ;
struct TYPE_8__ {int const* digest_alg; int const* sig_alg; int * key_oid; } ;
struct TYPE_7__ {TYPE_1__* ops; } ;
struct TYPE_6__ {scalar_t__ (* available ) (TYPE_2__* const,int const*) ;int * key_oid; } ;
typedef int AlgorithmIdentifier ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int const*) ;
 TYPE_4__** VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_2__* const,int const*) ;

__attribute__((used)) static const AlgorithmIdentifier *
FUNC_2(const hx509_private_key VAR_3, int VAR_4)
{
    const heim_oid *VAR_5;
    unsigned int VAR_6;

    if (VAR_3->ops == ((void*)0))
 return ((void*)0);

    VAR_5 = VAR_3->ops->key_oid;

    for (VAR_6 = 0; VAR_2[VAR_6]; VAR_6++) {
 if (VAR_2[VAR_6]->key_oid == ((void*)0))
     continue;
 if (FUNC_0(VAR_2[VAR_6]->key_oid, VAR_5) != 0)
     continue;
 if (VAR_3->ops->available &&
     VAR_3->ops->available(VAR_3, VAR_2[VAR_6]->sig_alg) == 0)
     continue;
 if (VAR_4 == VAR_1)
     return VAR_2[VAR_6]->sig_alg;
 if (VAR_4 == VAR_0)
     return VAR_2[VAR_6]->digest_alg;

 return ((void*)0);
    }
    return ((void*)0);
}
