
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_gss_cred {void* gc_svc; void* gc_proc; int gc_handle; int gc_seq; int gc_version; } ;
typedef void* enum_t ;
typedef int bool_t ;
typedef int XDR ;


 scalar_t__ FUNC_0 (int *,void**) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;

bool_t
FUNC_3(XDR *VAR_0, struct rpc_gss_cred *VAR_1)
{
 enum_t VAR_2, VAR_3;
 bool_t VAR_4;

 VAR_2 = VAR_1->gc_proc;
 VAR_3 = VAR_1->gc_svc;
 VAR_4 = (FUNC_2(VAR_0, &VAR_1->gc_version) &&
     FUNC_0(VAR_0, &VAR_2) &&
     FUNC_2(VAR_0, &VAR_1->gc_seq) &&
     FUNC_0(VAR_0, &VAR_3) &&
     FUNC_1(VAR_0, &VAR_1->gc_handle));
 VAR_1->gc_proc = VAR_2;
 VAR_1->gc_svc = VAR_3;

 return (VAR_4);
}
