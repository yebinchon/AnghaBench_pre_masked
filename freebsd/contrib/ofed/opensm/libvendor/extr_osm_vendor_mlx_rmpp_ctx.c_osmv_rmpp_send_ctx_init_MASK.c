
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int window_first; int window_last; int * p_log; int is_sa_mad; int mad_sz; int sar; int event; } ;
typedef TYPE_1__ osmv_rmpp_send_ctx_t ;
typedef int osm_log_t ;
typedef int ib_mad_t ;
typedef scalar_t__ ib_api_status_t ;
typedef scalar_t__ cl_status_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,void*,int ,int ) ;

ib_api_status_t
FUNC_5(osmv_rmpp_send_ctx_t * VAR_6, void *VAR_7,
   uint32_t VAR_8, osm_log_t * VAR_9)
{
 ib_api_status_t VAR_10 = VAR_4;
 cl_status_t VAR_11;

 FUNC_0(VAR_6);
 if (((void*)0) == VAR_7) {
  return VAR_3;
 }

 if (FUNC_3((ib_mad_t *) VAR_7)) {
  VAR_6->is_sa_mad = VAR_5;
 } else
  VAR_6->is_sa_mad = VAR_1;

 VAR_6->mad_sz = VAR_8;

 FUNC_1(&VAR_6->event);
 VAR_11 = FUNC_2(&VAR_6->event, VAR_1);
 if (VAR_11 != VAR_0) {
  return VAR_2;
 }

 VAR_10 = FUNC_4(&VAR_6->sar, VAR_7, VAR_6->mad_sz,
    VAR_6->is_sa_mad);
 if (VAR_10 == VAR_4) {
  VAR_6->window_first = 1;
  VAR_6->window_last = 1;
 }

 VAR_6->p_log = VAR_9;
 return VAR_10;
}
