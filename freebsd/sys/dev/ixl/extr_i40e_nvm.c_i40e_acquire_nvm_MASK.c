
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_4__ {int asq_last_status; } ;
struct TYPE_3__ {scalar_t__ hw_semaphore_timeout; scalar_t__ blank_nvm_mode; } ;
struct i40e_hw {TYPE_2__ aq; TYPE_1__ nvm; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;
typedef enum i40e_aq_resource_access_type { ____Placeholder_i40e_aq_resource_access_type } i40e_aq_resource_access_type ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct i40e_hw*,int ,int,int ,scalar_t__*,int *) ;
 int FUNC_3 (struct i40e_hw*,int ,char*,scalar_t__,int,int,...) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct i40e_hw*,int ) ;

enum i40e_status_code FUNC_6(struct i40e_hw *VAR_5,
           enum i40e_aq_resource_access_type VAR_6)
{
 enum i40e_status_code VAR_7 = VAR_4;
 u64 VAR_8, VAR_9;
 u64 VAR_10 = 0;

 FUNC_0("i40e_acquire_nvm");

 if (VAR_5->nvm.blank_nvm_mode)
  goto i40e_i40e_acquire_nvm_exit;

 VAR_7 = FUNC_2(VAR_5, VAR_3, VAR_6,
         0, &VAR_10, ((void*)0));

 VAR_8 = FUNC_5(VAR_5, VAR_1);


 VAR_5->nvm.hw_semaphore_timeout = FUNC_1(VAR_10) + VAR_8;

 if (VAR_7)
  FUNC_3(VAR_5, VAR_0,
      "NVM acquire type %d failed time_left=%llu ret=%d aq_err=%d\n",
      VAR_6, VAR_10, VAR_7, VAR_5->aq.asq_last_status);

 if (VAR_7 && VAR_10) {

  VAR_9 = FUNC_1(VAR_2) + VAR_8;
  while ((VAR_8 < VAR_9) && VAR_10) {
   FUNC_4(10);
   VAR_8 = FUNC_5(VAR_5, VAR_1);
   VAR_7 = FUNC_2(VAR_5,
       VAR_3,
       VAR_6, 0, &VAR_10,
       ((void*)0));
   if (VAR_7 == VAR_4) {
    VAR_5->nvm.hw_semaphore_timeout =
         FUNC_1(VAR_10) + VAR_8;
    break;
   }
  }
  if (VAR_7 != VAR_4) {
   VAR_5->nvm.hw_semaphore_timeout = 0;
   FUNC_3(VAR_5, VAR_0,
       "NVM acquire timed out, wait %llu ms before trying again. status=%d aq_err=%d\n",
       VAR_10, VAR_7, VAR_5->aq.asq_last_status);
  }
 }

i40e_i40e_acquire_nvm_exit:
 return VAR_7;
}
