
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int register_t ;


 int VAR_0 ;

int
FUNC_0(void *VAR_1, u_int VAR_2, register_t VAR_3, register_t *VAR_4,
    u_int (*VAR_5)(void*, int),
    u_int (*VAR_6)(void*, VAR_7, u_int*))
{
 u_int VAR_8, VAR_9, VAR_10 = 0;
 int VAR_11 = 0;

 switch ((VAR_2 >> 24) & 0xf) {
 case 0x2:
 case 0x0:
  VAR_8 = VAR_5(VAR_1, (VAR_2 >> 16) & 0xf);
  if (((VAR_2 >> 16) & 0xf) == 15)
   VAR_8 += 8;
  if (VAR_2 & 0x0200000) {
   VAR_10 = (VAR_2 >> 7) & 0x1e;
   VAR_10 = (VAR_2 & 0xff) << (32 - VAR_10) |
       (VAR_2 & 0xff) >> VAR_10;
  } else {

   VAR_10 = VAR_5(VAR_1, VAR_2 & 0x0f);
   if ((VAR_2 & 0x0000ff0) != 0x00000000) {
    if (VAR_2 & 0x10)
     VAR_9 = VAR_5(VAR_1,
         (VAR_2 >> 8) & 0xf);
    else
     VAR_9 = (VAR_2 >> 7) & 0x1f;
    switch ((VAR_2 >> 5) & 3) {
    case 0:

     VAR_10 = VAR_10 << VAR_9;
     break;
    case 1:

     VAR_10 = VAR_10 >> VAR_9;
     break;
    default:
     break;
    }

   }
   *VAR_4 = VAR_8 + VAR_10;
   return (0);

  }

 case 0xa:
 case 0xb:
  VAR_8 = ((VAR_2 << 2) & 0x03ffffff);
  if (VAR_8 & 0x02000000)
   VAR_8 |= 0xfc000000;
  *VAR_4 = (VAR_3 + 8 + VAR_8);
  return (0);
 case 0x7:
  VAR_8 = VAR_5(VAR_1, VAR_2 & 0xf);
  VAR_8 = VAR_3 + 8 + (VAR_8 << 2);
  VAR_11 = VAR_6(VAR_1, VAR_8, &VAR_8);
  *VAR_4 = VAR_8;
  return (VAR_11);
 case 0x1:
  *VAR_4 = VAR_5(VAR_1, VAR_2 & 0xf);
  return (0);
 case 0x4:
 case 0x5:
  VAR_8 = VAR_5(VAR_1, (VAR_2 >> 16) & 0xf);

  if (VAR_2 & (1 << 24))
   VAR_10 = VAR_2 & 0xfff;
  if (VAR_2 & 0x00800000)
   VAR_8 += VAR_10;
  else
   VAR_8 -= VAR_10;
  VAR_11 = VAR_6(VAR_1, VAR_8, &VAR_8);
  *VAR_4 = VAR_8;

  return (VAR_11);
 case 0x8:
 case 0x9:
  VAR_8 = VAR_5(VAR_1, (VAR_2 >> 16) & 0xf);
  VAR_9 = (VAR_2 & 0x5555) + ((VAR_2 >> 1) & 0x5555);
  VAR_9 = (VAR_9 & 0x3333) + ((VAR_9 >> 2) & 0x3333);
  VAR_9 = (VAR_9 + (VAR_9 >> 4)) & 0x0f0f;
  VAR_9 = (VAR_9 + (VAR_9 >> 8)) & 0x001f;
  switch ((VAR_2 >> 23) & 0x3) {
  case 0x0:
   VAR_8 = VAR_8 - 0;
   break;
  case 0x1:
   VAR_8 = VAR_8 + 0 + ((VAR_9 - 1) << 2);
   break;
  case 0x2:
   VAR_8 = VAR_8 - 4;
   break;
  case 0x3:
   VAR_8 = VAR_8 + 4 + ((VAR_9 - 1) << 2);
   break;
  }
  VAR_11 = VAR_6(VAR_1, VAR_8, &VAR_8);
  *VAR_4 = VAR_8;

  return (VAR_11);
 default:
  return (VAR_0);
 }
}
