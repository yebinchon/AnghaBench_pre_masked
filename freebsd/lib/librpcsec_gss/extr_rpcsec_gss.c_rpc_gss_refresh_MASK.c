
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ rj_stat; scalar_t__ rj_why; } ;
struct TYPE_4__ {scalar_t__ rp_stat; TYPE_1__ rp_rjct; } ;
struct rpc_msg {TYPE_2__ rm_reply; } ;
typedef int rpc_gss_options_ret_t ;
typedef int options ;
typedef int bool_t ;
typedef int AUTH ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static bool_t
FUNC_3(AUTH *VAR_5, void *VAR_6)
{
 struct rpc_msg *VAR_7 = (struct rpc_msg *) VAR_6;
 rpc_gss_options_ret_t VAR_8;






 if (VAR_7->rm_reply.rp_stat == VAR_2
     && VAR_7->rm_reply.rp_rjct.rj_stat == VAR_0
     && (VAR_7->rm_reply.rp_rjct.rj_why == VAR_3
  || VAR_7->rm_reply.rp_rjct.rj_why == VAR_4)) {
  FUNC_1(VAR_5, VAR_1);
  FUNC_0(&VAR_8, 0, sizeof(VAR_8));
  return (FUNC_2(VAR_5, &VAR_8));
 }

 return (VAR_1);
}
