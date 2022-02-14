
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int sli4_t ;
struct TYPE_2__ {scalar_t__ status; int payload_data_placement_length; int header_data_placement_length; } ;
typedef TYPE_1__ sli4_fc_async_rcqe_t ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline int32_t
FUNC_0(sli4_t *VAR_1, void *VAR_2, uint32_t *VAR_3, uint32_t *VAR_4)
{
 sli4_fc_async_rcqe_t *VAR_5 = VAR_2;

 *VAR_3 = *VAR_4 = 0;

 if (VAR_0 == VAR_5->status) {
  *VAR_3 = VAR_5->header_data_placement_length;
  *VAR_4 = VAR_5->payload_data_placement_length;
  return 0;
 } else {
  return -1;
 }
}
