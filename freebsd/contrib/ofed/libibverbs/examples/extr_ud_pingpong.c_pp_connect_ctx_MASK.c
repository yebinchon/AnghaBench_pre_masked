
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ interface_id; } ;
struct TYPE_5__ {TYPE_1__ global; } ;
struct pingpong_dest {TYPE_2__ gid; int lid; } ;
struct pingpong_context {int ah; int pd; int qp; } ;
struct ibv_qp_attr {int sq_psn; int qp_state; } ;
struct TYPE_6__ {int hop_limit; int sgid_index; TYPE_2__ dgid; } ;
struct ibv_ah_attr {int is_global; int sl; int port_num; TYPE_3__ grh; int src_path_bits; int dlid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,struct ibv_ah_attr*) ;
 scalar_t__ FUNC_2 (int ,struct ibv_qp_attr*,int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(struct pingpong_context *VAR_5, int VAR_6, int VAR_7,
     int VAR_8, struct pingpong_dest *VAR_9, int VAR_10)
{
 struct ibv_ah_attr VAR_11 = {
  .is_global = 0,
  .dlid = VAR_9->lid,
  .sl = VAR_8,
  .src_path_bits = 0,
  .port_num = VAR_6
 };
 struct ibv_qp_attr VAR_12 = {
  .qp_state = VAR_0
 };

 if (FUNC_2(VAR_5->qp, &VAR_12, VAR_3)) {
  FUNC_0(VAR_4, "Failed to modify QP to RTR\n");
  return 1;
 }

 VAR_12.qp_state = VAR_1;
 VAR_12.sq_psn = VAR_7;

 if (FUNC_2(VAR_5->qp, &VAR_12,
     VAR_3 |
     VAR_2)) {
  FUNC_0(VAR_4, "Failed to modify QP to RTS\n");
  return 1;
 }

 if (VAR_9->gid.global.interface_id) {
  VAR_11.is_global = 1;
  VAR_11.grh.hop_limit = 1;
  VAR_11.grh.dgid = VAR_9->gid;
  VAR_11.grh.sgid_index = VAR_10;
 }

 VAR_5->ah = FUNC_1(VAR_5->pd, &VAR_11);
 if (!VAR_5->ah) {
  FUNC_0(VAR_4, "Failed to create AH\n");
  return 1;
 }

 return 0;
}
