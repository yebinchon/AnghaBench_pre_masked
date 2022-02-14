
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int word_page_size; } ;
struct ixgbe_hw {TYPE_1__ eeprom; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int,int,int*) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int,int,int*) ;

__attribute__((used)) static s32 FUNC_4(struct ixgbe_hw *VAR_2,
       u16 VAR_3)
{
 u16 VAR_4[VAR_0];
 s32 VAR_5 = VAR_1;
 u16 VAR_6;

 FUNC_0("ixgbe_detect_eeprom_page_size_generic");

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  VAR_4[VAR_6] = VAR_6;

 VAR_2->eeprom.word_page_size = VAR_0;
 VAR_5 = FUNC_3(VAR_2, VAR_3,
          VAR_0, VAR_4);
 VAR_2->eeprom.word_page_size = 0;
 if (VAR_5 != VAR_1)
  goto out;

 VAR_5 = FUNC_2(VAR_2, VAR_3, 1, VAR_4);
 if (VAR_5 != VAR_1)
  goto out;





 VAR_2->eeprom.word_page_size = VAR_0 - VAR_4[0];

 FUNC_1("Detected EEPROM page size = %d words.",
    VAR_2->eeprom.word_page_size);
out:
 return VAR_5;
}
