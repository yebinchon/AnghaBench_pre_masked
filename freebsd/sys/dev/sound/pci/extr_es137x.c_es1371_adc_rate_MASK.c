
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct es_info {int dummy; } ;


 int FUNC_0 (struct es_info*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct es_info*,scalar_t__) ;
 int FUNC_2 (struct es_info*,scalar_t__,unsigned int) ;

__attribute__((used)) static unsigned int
FUNC_3(struct es_info *VAR_5, unsigned int VAR_6, int VAR_7)
{
   unsigned int VAR_8, VAR_9, VAR_10, VAR_11;

 FUNC_0(VAR_5);

   if (VAR_6 > 48000)
  VAR_6 = 48000;
   if (VAR_6 < 4000)
  VAR_6 = 4000;
   VAR_8 = VAR_6 / 3000;
   if ((1 << VAR_8) & ((1 << 15) | (1 << 13) | (1 << 11) | (1 << 9)))
  VAR_8--;
   VAR_9 = (21 * VAR_8 - 1) | 1;
   VAR_10 = ((48000UL << 15) / VAR_6) * VAR_8;
   VAR_11 = (48000UL << 15) / (VAR_10 / VAR_8);
   if (VAR_7) {
  if (VAR_6 >= 24000) {
     if (VAR_9 > 239)
    VAR_9 = 239;
     FUNC_2(VAR_5, VAR_0 + VAR_2,
       (((239 - VAR_9) >> 1) << 9) | (VAR_8 << 4));
  } else {
     if (VAR_9 > 119)
    VAR_9 = 119;
     FUNC_2(VAR_5, VAR_0 + VAR_2,
       0x8000 | (((119 - VAR_9) >> 1) << 9) | (VAR_8 << 4));
  }
  FUNC_2(VAR_5, VAR_0 + VAR_1,
      (FUNC_1(VAR_5, VAR_0 + VAR_1) &
      0x00ff) | ((VAR_10 >> 5) & 0xfc00));
  FUNC_2(VAR_5, VAR_0 + VAR_3,
      VAR_10 & 0x7fff);
  FUNC_2(VAR_5, VAR_4, VAR_8 << 8);
  FUNC_2(VAR_5, VAR_4 + 1, VAR_8 << 8);
 }
 return (VAR_11);
}
