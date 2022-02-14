
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u16 ;
typedef int saltbuf ;


 int VAR_0 ;
 int FUNC_0 (size_t*,int ) ;
 int FUNC_1 (int,size_t const**,size_t*,size_t*) ;
 int FUNC_2 (size_t*,size_t const*,size_t) ;
 int FUNC_3 (size_t*,int ,int) ;

__attribute__((used)) static void FUNC_4(const u8 *VAR_1, size_t VAR_2, u16 VAR_3,
      const u8 *VAR_4,
      const u8 *VAR_5, size_t VAR_6,
      u8 *VAR_7, size_t *VAR_8)
{
 int VAR_9, VAR_10, VAR_11 = 1;
 u8 VAR_12[VAR_0], VAR_13[2], *VAR_14;
 const u8 *VAR_15[3];
 size_t VAR_16[3];

 FUNC_0(VAR_13, VAR_3);

 VAR_10 = 1 + VAR_2;
 if (VAR_10 & 0x0f) {
  VAR_10 = (VAR_10 & 0xf0) + 16;
 }
 FUNC_3(VAR_7, 0, VAR_10);
 VAR_7[0] = VAR_2;
 FUNC_2(VAR_7 + 1, VAR_1, VAR_2);

 *VAR_8 = VAR_10;

 VAR_14 = VAR_7;
 while (VAR_10 > 0) {


  VAR_15[0] = VAR_5;
  VAR_16[0] = VAR_6;
  if (VAR_11) {
   VAR_15[1] = VAR_4;
   VAR_16[1] = VAR_0;
   VAR_15[2] = VAR_13;
   VAR_16[2] = sizeof(VAR_13);
  } else {
   VAR_15[1] = VAR_14 - VAR_0;
   VAR_16[1] = VAR_0;
  }
  FUNC_1(VAR_11 ? 3 : 2, VAR_15, VAR_16, VAR_12);
  VAR_11 = 0;

  for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
   *VAR_14++ ^= VAR_12[VAR_9];

  VAR_10 -= VAR_0;
 }
}
