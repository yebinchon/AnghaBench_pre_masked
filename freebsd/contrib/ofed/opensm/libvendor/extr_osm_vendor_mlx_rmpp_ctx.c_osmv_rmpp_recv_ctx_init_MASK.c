
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int expected_seg; int * p_log; scalar_t__ p_rbuf; int is_sa_mad; } ;
typedef TYPE_1__ osmv_rmpp_recv_ctx_t ;
typedef int osm_log_t ;
typedef int ib_api_status_t ;
typedef int cl_qlist_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,int ,int) ;

ib_api_status_t
FUNC_4(osmv_rmpp_recv_ctx_t * VAR_3, osm_log_t * VAR_4)
{
 ib_api_status_t VAR_5 = VAR_2;

 FUNC_0(VAR_3);

 VAR_3->is_sa_mad = VAR_0;

 VAR_3->p_rbuf = FUNC_2(sizeof(cl_qlist_t));
 if (VAR_3->p_rbuf) {
  FUNC_3(VAR_3->p_rbuf, 0, sizeof(cl_qlist_t));
  FUNC_1(VAR_3->p_rbuf);
  VAR_3->expected_seg = 1;
 } else
  VAR_5 = VAR_1;

 VAR_3->p_log = VAR_4;

 return VAR_5;
}
