
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_4__ {int data_sz; void* hdr_sz; void* data_len; void* p_arbt_mad; } ;
typedef TYPE_1__ osmv_rmpp_sar_t ;
typedef int ib_api_status_t ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;

ib_api_status_t
FUNC_1(osmv_rmpp_sar_t * VAR_5, void *VAR_6,
     uint32_t VAR_7, boolean_t VAR_8)
{
 FUNC_0(VAR_5);
 VAR_5->p_arbt_mad = VAR_6;
 if (VAR_8) {
  VAR_5->data_len = VAR_7 - VAR_1;
  VAR_5->hdr_sz = VAR_1;
  VAR_5->data_sz = VAR_0;
 } else {
  VAR_5->data_len = VAR_7 - VAR_4;
  VAR_5->hdr_sz = VAR_4;
  VAR_5->data_sz = VAR_3;
 }
 return VAR_2;
}
