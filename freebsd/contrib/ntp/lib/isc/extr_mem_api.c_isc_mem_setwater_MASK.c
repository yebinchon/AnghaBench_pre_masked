
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int isc_mem_water_t ;
struct TYPE_7__ {TYPE_1__* methods; } ;
typedef TYPE_2__ isc_mem_t ;
struct TYPE_6__ {int (* setwater ) (TYPE_2__*,int ,void*,size_t,size_t) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int ,void*,size_t,size_t) ;

void
FUNC_3(isc_mem_t *VAR_0, isc_mem_water_t VAR_1, void *VAR_2,
   size_t VAR_3, size_t VAR_4)
{
 FUNC_1(FUNC_0(VAR_0));

 VAR_0->methods->setwater(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
