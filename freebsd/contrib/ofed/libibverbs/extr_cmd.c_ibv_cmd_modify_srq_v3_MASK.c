
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibv_srq_attr {int srq_limit; int max_wr; } ;
struct ibv_srq {TYPE_1__* context; int handle; } ;
struct ibv_modify_srq_v3 {int attr_mask; scalar_t__ reserved; scalar_t__ max_sge; int srq_limit; int max_wr; int srq_handle; int driver_data; } ;
struct ibv_modify_srq {int driver_data; } ;
struct TYPE_2__ {int cmd_fd; } ;


 int FUNC_0 (struct ibv_modify_srq_v3*,size_t,int ) ;
 int VAR_0 ;
 struct ibv_modify_srq_v3* FUNC_1 (size_t) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,size_t) ;
 size_t FUNC_3 (int ,struct ibv_modify_srq_v3*,size_t) ;

__attribute__((used)) static int FUNC_4(struct ibv_srq *VAR_2,
     struct ibv_srq_attr *VAR_3,
     int VAR_4,
     struct ibv_modify_srq *VAR_5,
     size_t VAR_6)
{
 struct ibv_modify_srq_v3 *VAR_7;
 size_t VAR_8;

 VAR_8 = sizeof *VAR_7 + VAR_6 - sizeof *VAR_5;
 VAR_7 = FUNC_1(VAR_8);
 FUNC_2(VAR_7->driver_data, VAR_5->driver_data, VAR_6 - sizeof *VAR_5);

 FUNC_0(VAR_7, VAR_8, VAR_0);

 VAR_7->srq_handle = VAR_2->handle;
 VAR_7->attr_mask = VAR_4;
 VAR_7->max_wr = VAR_3->max_wr;
 VAR_7->srq_limit = VAR_3->srq_limit;
 VAR_7->max_sge = 0;
 VAR_7->reserved = 0;

 if (FUNC_3(VAR_2->context->cmd_fd, VAR_7, VAR_8) != VAR_8)
  return VAR_1;

 return 0;
}
