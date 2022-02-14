
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct ig4_hw {int sda_fall_time; int ic_clock_rate; int scl_fall_time; int sda_hold_time; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_0(const struct ig4_hw *VAR_7, int VAR_8,
    uint16_t *VAR_9, uint16_t *VAR_10, uint16_t *VAR_11)
{
 uint32_t VAR_12, VAR_13, VAR_14;
 uint32_t VAR_15;
        uint32_t VAR_16;

 switch (VAR_8) {
 case 128:
  VAR_12 = VAR_5;
  VAR_13 = VAR_6;
  VAR_14 = VAR_4;
  break;

 case 129:
  VAR_12 = VAR_2;
  VAR_13 = VAR_3;
  VAR_14 = VAR_1;
  break;

 default:
  return (VAR_0);
 }


 VAR_15 = VAR_7->sda_fall_time == 0 ? VAR_14 : VAR_7->sda_fall_time;
 *VAR_9 = (uint16_t)
     ((VAR_7->ic_clock_rate * (VAR_12 + VAR_15) + 500) / 1000 - 3);

 VAR_16 = VAR_7->scl_fall_time == 0 ? VAR_14 : VAR_7->scl_fall_time;
 *VAR_10 = (uint16_t)
     ((VAR_7->ic_clock_rate * (VAR_13 + VAR_16) + 500) / 1000 - 1);





 if (VAR_7->sda_hold_time != 0)
  *VAR_11 = (uint16_t)
      ((VAR_7->ic_clock_rate * VAR_7->sda_hold_time + 500) / 1000);

 return (0);
}
