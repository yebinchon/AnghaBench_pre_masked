
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int*,int) ;

__attribute__((used)) static int FUNC_1(const u8 *VAR_0, size_t VAR_1,
                        u8 *VAR_2, size_t VAR_3,
                        size_t *VAR_4)
{
 size_t VAR_5, VAR_6;

 for (VAR_5 = 0, VAR_6 = 0; VAR_5 < VAR_1; VAR_5++) {
  u8 VAR_7 = VAR_0[VAR_5];
  if (VAR_6 >= VAR_3) {

   return -1;
  }
  if (VAR_7 <= 0x7F) {
   FUNC_0(VAR_2 + VAR_6, VAR_7);
   VAR_6 += 2;
  } else if (VAR_5 == VAR_1 - 1 ||
      VAR_6 >= VAR_3 - 1) {

   return -1;
  } else {
   u8 VAR_8 = VAR_0[++VAR_5];
   if ((VAR_7 & 0xE0) == 0xC0) {

    FUNC_0(VAR_2 + VAR_6,
          ((VAR_7 & 0x1F) << 6) | (VAR_8 & 0x3F));
    VAR_6 += 2;
   } else if (VAR_5 == VAR_1 - 1 ||
       VAR_6 >= VAR_3 - 1) {

    return -1;
   } else {

    u8 VAR_9 = VAR_0[++VAR_5];
    FUNC_0(VAR_2 + VAR_6,
          ((VAR_7 & 0xF) << 12) |
          ((VAR_8 & 0x3F) << 6) | (VAR_9 & 0x3F));
    VAR_6 += 2;
   }
  }
 }

 if (VAR_4)
  *VAR_4 = VAR_6 / 2;
 return 0;
}
