
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_2__ {int quota; scalar_t__ rate; } ;
struct rate_shaping_vars_per_vn {TYPE_1__ vn_counter; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(uint16_t VAR_1,
      struct rate_shaping_vars_per_vn *VAR_2)
{

 VAR_2->vn_counter.rate = VAR_1;






 VAR_2->vn_counter.quota =
  VAR_0 * (uint32_t)VAR_1 / 8;
}
