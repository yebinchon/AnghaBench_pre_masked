
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mctx; } ;
typedef TYPE_1__ isc_radix_tree_t ;
typedef int isc_radix_destroyfunc_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ,TYPE_1__*,int) ;

void
FUNC_3(isc_radix_tree_t *VAR_0, isc_radix_destroyfunc_t VAR_1)
{
 FUNC_0(VAR_0 != ((void*)0));
 FUNC_1(VAR_0, VAR_1);
 FUNC_2(VAR_0->mctx, VAR_0, sizeof(*VAR_0));
}
