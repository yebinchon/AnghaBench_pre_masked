
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arm32_dma_range {scalar_t__ dr_sysbase; scalar_t__ dr_len; } ;
typedef scalar_t__ bus_addr_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static __inline struct arm32_dma_range *
FUNC_1(struct arm32_dma_range *VAR_0, int VAR_1,
    bus_addr_t VAR_2)
{
 struct arm32_dma_range *VAR_3;
 int VAR_4;

 for (VAR_4 = 0, VAR_3 = VAR_0; VAR_4 < VAR_1; VAR_4++, VAR_3++) {
  if (VAR_2 >= VAR_3->dr_sysbase &&
      FUNC_0(VAR_2) <= (VAR_3->dr_sysbase + VAR_3->dr_len))
   return (VAR_3);
 }

 return (((void*)0));
}
