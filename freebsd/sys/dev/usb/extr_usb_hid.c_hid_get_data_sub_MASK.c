
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_size_t ;
typedef int uint8_t ;
typedef int uint32_t ;
struct hid_location {int pos; int size; } ;
typedef int int32_t ;


 int FUNC_0 (int,char*,int,int,...) ;

__attribute__((used)) static uint32_t
FUNC_1(const uint8_t *VAR_0, usb_size_t VAR_1, struct hid_location *VAR_2,
    int VAR_3)
{
 uint32_t VAR_4 = VAR_2->pos;
 uint32_t VAR_5 = VAR_2->size;
 uint32_t VAR_6;
 uint32_t VAR_7;
 uint8_t VAR_8;

 FUNC_0(11, "hid_get_data: loc %d/%d\n", VAR_4, VAR_5);


 if (VAR_5 == 0)
  return (0);
 if (VAR_5 > 32)
  VAR_5 = 32;


 VAR_6 = 0;
 VAR_7 = (VAR_4 / 8);
 VAR_8 = (VAR_5 + 7) / 8;
 VAR_7 += VAR_8;
 while (VAR_8--) {
  VAR_7--;
  if (VAR_7 < VAR_1)
   VAR_6 |= VAR_0[VAR_7] << (8 * VAR_8);
 }


 VAR_6 = (VAR_6 >> (VAR_4 % 8));
 VAR_8 = 32 - VAR_5;


 if (VAR_3 != 0)
  VAR_6 = (int32_t)((int32_t)VAR_6 << VAR_8) >> VAR_8;
 else
  VAR_6 = (uint32_t)((uint32_t)VAR_6 << VAR_8) >> VAR_8;

 FUNC_0(11, "hid_get_data: loc %d/%d = %lu\n",
     VAR_2->pos, VAR_2->size, (long)VAR_6);
 return (VAR_6);
}
