
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_clnt {int dummy; } ;
struct gss_upcall_msg {int dummy; } ;


 int FUNC_0 (struct gss_upcall_msg*) ;
 int FUNC_1 (struct gss_upcall_msg*,struct rpc_clnt*,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_2(struct gss_upcall_msg *VAR_1,
    struct rpc_clnt *VAR_2, int VAR_3)
{
 if (VAR_0 == 0)
  FUNC_0(VAR_1);
 else
  FUNC_1(VAR_1, VAR_2, VAR_3);
}
