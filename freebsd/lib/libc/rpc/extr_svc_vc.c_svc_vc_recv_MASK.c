
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct rpc_msg {int rm_xid; } ;
struct TYPE_7__ {int x_op; } ;
struct cf_conn {int strm_stat; int x_id; scalar_t__ nonblock; TYPE_1__ xdrs; } ;
typedef int bool_t ;
typedef TYPE_1__ XDR ;
struct TYPE_8__ {scalar_t__ xp_p1; } ;
typedef TYPE_2__ SVCXPRT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int *,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,struct rpc_msg*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static bool_t
FUNC_4(SVCXPRT *VAR_4, struct rpc_msg *VAR_5)
{
 struct cf_conn *VAR_6;
 XDR *VAR_7;

 FUNC_1(VAR_4 != ((void*)0));
 FUNC_1(VAR_5 != ((void*)0));

 VAR_6 = (struct cf_conn *)(VAR_4->xp_p1);
 VAR_7 = &(VAR_6->xdrs);

 if (VAR_6->nonblock) {
  if (!FUNC_0(VAR_7, &VAR_6->strm_stat, VAR_1))
   return VAR_0;
 } else {
  (void)FUNC_3(VAR_7);
 }

 VAR_7->x_op = VAR_2;
 if (FUNC_2(VAR_7, VAR_5)) {
  VAR_6->x_id = VAR_5->rm_xid;
  return (VAR_1);
 }
 VAR_6->strm_stat = VAR_3;
 return (VAR_0);
}
