
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct wpi_eeprom_chan {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static uint32_t
FUNC_0(struct wpi_eeprom_chan *VAR_7)
{
 uint32_t VAR_8;

 VAR_8 = 0;
 if ((VAR_7->flags & VAR_4) == 0)
  VAR_8 |= VAR_3;
 if ((VAR_7->flags & VAR_5) == 0)
  VAR_8 |= VAR_1;
 if (VAR_7->flags & VAR_6) {
  VAR_8 |= VAR_0;

  VAR_8 |= VAR_1;
 }


 if (VAR_8 & VAR_1)
  VAR_8 |= VAR_2;

 return VAR_8;
}
