
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucma_abi_create_id_resp {int id; } ;
struct ucma_abi_create_id {uintptr_t uid; int ps; int qp_type; } ;
struct rdma_event_channel {int dummy; } ;
struct rdma_cm_id {TYPE_1__* channel; } ;
struct cma_id_private {struct rdma_cm_id id; int handle; } ;
typedef enum rdma_port_space { ____Placeholder_rdma_port_space } rdma_port_space ;
typedef enum ibv_qp_type { ____Placeholder_ibv_qp_type } ibv_qp_type ;
struct TYPE_2__ {int fd; } ;


 int FUNC_0 (struct ucma_abi_create_id*,int,int ,struct ucma_abi_create_id_resp*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ucma_abi_create_id_resp*,int) ;
 struct cma_id_private* FUNC_3 (struct rdma_event_channel*,void*,int,int) ;
 int FUNC_4 (struct cma_id_private*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct cma_id_private*) ;
 int FUNC_7 (int ,struct ucma_abi_create_id*,int) ;

__attribute__((used)) static int FUNC_8(struct rdma_event_channel *VAR_2,
      struct rdma_cm_id **VAR_3, void *VAR_4,
      enum rdma_port_space VAR_5, enum ibv_qp_type VAR_6)
{
 struct ucma_abi_create_id_resp VAR_7;
 struct ucma_abi_create_id VAR_8;
 struct cma_id_private *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_5();
 if (VAR_10)
  return VAR_10;

 VAR_9 = FUNC_3(VAR_2, VAR_4, VAR_5, VAR_6);
 if (!VAR_9)
  return FUNC_1(VAR_1);

 FUNC_0(&VAR_8, sizeof VAR_8, VAR_0, &VAR_7, sizeof VAR_7);
 VAR_8.uid = (uintptr_t) VAR_9;
 VAR_8.ps = VAR_5;
 VAR_8.qp_type = VAR_6;

 VAR_10 = FUNC_7(VAR_9->id.channel->fd, &VAR_8, sizeof VAR_8);
 if (VAR_10 != sizeof VAR_8)
  goto err;

 FUNC_2(&VAR_7, sizeof VAR_7);

 VAR_9->handle = VAR_7.id;
 FUNC_6(VAR_9);
 *VAR_3 = &VAR_9->id;
 return 0;

err: FUNC_4(VAR_9);
 return VAR_10;
}
