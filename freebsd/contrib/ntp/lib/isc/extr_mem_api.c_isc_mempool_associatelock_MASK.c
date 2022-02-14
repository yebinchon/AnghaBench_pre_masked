
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int isc_mutex_t ;
struct TYPE_7__ {TYPE_1__* methods; } ;
typedef TYPE_2__ isc_mempool_t ;
struct TYPE_6__ {int (* associatelock ) (TYPE_2__*,int *) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int *) ;

void
FUNC_3(isc_mempool_t *VAR_0, isc_mutex_t *VAR_1) {
 FUNC_1(FUNC_0(VAR_0));

 VAR_0->methods->associatelock(VAR_0, VAR_1);
}
