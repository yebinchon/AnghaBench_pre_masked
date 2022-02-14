
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 scalar_t__ VAR_0 ;
 scalar_t__* VAR_1 ;

int
FUNC_0(const char *VAR_2, size_t VAR_3)
{
 const u_char *VAR_4 = (u_char *)VAR_2;
 size_t VAR_5;
 int VAR_6;
 int VAR_7 = 0, VAR_8 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  if ((VAR_4[VAR_5] & 0x80) == 0) {





   if (VAR_1[VAR_4[VAR_5]] != VAR_0)
    VAR_8 = 1;
  } else if ((VAR_4[VAR_5] & 0x40) == 0) {
   return -1;
  } else {
   int VAR_9;

   if ((VAR_4[VAR_5] & 0x20) == 0)
    if (VAR_4[VAR_5] > 0xC1)
     VAR_9 = 1;
    else return -1;
   else if ((VAR_4[VAR_5] & 0x10) == 0)
    VAR_9 = 2;
   else if ((VAR_4[VAR_5] & 0x08) == 0)
    if (VAR_4[VAR_5] < 0xF5)
     VAR_9 = 3;
    else return -1;
   else
    return -1;

   for (VAR_6 = 0; VAR_6 < VAR_9; VAR_6++) {
    VAR_5++;
    if (VAR_5 >= VAR_3)
     goto done;

    if ((VAR_4[VAR_5] & 0xc0) != 0x80)
     return -1;
   }

   VAR_7 = 1;
  }
 }
done:
 return VAR_8 ? 0 : (VAR_7 ? 2 : 1);
}
