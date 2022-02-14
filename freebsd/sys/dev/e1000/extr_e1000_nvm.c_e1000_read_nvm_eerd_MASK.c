
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct e1000_nvm_info {scalar_t__ word_size; } ;
struct e1000_hw {struct e1000_nvm_info nvm; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (struct e1000_hw*,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ) ;

s32 FUNC_6(struct e1000_hw *VAR_7, u16 VAR_8, u16 VAR_9, u16 *VAR_10)
{
 struct e1000_nvm_info *VAR_11 = &VAR_7->nvm;
 u32 VAR_12, VAR_13 = 0;
 s32 VAR_14 = VAR_6;

 FUNC_0("e1000_read_nvm_eerd");




 if ((VAR_8 >= VAR_11->word_size) || (VAR_9 > (VAR_11->word_size - VAR_8)) ||
     (VAR_9 == 0)) {
  FUNC_1("nvm parameter(s) out of bounds\n");
  return -VAR_1;
 }

 for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++) {
  VAR_13 = ((VAR_8+VAR_12) << VAR_3) +
         VAR_5;

  FUNC_4(VAR_7, VAR_0, VAR_13);
  VAR_14 = FUNC_5(VAR_7, VAR_2);
  if (VAR_14)
   break;

  VAR_10[VAR_12] = (FUNC_3(VAR_7, VAR_0) >>
      VAR_4);
 }

 if (VAR_14)
  FUNC_2("NVM read error: %d\n", VAR_14);

 return VAR_14;
}
