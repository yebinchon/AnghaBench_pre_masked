
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibv_qp_attr {int qp_state; } ;
struct ibv_kern_qp_attr {int qp_attr_mask; } ;
struct ib_ucm_init_qp_attr {int qp_state; int id; } ;
struct ib_cm_id {TYPE_1__* device; int handle; } ;
struct TYPE_2__ {int fd; } ;


 int FUNC_0 (void*,struct ib_ucm_init_qp_attr*,struct ibv_kern_qp_attr*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct ibv_kern_qp_attr*,int) ;
 int FUNC_3 (struct ibv_qp_attr*,struct ibv_kern_qp_attr*) ;
 int FUNC_4 (int ,void*,int) ;

int FUNC_5(struct ib_cm_id *VAR_3,
         struct ibv_qp_attr *VAR_4,
         int *VAR_5)
{
 struct ibv_kern_qp_attr *VAR_6;
 struct ib_ucm_init_qp_attr *VAR_7;
 void *VAR_8;
 int VAR_9;
 int VAR_10;

 if (!VAR_4 || !VAR_5)
  return FUNC_1(VAR_0);

 FUNC_0(VAR_8, VAR_7, VAR_6, VAR_2, VAR_10);
 VAR_7->id = VAR_3->handle;
 VAR_7->qp_state = VAR_4->qp_state;

 VAR_9 = FUNC_4(VAR_3->device->fd, VAR_8, VAR_10);
 if (VAR_9 != VAR_10)
  return (VAR_9 >= 0) ? FUNC_1(VAR_1) : VAR_9;

 FUNC_2(VAR_6, sizeof *VAR_6);

 *VAR_5 = VAR_6->qp_attr_mask;
 FUNC_3(VAR_4, VAR_6);

 return 0;
}
