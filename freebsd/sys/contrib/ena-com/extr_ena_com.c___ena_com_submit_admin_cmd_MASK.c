
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct ena_comp_ctx {int wait_event; int cmd_opcode; struct ena_admin_acq_entry* user_cqe; scalar_t__ comp_size; int status; } ;
struct TYPE_6__ {scalar_t__ tail; int phase; int db_addr; int mem_handle; int * entries; } ;
struct TYPE_5__ {int submitted_cmd; int out_of_space; } ;
struct ena_com_admin_queue {scalar_t__ q_depth; scalar_t__ curr_cmd_id; TYPE_3__ sq; int bus; TYPE_2__ stats; int outstanding_cmds; } ;
struct TYPE_4__ {int flags; scalar_t__ command_id; int opcode; } ;
struct ena_admin_aq_entry {TYPE_1__ aq_common_descriptor; } ;
struct ena_admin_acq_entry {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 int FUNC_3 (int ) ;
 struct ena_comp_ctx* FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 struct ena_comp_ctx* FUNC_6 (struct ena_com_admin_queue*,scalar_t__,int) ;
 int FUNC_7 (int *,struct ena_admin_aq_entry*,size_t) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static struct ena_comp_ctx *FUNC_9(struct ena_com_admin_queue *VAR_5,
             struct ena_admin_aq_entry *VAR_6,
             size_t VAR_7,
             struct ena_admin_acq_entry *VAR_8,
             size_t VAR_9)
{
 struct ena_comp_ctx *VAR_10;
 u16 VAR_11, VAR_12;
 u16 VAR_13;
 u16 VAR_14;

 VAR_13 = VAR_5->q_depth - 1;

 VAR_11 = VAR_5->sq.tail & VAR_13;


 VAR_14 = (u16)FUNC_0(&VAR_5->outstanding_cmds);
 if (VAR_14 >= VAR_5->q_depth) {
  FUNC_5("admin queue is full.\n");
  VAR_5->stats.out_of_space++;
  return FUNC_4(VAR_4);
 }

 VAR_12 = VAR_5->curr_cmd_id;

 VAR_6->aq_common_descriptor.flags |= VAR_5->sq.phase &
  VAR_1;

 VAR_6->aq_common_descriptor.command_id |= VAR_12 &
  VAR_0;

 VAR_10 = FUNC_6(VAR_5, VAR_12, 1);
 if (FUNC_8(!VAR_10))
  return FUNC_4(VAR_3);

 VAR_10->status = VAR_2;
 VAR_10->comp_size = (u32)VAR_9;
 VAR_10->user_cqe = VAR_8;
 VAR_10->cmd_opcode = VAR_6->aq_common_descriptor.opcode;

 FUNC_3(VAR_10->wait_event);

 FUNC_7(&VAR_5->sq.entries[VAR_11], VAR_6, VAR_7);

 VAR_5->curr_cmd_id = (VAR_5->curr_cmd_id + 1) &
  VAR_13;

 VAR_5->sq.tail++;
 VAR_5->stats.submitted_cmd++;

 if (FUNC_8((VAR_5->sq.tail & VAR_13) == 0))
  VAR_5->sq.phase = !VAR_5->sq.phase;

 FUNC_1(&VAR_5->sq.mem_handle);
 FUNC_2(VAR_5->bus, VAR_5->sq.tail,
   VAR_5->sq.db_addr);

 return VAR_10;
}
