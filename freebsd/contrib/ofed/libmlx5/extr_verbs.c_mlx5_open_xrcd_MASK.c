
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_xrcd {int dummy; } ;
struct verbs_xrcd {struct ibv_xrcd xrcd; } ;
struct ibv_xrcd_init_attr {int dummy; } ;
struct ibv_open_xrcd_resp {int dummy; } ;
struct ibv_open_xrcd {int dummy; } ;
struct ibv_context {int dummy; } ;
typedef int resp ;
typedef int cmd ;


 struct verbs_xrcd* FUNC_0 (int,int) ;
 int FUNC_1 (struct verbs_xrcd*) ;
 int FUNC_2 (struct ibv_context*,struct verbs_xrcd*,int,struct ibv_xrcd_init_attr*,struct ibv_open_xrcd*,int,struct ibv_open_xrcd_resp*,int) ;

struct ibv_xrcd *
FUNC_3(struct ibv_context *VAR_0,
        struct ibv_xrcd_init_attr *VAR_1)
{
 int VAR_2;
 struct verbs_xrcd *VAR_3;
 struct ibv_open_xrcd VAR_4 = {};
 struct ibv_open_xrcd_resp VAR_5 = {};

 VAR_3 = FUNC_0(1, sizeof(*VAR_3));
 if (!VAR_3)
  return ((void*)0);

 VAR_2 = FUNC_2(VAR_0, VAR_3, sizeof(*VAR_3), VAR_1,
    &VAR_4, sizeof(VAR_4), &VAR_5, sizeof(VAR_5));
 if (VAR_2) {
  FUNC_1(VAR_3);
  return ((void*)0);
 }

 return &VAR_3->xrcd;
}
