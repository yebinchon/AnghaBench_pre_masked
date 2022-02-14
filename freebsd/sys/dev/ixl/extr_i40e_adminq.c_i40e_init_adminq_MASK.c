
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_6__ {scalar_t__ num_arq_entries; scalar_t__ num_asq_entries; scalar_t__ arq_buf_size; scalar_t__ asq_buf_size; int api_maj_ver; int api_min_ver; int arq_spinlock; int asq_spinlock; int fw_build; int fw_min_ver; int fw_maj_ver; int asq_cmd_timeout; } ;
struct TYPE_5__ {scalar_t__ type; } ;
struct TYPE_4__ {int version; int eetrack; int oem_ver; } ;
struct i40e_hw {TYPE_3__ aq; int nvmupd_state; int nvm_release_on_done; int flags; TYPE_2__ mac; TYPE_1__ nvm; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct i40e_hw*) ;
 int FUNC_1 (struct i40e_hw*,int *,int *,int *,int*,int*,int *) ;
 int FUNC_2 (struct i40e_hw*,int ,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct i40e_hw*) ;
 int FUNC_5 (struct i40e_hw*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct i40e_hw*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct i40e_hw*,int,int*) ;
 int FUNC_10 (struct i40e_hw*) ;
 int FUNC_11 (struct i40e_hw*) ;
 int FUNC_12 (struct i40e_hw*) ;

enum i40e_status_code FUNC_13(struct i40e_hw *VAR_19)
{
 u16 VAR_20, VAR_21, VAR_22;
 u16 VAR_23, VAR_24;
 enum i40e_status_code VAR_25;
 int VAR_26 = 0;


 if ((VAR_19->aq.num_arq_entries == 0) ||
     (VAR_19->aq.num_asq_entries == 0) ||
     (VAR_19->aq.arq_buf_size == 0) ||
     (VAR_19->aq.asq_buf_size == 0)) {
  VAR_25 = VAR_3;
  goto init_adminq_exit;
 }
 FUNC_6(&VAR_19->aq.asq_spinlock);
 FUNC_6(&VAR_19->aq.arq_spinlock);


 FUNC_0(VAR_19);


 VAR_19->aq.asq_cmd_timeout = VAR_1;


 VAR_25 = FUNC_5(VAR_19);
 if (VAR_25 != VAR_18)
  goto init_adminq_destroy_spinlocks;


 VAR_25 = FUNC_4(VAR_19);
 if (VAR_25 != VAR_18)
  goto init_adminq_free_asq;


 if (FUNC_7(VAR_19))
  goto init_adminq_exit;




 do {
  VAR_25 = FUNC_1(VAR_19,
       &VAR_19->aq.fw_maj_ver,
       &VAR_19->aq.fw_min_ver,
       &VAR_19->aq.fw_build,
       &VAR_19->aq.api_maj_ver,
       &VAR_19->aq.api_min_ver,
       ((void*)0));
  if (VAR_25 != VAR_2)
   break;
  VAR_26++;
  FUNC_8(100);
  FUNC_10(VAR_19);
 } while (VAR_26 < 10);
 if (VAR_25 != VAR_18)
  goto init_adminq_free_arq;


 FUNC_9(VAR_19, VAR_15,
      &VAR_19->nvm.version);
 FUNC_9(VAR_19, VAR_17, &VAR_23);
 FUNC_9(VAR_19, VAR_16, &VAR_24);
 VAR_19->nvm.eetrack = (VAR_24 << 16) | VAR_23;
 FUNC_9(VAR_19, VAR_14, &VAR_20);
 FUNC_9(VAR_19, (VAR_20 + VAR_12),
      &VAR_21);
 FUNC_9(VAR_19, (VAR_20 + (VAR_12 + 1)),
      &VAR_22);
 VAR_19->nvm.oem_ver = ((u32)VAR_21 << 16) | VAR_22;


 if ((VAR_19->aq.api_maj_ver > 1) ||
     ((VAR_19->aq.api_maj_ver == 1) &&
      (VAR_19->aq.api_min_ver >= 7)))
  VAR_19->flags |= VAR_6;

 if (VAR_19->mac.type == VAR_9 &&
     VAR_19->aq.api_maj_ver == VAR_5 &&
     VAR_19->aq.api_min_ver >= VAR_10) {
  VAR_19->flags |= VAR_7;
 }


 if ((VAR_19->aq.api_maj_ver > 1) ||
     ((VAR_19->aq.api_maj_ver == 1) &&
      (VAR_19->aq.api_min_ver >= 5)))
  VAR_19->flags |= VAR_8;

 if (VAR_19->aq.api_maj_ver > VAR_5) {
  VAR_25 = VAR_4;
  goto init_adminq_free_arq;
 }


 FUNC_2(VAR_19, VAR_13, 0, ((void*)0));
 VAR_19->nvm_release_on_done = VAR_0;
 VAR_19->nvmupd_state = VAR_11;

 VAR_25 = VAR_18;


 goto init_adminq_exit;

init_adminq_free_arq:
 FUNC_11(VAR_19);
init_adminq_free_asq:
 FUNC_12(VAR_19);
init_adminq_destroy_spinlocks:
 FUNC_3(&VAR_19->aq.asq_spinlock);
 FUNC_3(&VAR_19->aq.arq_spinlock);

init_adminq_exit:
 return VAR_25;
}
