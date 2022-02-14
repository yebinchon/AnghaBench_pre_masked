
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int sli4_t ;
struct TYPE_4__ {int fcfi; } ;
typedef TYPE_1__ sli4_fc_optimized_write_cmd_cqe_t ;
struct TYPE_5__ {int fcfi; } ;
typedef TYPE_2__ sli4_fc_async_rcqe_v1_t ;
struct TYPE_6__ {int fcfi; } ;
typedef TYPE_3__ sli4_fc_async_rcqe_t ;


 size_t VAR_0 ;



 int VAR_1 ;

__attribute__((used)) static inline uint8_t
FUNC_0(sli4_t *VAR_2, void *VAR_3)
{
 uint8_t VAR_4 = ((uint8_t*)VAR_3)[VAR_0];
 uint8_t VAR_5 = VAR_1;

 switch(VAR_4) {
 case 129: {
  sli4_fc_async_rcqe_t *VAR_6 = VAR_3;
  VAR_5 = VAR_6->fcfi;
  break;
 }
 case 128: {
  sli4_fc_async_rcqe_v1_t *VAR_7 = VAR_3;
  VAR_5 = VAR_7->fcfi;
  break;
 }
 case 130: {
  sli4_fc_optimized_write_cmd_cqe_t *VAR_8 = VAR_3;
  VAR_5 = VAR_8->fcfi;
  break;
 }
 }

 return VAR_5;
}
