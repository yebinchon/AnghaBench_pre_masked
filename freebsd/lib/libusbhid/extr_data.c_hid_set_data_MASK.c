
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;
struct TYPE_3__ {int report_ID; int pos; int report_size; } ;
typedef TYPE_1__ hid_item_t ;



void
FUNC_0(void *VAR_0, const hid_item_t *VAR_1, int32_t VAR_2)
{
 uint8_t *VAR_3;
 uint32_t VAR_4;
 uint32_t VAR_5;
 uint32_t VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_3 = VAR_0;


 if (VAR_1->report_ID > 0)
  *VAR_3++ = VAR_1->report_ID & 0xff;

 VAR_4 = VAR_1->pos;
 VAR_5 = VAR_1->report_size;

 if (VAR_5 != 32) {
  VAR_6 = (1 << VAR_5) - 1;
  VAR_2 &= VAR_6;
 } else
  VAR_6 = ~0;

 VAR_2 <<= (VAR_4 % 8);
 VAR_6 <<= (VAR_4 % 8);
 VAR_6 = ~VAR_6;

 VAR_9 = VAR_4 / 8;
 VAR_8 = (VAR_4 + VAR_5) / 8 - VAR_9;

 for (VAR_7 = 0; VAR_7 <= VAR_8; VAR_7++)
  VAR_3[VAR_9 + VAR_7] = (VAR_3[VAR_9 + VAR_7] & (VAR_6 >> (VAR_7*8))) |
      ((VAR_2 >> (VAR_7*8)) & 0xff);
}
