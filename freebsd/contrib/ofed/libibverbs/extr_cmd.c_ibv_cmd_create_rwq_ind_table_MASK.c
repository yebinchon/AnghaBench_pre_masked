
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct ibv_rwq_ind_table_init_attr {scalar_t__ comp_mask; int log_ind_tbl_size; TYPE_1__** ind_tbl; } ;
struct ibv_rwq_ind_table {struct ibv_context* context; int ind_tbl_num; int ind_tbl_handle; } ;
struct ibv_create_rwq_ind_table_resp {size_t response_length; int ind_tbl_num; int ind_tbl_handle; } ;
struct ibv_create_rwq_ind_table {int log_ind_tbl_size; scalar_t__ comp_mask; } ;
struct ibv_context {int cmd_fd; } ;
struct TYPE_2__ {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ibv_create_rwq_ind_table*,size_t,size_t,int ,struct ibv_create_rwq_ind_table_resp*,size_t,size_t) ;
 int FUNC_1 (struct ibv_create_rwq_ind_table_resp*,size_t) ;
 int VAR_3 ;
 int FUNC_2 (int ,struct ibv_create_rwq_ind_table*,size_t) ;

int FUNC_3(struct ibv_context *VAR_4,
     struct ibv_rwq_ind_table_init_attr *VAR_5,
     struct ibv_rwq_ind_table *VAR_6,
     struct ibv_create_rwq_ind_table *VAR_7,
     size_t VAR_8,
     size_t VAR_9,
     struct ibv_create_rwq_ind_table_resp *VAR_10,
     size_t VAR_11,
     size_t VAR_12)
{
 int VAR_13, VAR_14;
 uint32_t VAR_15, VAR_16;
 uint32_t *VAR_17;
 int VAR_18;

 if (VAR_5->comp_mask >= VAR_2)
  return VAR_1;

 VAR_16 = VAR_8 - sizeof(*VAR_7);
 VAR_18 = 1 << VAR_5->log_ind_tbl_size;


 VAR_15 = (VAR_18 * sizeof(uint32_t)) < sizeof(uint64_t) ?
   sizeof(uint64_t) : (VAR_18 * sizeof(uint32_t));

 if (VAR_16 < VAR_15)
  return VAR_1;

 VAR_17 = (uint32_t *)((uint8_t *)VAR_7 + sizeof(*VAR_7));
 for (VAR_14 = 0; VAR_14 < VAR_18; VAR_14++)
  VAR_17[VAR_14] = VAR_5->ind_tbl[VAR_14]->handle;

 FUNC_0(VAR_7, VAR_8, VAR_9,
          VAR_0, VAR_10,
          VAR_11, VAR_12);
 VAR_7->log_ind_tbl_size = VAR_5->log_ind_tbl_size;
 VAR_7->comp_mask = 0;

 VAR_13 = FUNC_2(VAR_4->cmd_fd, VAR_7, VAR_9);
 if (VAR_13 != VAR_9)
  return VAR_3;

 (void) FUNC_1(VAR_10, VAR_12);

 if (VAR_10->response_length < VAR_11)
  return VAR_1;

 VAR_6->ind_tbl_handle = VAR_10->ind_tbl_handle;
 VAR_6->ind_tbl_num = VAR_10->ind_tbl_num;
 VAR_6->context = VAR_4;
 return 0;
}
