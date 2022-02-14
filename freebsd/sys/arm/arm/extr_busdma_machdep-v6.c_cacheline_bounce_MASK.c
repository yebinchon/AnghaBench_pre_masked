
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int bus_size_t ;
typedef TYPE_1__* bus_dmamap_t ;
typedef int bus_addr_t ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static __inline int
FUNC_0(bus_dmamap_t VAR_4, bus_addr_t VAR_5, bus_size_t VAR_6)
{

 if (VAR_4->flags & (VAR_2 | VAR_1 | VAR_3))
  return (0);
 return ((VAR_5 | VAR_6) & VAR_0);
}
