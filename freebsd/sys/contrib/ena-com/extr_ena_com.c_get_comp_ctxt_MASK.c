
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct ena_comp_ctx {int occupied; } ;
struct ena_com_admin_queue {size_t q_depth; struct ena_comp_ctx* comp_ctx; int outstanding_cmds; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static struct ena_comp_ctx *FUNC_3(struct ena_com_admin_queue *VAR_0,
       u16 VAR_1, bool VAR_2)
{
 if (FUNC_2(VAR_1 >= VAR_0->q_depth)) {
  FUNC_1("command id is larger than the queue size. cmd_id: %u queue size %d\n",
       VAR_1, VAR_0->q_depth);
  return ((void*)0);
 }

 if (FUNC_2(VAR_0->comp_ctx[VAR_1].occupied && VAR_2)) {
  FUNC_1("Completion context is occupied\n");
  return ((void*)0);
 }

 if (VAR_2) {
  FUNC_0(&VAR_0->outstanding_cmds);
  VAR_0->comp_ctx[VAR_1].occupied = 1;
 }

 return &VAR_0->comp_ctx[VAR_1];
}
