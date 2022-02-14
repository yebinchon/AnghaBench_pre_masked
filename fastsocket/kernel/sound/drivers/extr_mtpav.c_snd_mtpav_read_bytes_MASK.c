
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mtpav {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mtpav*,int ) ;
 int FUNC_1 (struct mtpav*,int) ;
 int FUNC_2 (struct mtpav*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct mtpav *VAR_6)
{
 u8 VAR_7, VAR_8;
 u8 VAR_9;
 u8 VAR_10, VAR_11;
 int VAR_12;

 u8 VAR_13 = FUNC_0(VAR_6, VAR_5);



 if (!(VAR_13 & VAR_2))
  return;

 VAR_11 = FUNC_0(VAR_6, VAR_0);
 VAR_7 = VAR_11 & (VAR_1 ^ 0xff);
 VAR_8 = VAR_11 | VAR_1;

 do {

  VAR_9 = 0;
  for (VAR_12 = 0; VAR_12 < 4; VAR_12++) {
   FUNC_2(VAR_6, VAR_0, VAR_8);
   VAR_10 = FUNC_0(VAR_6, VAR_5);
   FUNC_2(VAR_6, VAR_0, VAR_7);

   VAR_10 &= VAR_3 | VAR_4;
   VAR_10 >>= 4;
   VAR_9 |= VAR_10 << (VAR_12 * 2);
  }

  FUNC_1(VAR_6, VAR_9);

  VAR_13 = FUNC_0(VAR_6, VAR_5);

 } while (VAR_13 & VAR_2);
}
