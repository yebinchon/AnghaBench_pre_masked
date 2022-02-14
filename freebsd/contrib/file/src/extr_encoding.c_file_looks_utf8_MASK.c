
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unichar ;


 scalar_t__ VAR_0 ;
 scalar_t__* VAR_1 ;

int
FUNC_0(const unsigned char *VAR_2, size_t VAR_3, unichar *VAR_4, size_t *VAR_5)
{
 size_t VAR_6;
 int VAR_7;
 unichar VAR_8;
 int VAR_9 = 0, VAR_10 = 0;

 if (VAR_4)
  *VAR_5 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  if ((VAR_2[VAR_6] & 0x80) == 0) {





   if (VAR_1[VAR_2[VAR_6]] != VAR_0)
    VAR_10 = 1;

   if (VAR_4)
    VAR_4[(*VAR_5)++] = VAR_2[VAR_6];
  } else if ((VAR_2[VAR_6] & 0x40) == 0) {
   return -1;
  } else {
   int VAR_11;

   if ((VAR_2[VAR_6] & 0x20) == 0) {
    VAR_8 = VAR_2[VAR_6] & 0x1f;
    VAR_11 = 1;
   } else if ((VAR_2[VAR_6] & 0x10) == 0) {
    VAR_8 = VAR_2[VAR_6] & 0x0f;
    VAR_11 = 2;
   } else if ((VAR_2[VAR_6] & 0x08) == 0) {
    VAR_8 = VAR_2[VAR_6] & 0x07;
    VAR_11 = 3;
   } else if ((VAR_2[VAR_6] & 0x04) == 0) {
    VAR_8 = VAR_2[VAR_6] & 0x03;
    VAR_11 = 4;
   } else if ((VAR_2[VAR_6] & 0x02) == 0) {
    VAR_8 = VAR_2[VAR_6] & 0x01;
    VAR_11 = 5;
   } else
    return -1;

   for (VAR_7 = 0; VAR_7 < VAR_11; VAR_7++) {
    VAR_6++;
    if (VAR_6 >= VAR_3)
     goto done;

    if ((VAR_2[VAR_6] & 0x80) == 0 || (VAR_2[VAR_6] & 0x40))
     return -1;

    VAR_8 = (VAR_8 << 6) + (VAR_2[VAR_6] & 0x3f);
   }

   if (VAR_4)
    VAR_4[(*VAR_5)++] = VAR_8;
   VAR_9 = 1;
  }
 }
done:
 return VAR_10 ? 0 : (VAR_9 ? 2 : 1);
}
