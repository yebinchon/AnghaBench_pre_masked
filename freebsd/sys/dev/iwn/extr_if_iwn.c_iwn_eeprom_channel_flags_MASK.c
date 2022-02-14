
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct iwn_eeprom_chan {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static uint32_t
FUNC_0(struct iwn_eeprom_chan *VAR_6)
{
 uint32_t VAR_7;

 VAR_7 = 0;
 if ((VAR_6->flags & VAR_3) == 0)
  VAR_7 |= VAR_2;
 if ((VAR_6->flags & VAR_4) == 0)
  VAR_7 |= VAR_1;
 if (VAR_6->flags & VAR_5) {
  VAR_7 |= VAR_0;

  VAR_7 |= VAR_1;
 }

 return VAR_7;
}
