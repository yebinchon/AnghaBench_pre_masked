
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_int ;
struct cf_conn {int verf_body; int xdrs; int strm_stat; } ;
struct __rpc_sockinfo {int dummy; } ;
struct TYPE_9__ {int oa_base; } ;
struct TYPE_10__ {int xp_fd; int xp_netid; scalar_t__ xp_port; TYPE_1__ xp_verf; struct cf_conn* xp_p1; } ;
typedef TYPE_2__ SVCXPRT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,struct __rpc_sockinfo*) ;
 scalar_t__ FUNC_1 (struct __rpc_sockinfo*,char const**) ;
 int FUNC_2 (int) ;
 struct cf_conn* FUNC_3 (int) ;
 int VAR_1 ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_2__* FUNC_6 () ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (char*) ;
 int VAR_2 ;
 int FUNC_9 (int *,int ,int ,TYPE_2__*,int ,int ) ;
 int FUNC_10 (TYPE_2__*) ;

__attribute__((used)) static SVCXPRT *
FUNC_11(int VAR_3, u_int VAR_4, u_int VAR_5)
{
 SVCXPRT *VAR_6;
 struct cf_conn *VAR_7;
 const char *VAR_8;
 struct __rpc_sockinfo VAR_9;

 FUNC_2(VAR_3 != -1);

 VAR_6 = FUNC_6();
 if (VAR_6 == ((void*)0)) {
  FUNC_8("svc_vc: makefd_xprt: out of memory");
  goto done;
 }
 VAR_7 = FUNC_3(sizeof(struct cf_conn));
 if (VAR_7 == ((void*)0)) {
  FUNC_8("svc_tcp: makefd_xprt: out of memory");
  FUNC_7(VAR_6);
  VAR_6 = ((void*)0);
  goto done;
 }
 VAR_7->strm_stat = VAR_0;
 FUNC_9(&(VAR_7->xdrs), VAR_4, VAR_5,
     VAR_6, VAR_1, VAR_2);
 VAR_6->xp_p1 = VAR_7;
 VAR_6->xp_verf.oa_base = VAR_7->verf_body;
 FUNC_5(VAR_6);
 VAR_6->xp_port = 0;
 VAR_6->xp_fd = VAR_3;
        if (FUNC_0(VAR_3, &VAR_9) && FUNC_1(&VAR_9, &VAR_8))
  VAR_6->xp_netid = FUNC_4(VAR_8);

 FUNC_10(VAR_6);
done:
 return (VAR_6);
}
