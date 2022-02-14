
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct bhnd_chipid {int dummy; } ;
typedef int bus_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



bus_size_t
FUNC_0(const struct bhnd_chipid *VAR_3,
    uint8_t VAR_4, uint32_t *VAR_5)
{
 switch (VAR_4) {
 case 128:
  return (VAR_1);
 case 129:
  return (VAR_0);
 default:
  return (VAR_2);
 }
}
