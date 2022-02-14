
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_comp_ctx {int dummy; } ;
struct ena_com_admin_queue {scalar_t__ running_state; } ;
struct ena_admin_aq_entry {int dummy; } ;
struct ena_admin_acq_entry {int dummy; } ;


 int VAR_0 ;
 struct ena_comp_ctx* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct ena_comp_ctx*) ;
 int FUNC_2 (struct ena_comp_ctx*) ;
 struct ena_comp_ctx* FUNC_3 (struct ena_com_admin_queue*,struct ena_admin_aq_entry*,size_t,struct ena_admin_acq_entry*,size_t) ;
 int FUNC_4 (struct ena_comp_ctx*,struct ena_com_admin_queue*) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*,int) ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(struct ena_com_admin_queue *VAR_1,
      struct ena_admin_aq_entry *VAR_2,
      size_t VAR_3,
      struct ena_admin_acq_entry *VAR_4,
      size_t VAR_5)
{
 struct ena_comp_ctx *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(VAR_1, VAR_2, VAR_3,
         VAR_4, VAR_5);
 if (FUNC_1(VAR_6)) {
  if (VAR_6 == FUNC_0(VAR_0))
   FUNC_5("Failed to submit command [%ld]\n",
        FUNC_2(VAR_6));
  else
   FUNC_6("Failed to submit command [%ld]\n",
        FUNC_2(VAR_6));

  return FUNC_2(VAR_6);
 }

 VAR_7 = FUNC_4(VAR_6, VAR_1);
 if (FUNC_7(VAR_7)) {
  if (VAR_1->running_state)
   FUNC_6("Failed to process command. ret = %d\n",
        VAR_7);
  else
   FUNC_5("Failed to process command. ret = %d\n",
        VAR_7);
 }
 return VAR_7;
}
