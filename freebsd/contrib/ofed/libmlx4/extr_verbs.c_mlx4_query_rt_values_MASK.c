
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_2__ {int tv_nsec; scalar_t__ tv_sec; } ;
struct ibv_values_ex {int comp_mask; TYPE_1__ raw_clock; } ;
struct ibv_context {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ibv_context*,int *) ;

int FUNC_1(struct ibv_context *VAR_1,
    struct ibv_values_ex *VAR_2)
{
 uint32_t VAR_3 = 0;
 int VAR_4 = 0;

 if (VAR_2->comp_mask & VAR_0) {
  uint64_t VAR_5;

  VAR_4 = FUNC_0(VAR_1, &VAR_5);
  if (!VAR_4) {
   VAR_2->raw_clock.tv_sec = 0;
   VAR_2->raw_clock.tv_nsec = VAR_5;
   VAR_3 |= VAR_0;
  }
 }

 VAR_2->comp_mask = VAR_3;

 return VAR_4;
}
