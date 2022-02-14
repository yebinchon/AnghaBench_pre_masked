
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;



char *
FUNC_0(uint64_t VAR_0, float *VAR_1, int VAR_2)
{
 uint64_t VAR_3 = VAR_0;
 int VAR_4 = 0;
 int VAR_5 = 1;

 VAR_3 /= 1024;
 while (VAR_3) {
  VAR_4++;
  VAR_3 /= 1024;
  VAR_5 *= 1024;
 }

 *VAR_1 = (float)(VAR_0);
 if (VAR_2) {
  *VAR_1 *= 4;
  if (*VAR_1/VAR_5 > 1024) {
   VAR_4++;
   VAR_5 *= 1024;
  }
 }
 *VAR_1 /= VAR_5;

 if (VAR_2) {
  switch (VAR_4) {
   case 0:
    return ("B");
   case 1:
    return ("KB");
   case 2:
    return ("MB");
   case 3:
    return ("GB");
   case 4:
    return ("TB");
   case 5:
    return ("PB");
   case 6:
    return ("EB");
   default:
    return ("");
  }
 } else {
  switch (VAR_4) {
   case 0:
    return ("");
   case 1:
    return ("K");
   case 2:
    return ("M");
   case 3:
    return ("G");
   case 4:
    return ("T");
   case 5:
    return ("P");
   case 6:
    return ("E");
   default:
    return ("");
  }
 }
 return ("");
}
