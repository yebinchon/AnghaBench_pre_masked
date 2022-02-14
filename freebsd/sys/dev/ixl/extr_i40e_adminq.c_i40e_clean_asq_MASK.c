
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct i40e_adminq_ring {scalar_t__ next_to_clean; scalar_t__ count; int head; } ;
struct TYPE_2__ {struct i40e_adminq_ring asq; } ;
struct i40e_hw {TYPE_1__ aq; } ;
struct i40e_asq_cmd_details {scalar_t__ callback; } ;
struct i40e_aq_desc {scalar_t__ callback; } ;
typedef int (* I40E_ADMINQ_CALLBACK ) (struct i40e_hw*,struct i40e_asq_cmd_details*) ;


 struct i40e_asq_cmd_details* FUNC_0 (struct i40e_adminq_ring,scalar_t__) ;
 struct i40e_asq_cmd_details* FUNC_1 (struct i40e_adminq_ring,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct i40e_adminq_ring*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct i40e_hw*,int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct i40e_asq_cmd_details*,struct i40e_asq_cmd_details*,int,int ) ;
 int FUNC_5 (struct i40e_asq_cmd_details*,int ,int,int ) ;
 scalar_t__ FUNC_6 (struct i40e_hw*,int ) ;

u16 FUNC_7(struct i40e_hw *VAR_4)
{
 struct i40e_adminq_ring *VAR_5 = &(VAR_4->aq.asq);
 struct i40e_asq_cmd_details *VAR_6;
 u16 VAR_7 = VAR_5->next_to_clean;
 struct i40e_aq_desc VAR_8;
 struct i40e_aq_desc *VAR_9;

 VAR_9 = FUNC_0(*VAR_5, VAR_7);
 VAR_6 = FUNC_1(*VAR_5, VAR_7);
 while (FUNC_6(VAR_4, VAR_4->aq.asq.head) != VAR_7) {
  FUNC_3(VAR_4, VAR_0,
      "ntc %d head %d.\n", VAR_7, FUNC_6(VAR_4, VAR_4->aq.asq.head));

  if (VAR_6->callback) {
   I40E_ADMINQ_CALLBACK VAR_10 =
     (I40E_ADMINQ_CALLBACK)VAR_6->callback;
   FUNC_4(&VAR_8, VAR_9, sizeof(struct i40e_aq_desc),
        VAR_2);
   VAR_10(VAR_4, &VAR_8);
  }
  FUNC_5(VAR_9, 0, sizeof(*VAR_9), VAR_1);
  FUNC_5(VAR_6, 0, sizeof(*VAR_6), VAR_3);
  VAR_7++;
  if (VAR_7 == VAR_5->count)
   VAR_7 = 0;
  VAR_9 = FUNC_0(*VAR_5, VAR_7);
  VAR_6 = FUNC_1(*VAR_5, VAR_7);
 }

 VAR_5->next_to_clean = VAR_7;

 return FUNC_2(VAR_5);
}
