
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_size_t ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct hid_location {int pos; int size; } ;


 int FUNC_0 (int,char*,int,int,unsigned int) ;

void
FUNC_1(uint8_t *VAR_0, usb_size_t VAR_1,
    struct hid_location *VAR_2, unsigned int VAR_3)
{
 uint32_t VAR_4 = VAR_2->pos;
 uint32_t VAR_5 = VAR_2->size;
 uint64_t VAR_6;
 uint64_t VAR_7;
 uint32_t VAR_8;
 uint8_t VAR_9;

 FUNC_0(11, "hid_put_data: loc %d/%d = %u\n", VAR_4, VAR_5, VAR_3);


 if (VAR_5 == 0)
  return;
 if (VAR_5 > 32)
  VAR_5 = 32;


 VAR_8 = (VAR_4 / 8);
 VAR_9 = (VAR_5 + 7) / 8;
 VAR_6 = ((uint64_t)VAR_3) << (VAR_4 % 8);
 VAR_7 = ((1ULL << VAR_5) - 1ULL) << (VAR_4 % 8);
 VAR_8 += VAR_9;
 while (VAR_9--) {
  VAR_8--;
  if (VAR_8 < VAR_1) {
   VAR_0[VAR_8] &= ~(VAR_7 >> (8 * VAR_9));
   VAR_0[VAR_8] |= (VAR_6 >> (8 * VAR_9));
  }
 }
}
