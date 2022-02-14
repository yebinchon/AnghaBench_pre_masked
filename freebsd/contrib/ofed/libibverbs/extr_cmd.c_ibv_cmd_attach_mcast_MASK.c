
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union ibv_gid {int raw; } ;
typedef int uint16_t ;
struct ibv_qp {TYPE_1__* context; int handle; } ;
struct ibv_attach_mcast {scalar_t__ reserved; int mlid; int qp_handle; int gid; } ;
struct TYPE_2__ {int cmd_fd; } ;


 int VAR_0 ;
 int FUNC_0 (struct ibv_attach_mcast*,int,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,struct ibv_attach_mcast*,int) ;

int FUNC_3(struct ibv_qp *VAR_2, const union ibv_gid *VAR_3, uint16_t VAR_4)
{
 struct ibv_attach_mcast VAR_5;

 FUNC_0(&VAR_5, sizeof VAR_5, VAR_0);
 FUNC_1(VAR_5.gid, VAR_3->raw, sizeof VAR_5.gid);
 VAR_5.qp_handle = VAR_2->handle;
 VAR_5.mlid = VAR_4;
 VAR_5.reserved = 0;

 if (FUNC_2(VAR_2->context->cmd_fd, &VAR_5, sizeof VAR_5) != sizeof VAR_5)
  return VAR_1;

 return 0;
}
