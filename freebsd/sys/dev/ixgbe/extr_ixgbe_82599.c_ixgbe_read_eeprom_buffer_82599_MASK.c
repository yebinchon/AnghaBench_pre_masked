
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ixgbe_eeprom_info {scalar_t__ type; } ;
struct ixgbe_hw {struct ixgbe_eeprom_info eeprom; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct ixgbe_hw*,int,int,int*) ;
 int FUNC_2 (struct ixgbe_hw*,int,int,int*) ;

__attribute__((used)) static s32 FUNC_3(struct ixgbe_hw *VAR_3, u16 VAR_4,
       u16 VAR_5, u16 *VAR_6)
{
 struct ixgbe_eeprom_info *VAR_7 = &VAR_3->eeprom;
 s32 VAR_8 = VAR_1;

 FUNC_0("ixgbe_read_eeprom_buffer_82599");





 if ((VAR_7->type == VAR_2) &&
     (VAR_4 + (VAR_5 - 1) <= VAR_0))
  VAR_8 = FUNC_2(VAR_3, VAR_4, VAR_5,
        VAR_6);
 else
  VAR_8 = FUNC_1(VAR_3, VAR_4,
            VAR_5,
            VAR_6);

 return VAR_8;
}
