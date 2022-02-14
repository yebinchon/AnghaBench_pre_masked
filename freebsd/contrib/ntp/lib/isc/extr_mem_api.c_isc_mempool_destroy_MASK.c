
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* methods; } ;
typedef TYPE_2__ isc_mempool_t ;
struct TYPE_6__ {int (* destroy ) (TYPE_2__**) ;} ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__**) ;

void
FUNC_4(isc_mempool_t **VAR_0) {
 FUNC_2(VAR_0 != ((void*)0) && FUNC_1(*VAR_0));

 (*VAR_0)->methods->destroy(VAR_0);

 FUNC_0(*VAR_0 == ((void*)0));
}
