
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int xdrproc_t ;
struct TYPE_3__ {scalar_t__ length; } ;
struct TYPE_4__ {TYPE_1__ gc_handle; int gc_proc; } ;
struct rpc_gss_data {scalar_t__ gd_state; scalar_t__ gd_ctx; TYPE_2__ gd_cred; int gd_clnt; } ;
typedef scalar_t__ bool_t ;
typedef int OM_uint32 ;
typedef int AUTH ;


 struct rpc_gss_data* FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,int ,int ,int *,int ,int *,int ) ;
 int FUNC_2 (int *,scalar_t__*,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void
FUNC_5(AUTH *VAR_8, bool_t VAR_9)
{
 struct rpc_gss_data *VAR_10;
 OM_uint32 VAR_11;

 FUNC_3("in rpc_gss_destroy_context()");

 VAR_10 = FUNC_0(VAR_8);

 if (VAR_10->gd_state == VAR_4 && VAR_9) {
  VAR_10->gd_cred.gc_proc = VAR_3;
  FUNC_1(VAR_10->gd_clnt, VAR_2,
      (xdrproc_t)VAR_7, ((void*)0),
      (xdrproc_t)VAR_7, ((void*)0), VAR_0);
 }





 FUNC_4((xdrproc_t) VAR_6,
     (char *) &VAR_10->gd_cred.gc_handle);
 VAR_10->gd_cred.gc_handle.length = 0;

 if (VAR_10->gd_ctx != VAR_1)
  FUNC_2(&VAR_11, &VAR_10->gd_ctx, ((void*)0));

 VAR_10->gd_state = VAR_5;
}
