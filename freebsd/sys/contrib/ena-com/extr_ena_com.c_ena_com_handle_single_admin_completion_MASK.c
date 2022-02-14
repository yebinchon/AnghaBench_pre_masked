
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ena_comp_ctx {int wait_event; int comp_size; scalar_t__ user_cqe; int comp_status; int status; } ;
struct ena_com_admin_queue {int running_state; int polling; } ;
struct TYPE_2__ {int command; int status; } ;
struct ena_admin_acq_entry {TYPE_1__ acq_common_descriptor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 struct ena_comp_ctx* FUNC_2 (struct ena_com_admin_queue*,int,int) ;
 int FUNC_3 (scalar_t__,void*,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct ena_com_admin_queue *VAR_2,
         struct ena_admin_acq_entry *VAR_3)
{
 struct ena_comp_ctx *VAR_4;
 u16 VAR_5;

 VAR_5 = VAR_3->acq_common_descriptor.command &
  VAR_0;

 VAR_4 = FUNC_2(VAR_2, VAR_5, 0);
 if (FUNC_4(!VAR_4)) {
  FUNC_1("comp_ctx is NULL. Changing the admin queue running state\n");
  VAR_2->running_state = 0;
  return;
 }

 VAR_4->status = VAR_1;
 VAR_4->comp_status = VAR_3->acq_common_descriptor.status;

 if (VAR_4->user_cqe)
  FUNC_3(VAR_4->user_cqe, (void *)VAR_3, VAR_4->comp_size);

 if (!VAR_2->polling)
  FUNC_0(VAR_4->wait_event);
}
