
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
struct TYPE_4__ {int type; } ;
struct TYPE_3__ {int get_link_info; } ;
struct i40e_hw {int flags; TYPE_2__ mac; void* pf_id; void* port; TYPE_1__ phy; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct i40e_hw*) ;
 int FUNC_2 (struct i40e_hw*) ;
 int FUNC_3 (struct i40e_hw*,int ) ;

enum i40e_status_code FUNC_4(struct i40e_hw *VAR_12)
{
 enum i40e_status_code VAR_13 = VAR_10;
 u32 VAR_14, VAR_15, VAR_16;

 FUNC_0("i40e_init_shared_code");

 FUNC_2(VAR_12);

 switch (VAR_12->mac.type) {
 case 128:
 case 129:
  break;
 default:
  return VAR_0;
 }

 VAR_12->phy.get_link_info = VAR_11;


 VAR_14 = (FUNC_3(VAR_12, VAR_6) & VAR_7)
        >> VAR_8;
 VAR_12->port = (u8)VAR_14;
 VAR_15 = (FUNC_3(VAR_12, VAR_1) & VAR_2) >>
       VAR_3;
 VAR_16 = FUNC_3(VAR_12, VAR_9);
 if (VAR_15)
  VAR_12->pf_id = (u8)(VAR_16 & 0xff);
 else
  VAR_12->pf_id = (u8)(VAR_16 & 0x7);

 if (VAR_12->mac.type == 129)
  VAR_12->flags |= VAR_4 |
        VAR_5;

 VAR_13 = FUNC_1(VAR_12);
 return VAR_13;
}
