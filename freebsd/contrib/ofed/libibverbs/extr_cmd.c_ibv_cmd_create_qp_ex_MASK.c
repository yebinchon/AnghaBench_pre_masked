
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct verbs_xrcd {int dummy; } ;
struct verbs_qp {int dummy; } ;
struct ibv_qp_init_attr_ex {int comp_mask; } ;
struct ibv_create_qp_resp_v4 {int dummy; } ;
struct ibv_create_qp_resp_v3 {int dummy; } ;
struct ibv_create_qp_resp {int dummy; } ;
struct ibv_create_qp_common {int dummy; } ;
struct ibv_create_qp {int user_handle; } ;
struct ibv_context {int cmd_fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ibv_create_qp*,size_t,int ,struct ibv_create_qp_resp*,size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ibv_create_qp_resp*,size_t) ;
 int VAR_4 ;
 int FUNC_2 (struct verbs_qp*,struct ibv_qp_init_attr_ex*,struct verbs_xrcd*,struct ibv_create_qp_common*) ;
 int FUNC_3 (struct ibv_context*,struct verbs_qp*,struct ibv_qp_init_attr_ex*,struct ibv_create_qp_resp*,struct verbs_xrcd*,int) ;
 int VAR_5 ;
 int FUNC_4 (void*,void*,size_t) ;
 size_t FUNC_5 (int ,struct ibv_create_qp*,size_t) ;

int FUNC_6(struct ibv_context *VAR_6,
    struct verbs_qp *VAR_7, int VAR_8,
    struct ibv_qp_init_attr_ex *VAR_9,
    struct ibv_create_qp *VAR_10, size_t VAR_11,
    struct ibv_create_qp_resp *VAR_12, size_t VAR_13)
{
 struct verbs_xrcd *VAR_14 = ((void*)0);
 int VAR_15;

 FUNC_0(VAR_10, VAR_11, VAR_0, VAR_12, VAR_13);

 if (VAR_9->comp_mask > (VAR_3 | VAR_2))
  return VAR_1;

 VAR_15 = FUNC_2(VAR_7, VAR_9, VAR_14,
      (struct ibv_create_qp_common *)&VAR_10->user_handle);
 if (VAR_15)
  return VAR_15;

 if (FUNC_5(VAR_6->cmd_fd, VAR_10, VAR_11) != VAR_11)
  return VAR_5;

 (void)FUNC_1(VAR_12, VAR_13);

 if (VAR_4 == 4) {
  struct ibv_create_qp_resp_v4 *VAR_16 =
   (struct ibv_create_qp_resp_v4 *)VAR_12;

  FUNC_4((void *)VAR_12 + sizeof *VAR_12,
   (void *)VAR_16 + sizeof *VAR_16,
   VAR_13 - sizeof *VAR_12);
 } else if (VAR_4 <= 3) {
  struct ibv_create_qp_resp_v3 *VAR_17 =
   (struct ibv_create_qp_resp_v3 *)VAR_12;

  FUNC_4((void *)VAR_12 + sizeof *VAR_12,
   (void *)VAR_17 + sizeof *VAR_17,
   VAR_13 - sizeof *VAR_12);
 }

 FUNC_3(VAR_6, VAR_7, VAR_9, VAR_12, VAR_14, VAR_8);

 return 0;
}
