
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_gss_init_res {int gr_token; int gr_win; int gr_minor; int gr_major; int gr_handle; } ;
typedef int bool_t ;
typedef int XDR ;


 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;

bool_t
FUNC_2(XDR *VAR_0, struct rpc_gss_init_res *VAR_1)
{

 return (FUNC_0(VAR_0, &VAR_1->gr_handle) &&
     FUNC_1(VAR_0, &VAR_1->gr_major) &&
     FUNC_1(VAR_0, &VAR_1->gr_minor) &&
     FUNC_1(VAR_0, &VAR_1->gr_win) &&
     FUNC_0(VAR_0, &VAR_1->gr_token));
}
