
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_paddr_t ;
typedef scalar_t__ bus_size_t ;
typedef TYPE_1__* bus_dma_tag_t ;
typedef int bus_addr_t ;
struct TYPE_5__ {scalar_t__ maxsegsz; } ;
struct TYPE_4__ {TYPE_2__ common; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int) ;

__attribute__((used)) static bool
FUNC_2(bus_dma_tag_t VAR_2, vm_paddr_t VAR_3, bus_size_t VAR_4,
    int *VAR_5)
{
 bus_addr_t VAR_6;
 bus_size_t VAR_7;
 int VAR_8;





 VAR_8 = 0;
 VAR_6 = VAR_3;
 while (VAR_4 != 0) {
  VAR_7 = FUNC_0(VAR_4, VAR_2->common.maxsegsz);
  if (FUNC_1(&VAR_2->common, VAR_6)) {
   VAR_7 = FUNC_0(VAR_7,
       VAR_1 - (VAR_6 & VAR_0));
   if (VAR_5 == ((void*)0))
    return (1);
   VAR_8++;
  }
  VAR_6 += VAR_7;
  VAR_4 -= VAR_7;
 }

 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_8;
 return (VAR_8 != 0);
}
