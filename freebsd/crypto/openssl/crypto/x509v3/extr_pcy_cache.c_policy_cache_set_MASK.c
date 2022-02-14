
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int X509_POLICY_CACHE ;
struct TYPE_4__ {int const* policy_cache; int lock; } ;
typedef TYPE_1__ X509 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

const X509_POLICY_CACHE *FUNC_3(X509 *VAR_0)
{

    if (VAR_0->policy_cache == ((void*)0)) {
        FUNC_1(VAR_0->lock);
        FUNC_2(VAR_0);
        FUNC_0(VAR_0->lock);
    }

    return VAR_0->policy_cache;

}
