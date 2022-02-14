
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct bhnd_chipid {int chip_id; } ;
typedef int bus_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;







bus_size_t
FUNC_0(const struct bhnd_chipid *VAR_4,
    uint8_t VAR_5, uint32_t *VAR_6)
{
 switch (VAR_5) {
 case 133:
 case 131:
 case 129:
 case 128:
  return (VAR_2);

 case 130:

  if (VAR_6 != ((void*)0))
   *VAR_6 = 200 * 1000 * 1000;
  return (0);

 case 132:
  if (VAR_4->chip_id == VAR_0) {

   if (VAR_6 != ((void*)0))
    *VAR_6 = 200 * 1000 * 1000;
   return (0);
  }

  return (VAR_1);

 default:
  return (VAR_3);
 }
}
