
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlnxr_dev {int ha; } ;
struct TYPE_2__ {scalar_t__ max_recv_sge; scalar_t__ max_recv_wr; scalar_t__ max_send_wr; } ;
struct ib_qp_init_attr {TYPE_1__ cap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static inline int
FUNC_2(struct qlnxr_dev *VAR_4,
  struct ib_qp_init_attr *VAR_5)
{
 FUNC_1(VAR_4->ha, "enter\n");

 if (VAR_5->cap.max_recv_sge > VAR_1) {
  FUNC_0(VAR_4->ha,
   "(attrs->cap.max_recv_sge > QLNXR_GSI_MAX_RECV_SGE)\n");
  return -VAR_0;
 }

 if (VAR_5->cap.max_recv_wr > VAR_2) {
  FUNC_0(VAR_4->ha,
   "(attrs->cap.max_recv_wr > QLNXR_GSI_MAX_RECV_WR)\n");
  return -VAR_0;
 }

 if (VAR_5->cap.max_send_wr > VAR_3) {
  FUNC_0(VAR_4->ha,
   "(attrs->cap.max_send_wr > QLNXR_GSI_MAX_SEND_WR)\n");
  return -VAR_0;
 }

 FUNC_1(VAR_4->ha, "exit\n");

 return 0;
}
