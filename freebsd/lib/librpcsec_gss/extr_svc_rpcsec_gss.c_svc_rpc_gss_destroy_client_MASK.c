
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct svc_rpc_gss_client_list {int dummy; } ;
struct TYPE_4__ {scalar_t__ value; } ;
struct TYPE_3__ {struct svc_rpc_gss_client* client_principal; } ;
struct svc_rpc_gss_client {int len; size_t cl_id; TYPE_2__ cl_verf; TYPE_1__ cl_rawcred; int cl_cname; int cl_ctx; } ;
typedef int OM_uint32 ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct svc_rpc_gss_client_list*,struct svc_rpc_gss_client*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct svc_rpc_gss_client*,int) ;
 int VAR_4 ;
 struct svc_rpc_gss_client_list* VAR_5 ;
 struct svc_rpc_gss_client_list VAR_6 ;

__attribute__((used)) static void
FUNC_6(struct svc_rpc_gss_client *VAR_7)
{
 struct svc_rpc_gss_client_list *VAR_8;
 OM_uint32 VAR_9;

 FUNC_4("in svc_rpc_gss_destroy_client()");

 if (VAR_7->cl_ctx)
  FUNC_1(&VAR_9,
      &VAR_7->cl_ctx, VAR_1);

 if (VAR_7->cl_cname)
  FUNC_3(&VAR_9, &VAR_7->cl_cname);

 if (VAR_7->cl_rawcred.client_principal)
  FUNC_5(VAR_7->cl_rawcred.client_principal,
      sizeof(*VAR_7->cl_rawcred.client_principal)
      + VAR_7->cl_rawcred.client_principal->len);

 if (VAR_7->cl_verf.value)
  FUNC_2(&VAR_9, &VAR_7->cl_verf);

 VAR_8 = &VAR_5[VAR_7->cl_id % VAR_0];
 FUNC_0(VAR_8, VAR_7, VAR_3);
 FUNC_0(&VAR_6, VAR_7, VAR_2);
 VAR_4--;
 FUNC_5(VAR_7, sizeof(*VAR_7));
}
