
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int dummy; } ;
typedef int bus_dmamap_t ;
typedef scalar_t__ bus_dma_tag_t ;
typedef scalar_t__ bus_addr_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,void*,int ) ;

__attribute__((used)) static int
FUNC_3(struct adapter *VAR_0, bus_dma_tag_t VAR_1, bus_dmamap_t VAR_2,
    bus_addr_t VAR_3, void *VAR_4)
{
 if (VAR_3)
  FUNC_1(VAR_1, VAR_2);
 if (VAR_4)
  FUNC_2(VAR_1, VAR_4, VAR_2);
 if (VAR_1)
  FUNC_0(VAR_1);

 return (0);
}
