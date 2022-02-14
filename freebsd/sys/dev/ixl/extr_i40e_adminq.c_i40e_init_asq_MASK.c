
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ count; scalar_t__ next_to_clean; scalar_t__ next_to_use; } ;
struct TYPE_4__ {scalar_t__ num_asq_entries; scalar_t__ asq_buf_size; TYPE_1__ asq; } ;
struct i40e_hw {TYPE_2__ aq; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i40e_hw*) ;
 int FUNC_1 (struct i40e_hw*) ;
 int FUNC_2 (struct i40e_hw*) ;
 int FUNC_3 (struct i40e_hw*) ;

enum i40e_status_code FUNC_4(struct i40e_hw *VAR_3)
{
 enum i40e_status_code VAR_4 = VAR_2;

 if (VAR_3->aq.asq.count > 0) {

  VAR_4 = VAR_1;
  goto init_adminq_exit;
 }


 if ((VAR_3->aq.num_asq_entries == 0) ||
     (VAR_3->aq.asq_buf_size == 0)) {
  VAR_4 = VAR_0;
  goto init_adminq_exit;
 }

 VAR_3->aq.asq.next_to_use = 0;
 VAR_3->aq.asq.next_to_clean = 0;


 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4 != VAR_2)
  goto init_adminq_exit;


 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4 != VAR_2)
  goto init_adminq_free_rings;


 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4 != VAR_2)
  goto init_adminq_free_rings;


 VAR_3->aq.asq.count = VAR_3->aq.num_asq_entries;
 goto init_adminq_exit;

init_adminq_free_rings:
 FUNC_3(VAR_3);

init_adminq_exit:
 return VAR_4;
}
