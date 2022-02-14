
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ sr_size; } ;
struct i40e_hw {TYPE_1__ nvm; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
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
 int FUNC_2 (struct i40e_hw*,int ,char*,scalar_t__,...) ;
 int FUNC_3 (struct i40e_hw*) ;
 int FUNC_4 (struct i40e_hw*,int ) ;
 int FUNC_5 (struct i40e_hw*,int ,int) ;

enum i40e_status_code FUNC_6(struct i40e_hw *VAR_10, u16 VAR_11,
            u16 *VAR_12)
{
 enum i40e_status_code VAR_13 = VAR_2;
 u32 VAR_14;

 FUNC_1("i40e_read_nvm_word_srctl");

 if (VAR_11 >= VAR_10->nvm.sr_size) {
  FUNC_2(VAR_10, VAR_0,
      "NVM read error: Offset %d beyond Shadow RAM limit %d\n",
      VAR_11, VAR_10->nvm.sr_size);
  VAR_13 = VAR_1;
  goto read_nvm_exit;
 }


 VAR_13 = FUNC_3(VAR_10);
 if (VAR_13 == VAR_9) {

  VAR_14 = ((u32)VAR_11 << VAR_4) |
    FUNC_0(VAR_5);
  FUNC_5(VAR_10, VAR_3, VAR_14);


  VAR_13 = FUNC_3(VAR_10);
  if (VAR_13 == VAR_9) {
   VAR_14 = FUNC_4(VAR_10, VAR_6);
   *VAR_12 = (u16)((VAR_14 &
           VAR_7)
        >> VAR_8);
  }
 }
 if (VAR_13 != VAR_9)
  FUNC_2(VAR_10, VAR_0,
      "NVM read error: Couldn't access Shadow RAM address: 0x%x\n",
      VAR_11);

read_nvm_exit:
 return VAR_13;
}
