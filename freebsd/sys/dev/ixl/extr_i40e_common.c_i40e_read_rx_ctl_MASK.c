
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int api_maj_ver; int api_min_ver; scalar_t__ asq_last_status; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct i40e_hw {TYPE_2__ aq; TYPE_1__ mac; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i40e_hw*,int ,int *,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct i40e_hw*,int ) ;

u32 FUNC_3(struct i40e_hw *VAR_3, u32 VAR_4)
{
 enum i40e_status_code VAR_5 = VAR_2;
 bool VAR_6;
 int VAR_7 = 5;
 u32 VAR_8 = 0;

 VAR_6 = (((VAR_3->aq.api_maj_ver == 1) &&
   (VAR_3->aq.api_min_ver < 5)) ||
   (VAR_3->mac.type == VAR_1));
 if (!VAR_6) {
do_retry:
  VAR_5 = FUNC_0(VAR_3, VAR_4, &VAR_8, ((void*)0));
  if (VAR_3->aq.asq_last_status == VAR_0 && VAR_7) {
   FUNC_1(1);
   VAR_7--;
   goto do_retry;
  }
 }


 if (VAR_5 || VAR_6)
  VAR_8 = FUNC_2(VAR_3, VAR_4);

 return VAR_8;
}
