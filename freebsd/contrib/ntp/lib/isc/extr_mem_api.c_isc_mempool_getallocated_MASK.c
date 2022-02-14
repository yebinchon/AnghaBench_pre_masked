
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* methods; } ;
typedef TYPE_2__ isc_mempool_t ;
struct TYPE_6__ {unsigned int (* getallocated ) (TYPE_2__*) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (TYPE_2__*) ;

unsigned int
FUNC_3(isc_mempool_t *VAR_0) {
 FUNC_1(FUNC_0(VAR_0));

 return (VAR_0->methods->getallocated(VAR_0));
}
