
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;
struct TYPE_3__ {scalar_t__ report_ID; int pos; int report_size; scalar_t__ logical_minimum; scalar_t__ logical_maximum; } ;
typedef TYPE_1__ hid_item_t ;



int32_t
FUNC_0(const void *VAR_0, const hid_item_t *VAR_1)
{
 const uint8_t *VAR_2;
 uint32_t VAR_3;
 uint32_t VAR_4;
 uint32_t VAR_5;
 int VAR_6, VAR_7, VAR_8;

 VAR_2 = VAR_0;


 if (VAR_1->report_ID > 0)
  VAR_2++;

 VAR_3 = VAR_1->pos;
 VAR_4 = VAR_1->report_size;


 if (VAR_4 == 0)
  return (0);
 if (VAR_4 > 32)
  VAR_4 = 32;

 VAR_8 = VAR_3 / 8;
 VAR_7 = (VAR_3 + VAR_4) / 8 - VAR_8;
 VAR_5 = 0;
 for (VAR_6 = 0; VAR_6 <= VAR_7; VAR_6++)
  VAR_5 |= VAR_2[VAR_8 + VAR_6] << (VAR_6*8);


 VAR_5 >>= VAR_3 % 8;
 VAR_4 = 32 - VAR_4;


 if ((VAR_1->logical_minimum < 0) || (VAR_1->logical_maximum < 0))
  VAR_5 = (int32_t)((int32_t)VAR_5 << VAR_4) >> VAR_4;
 else
  VAR_5 = (uint32_t)((uint32_t)VAR_5 << VAR_4) >> VAR_4;

 return (VAR_5);
}
