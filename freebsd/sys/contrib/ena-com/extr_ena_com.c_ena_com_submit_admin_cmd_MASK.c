
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_comp_ctx {int dummy; } ;
struct ena_com_admin_queue {int running_state; int q_lock; } ;
struct ena_admin_aq_entry {int dummy; } ;
struct ena_admin_acq_entry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (int ,unsigned long) ;
 struct ena_comp_ctx* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct ena_comp_ctx*) ;
 struct ena_comp_ctx* FUNC_4 (struct ena_com_admin_queue*,struct ena_admin_aq_entry*,size_t,struct ena_admin_acq_entry*,size_t) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static struct ena_comp_ctx *FUNC_6(struct ena_com_admin_queue *VAR_1,
           struct ena_admin_aq_entry *VAR_2,
           size_t VAR_3,
           struct ena_admin_acq_entry *VAR_4,
           size_t VAR_5)
{
 unsigned long VAR_6 = 0;
 struct ena_comp_ctx *VAR_7;

 FUNC_0(VAR_1->q_lock, VAR_6);
 if (FUNC_5(!VAR_1->running_state)) {
  FUNC_1(VAR_1->q_lock, VAR_6);
  return FUNC_2(VAR_0);
 }
 VAR_7 = FUNC_4(VAR_1, VAR_2,
           VAR_3,
           VAR_4,
           VAR_5);
 if (FUNC_3(VAR_7))
  VAR_1->running_state = 0;
 FUNC_1(VAR_1->q_lock, VAR_6);

 return VAR_7;
}
