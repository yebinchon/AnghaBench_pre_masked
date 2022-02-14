
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int voidp ;
struct TYPE_14__ {scalar_t__ oa_base; } ;
struct TYPE_10__ {int proc; int where; } ;
struct TYPE_12__ {TYPE_8__ ar_verf; TYPE_1__ ar_results; } ;
struct TYPE_11__ {scalar_t__ rp_stat; } ;
struct rpc_msg {TYPE_3__ acpted_rply; TYPE_2__ rm_reply; } ;
struct rpc_err {scalar_t__ re_status; } ;
typedef int reply_xdr ;
typedef int reply_msg ;
typedef int XDRPROC_T_TYPE ;
struct TYPE_13__ {int x_op; } ;
typedef TYPE_4__ XDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rpc_msg*,struct rpc_err*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_8__*) ;
 int FUNC_4 (TYPE_4__*,struct rpc_msg*) ;
 int FUNC_5 (TYPE_4__*,int ,int,int ) ;

int
FUNC_6(voidp VAR_5, int VAR_6, voidp VAR_7, XDRPROC_T_TYPE VAR_8)
{
  XDR VAR_9;
  int VAR_10;
  struct rpc_err VAR_11;
  struct rpc_msg VAR_12;
  int VAR_13 = 0;


  FUNC_1((voidp) &VAR_12, 0, sizeof(VAR_12));
  FUNC_1((voidp) &VAR_9, 0, sizeof(VAR_9));

  VAR_12.acpted_rply.ar_results.where = VAR_7;
  VAR_12.acpted_rply.ar_results.proc = VAR_8;

  FUNC_5(&VAR_9, VAR_5, VAR_6, VAR_3);

  VAR_10 = FUNC_4(&VAR_9, &VAR_12);
  if (!VAR_10) {
    VAR_13 = VAR_0;
    goto drop;
  }
  FUNC_0(&VAR_12, &VAR_11);
  if (VAR_11.re_status != VAR_2) {
    VAR_13 = VAR_0;
    goto drop;
  }

drop:
  if (VAR_12.rm_reply.rp_stat == VAR_1 &&
      VAR_12.acpted_rply.ar_verf.oa_base) {
    VAR_9.x_op = VAR_4;
    (void) FUNC_3(&VAR_9,
      &VAR_12.acpted_rply.ar_verf);
  }
  FUNC_2(&VAR_9);

  return VAR_13;
}
