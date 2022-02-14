
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int desc_buf; } ;
struct TYPE_4__ {int num_arq_entries; TYPE_1__ arq; } ;
struct i40e_hw {TYPE_2__ aq; } ;
struct i40e_aq_desc {int dummy; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int VAR_0 ;
 int FUNC_0 (struct i40e_hw*,int *,int ,int,int ) ;
 int VAR_1 ;

enum i40e_status_code FUNC_1(struct i40e_hw *VAR_2)
{
 enum i40e_status_code VAR_3;

 VAR_3 = FUNC_0(VAR_2, &VAR_2->aq.arq.desc_buf,
      VAR_1,
      (VAR_2->aq.num_arq_entries *
      sizeof(struct i40e_aq_desc)),
      VAR_0);

 return VAR_3;
}
