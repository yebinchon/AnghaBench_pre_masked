
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_item {int unit; scalar_t__ logical_maximum; scalar_t__ logical_minimum; scalar_t__ physical_maximum; scalar_t__ physical_minimum; size_t unit_exponent; } ;
typedef int int64_t ;
typedef int int32_t ;






 int VAR_0 ;
 size_t FUNC_0 (int const**) ;

int32_t
FUNC_1(struct hid_item *VAR_1)
{




 static const int64_t VAR_2[0x10][2] = {
     [0x00] = { 1, 1 },
     [0x01] = { 1, 10 },
     [0x02] = { 1, 100 },
     [0x03] = { 1, 1000 },
     [0x04] = { 1, 10000 },
     [0x05] = { 1, 100000 },
     [0x06] = { 1, 1000000 },
     [0x07] = { 1, 10000000 },
     [0x08] = { 100000000, 1 },
     [0x09] = { 10000000, 1 },
     [0x0A] = { 1000000, 1 },
     [0x0B] = { 100000, 1 },
     [0x0C] = { 10000, 1 },
     [0x0D] = { 1000, 1 },
     [0x0E] = { 100, 1 },
     [0x0F] = { 10, 1 },
 };
 int64_t VAR_3;
 int64_t VAR_4;
 int64_t VAR_5;
 int64_t VAR_6;
 int64_t VAR_7;

 switch (VAR_1->unit) {
 case 131:
  VAR_5 = 1;
  VAR_6 = 10;
  break;
 case 129:
  VAR_5 = 10;
  VAR_6 = 254;
  break;
 case 128:
  VAR_5 = 1;
  VAR_6 = 1;
  break;
 case 130:
  VAR_5 = 573;
  VAR_6 = 10;
  break;
 default:
  return (0);
 }

 if ((VAR_1->logical_maximum <= VAR_1->logical_minimum) ||
     (VAR_1->physical_maximum <= VAR_1->physical_minimum) ||
     (VAR_1->unit_exponent < 0) || (VAR_1->unit_exponent >= FUNC_0(VAR_2)))
  return (0);

 VAR_3 = (int64_t)VAR_1->logical_maximum -
     (int64_t)VAR_1->logical_minimum;
 VAR_4 = (int64_t)VAR_1->physical_maximum -
     (int64_t)VAR_1->physical_minimum;

 VAR_7 = VAR_3 * VAR_5 * VAR_2[VAR_1->unit_exponent][0] /
     (VAR_4 * VAR_6 * VAR_2[VAR_1->unit_exponent][1]);

 if (VAR_7 > VAR_0)
  return (0);

 return (VAR_7);
}
