
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rpc_gss_client_list {int dummy; } ;
struct svc_rpc_gss_client {size_t cl_id; scalar_t__ cl_expiration; int cl_locked; int cl_state; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct svc_rpc_gss_client_list*,struct svc_rpc_gss_client*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 struct svc_rpc_gss_client* FUNC_2 (int) ;
 int FUNC_3 (struct svc_rpc_gss_client*,int ,int) ;
 int VAR_5 ;
 struct svc_rpc_gss_client_list* VAR_6 ;
 struct svc_rpc_gss_client_list VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static struct svc_rpc_gss_client *
FUNC_5(void)
{
 struct svc_rpc_gss_client *VAR_9;
 struct svc_rpc_gss_client_list *VAR_10;

 FUNC_1("in svc_rpc_gss_create_client()");

 VAR_9 = FUNC_2(sizeof(struct svc_rpc_gss_client));
 FUNC_3(VAR_9, 0, sizeof(struct svc_rpc_gss_client));
 VAR_9->cl_id = VAR_8++;
 VAR_10 = &VAR_6[VAR_9->cl_id % VAR_0];
 FUNC_0(VAR_10, VAR_9, VAR_4);
 FUNC_0(&VAR_7, VAR_9, VAR_3);





 VAR_9->cl_state = VAR_1;
 VAR_9->cl_locked = VAR_2;
 VAR_9->cl_expiration = FUNC_4(0) + 5*60;
 VAR_5++;

 return (VAR_9);
}
