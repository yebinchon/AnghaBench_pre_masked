
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int uint32_t ;
struct nvme_namespace_data {size_t flbas; size_t* lbaf; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static inline uint32_t
FUNC_0(struct nvme_namespace_data *VAR_4)
{
 uint8_t VAR_5, VAR_6;

 VAR_5 = (VAR_4->flbas >> VAR_1) &
  VAR_0;
 VAR_6 = (VAR_4->lbaf[VAR_5] >> VAR_3) &
  VAR_2;

 return (1 << VAR_6);
}
