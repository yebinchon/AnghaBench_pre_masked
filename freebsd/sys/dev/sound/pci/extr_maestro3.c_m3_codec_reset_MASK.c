
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct sc_info {int delay1; int delay2; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct sc_info*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct sc_info*,int ) ;
 int FUNC_4 (int *,struct sc_info*,int) ;
 int FUNC_5 (struct sc_info*,int ,int) ;

__attribute__((used)) static void
FUNC_6(struct sc_info *VAR_13)
{
 u_int16_t VAR_14, VAR_15;
 int VAR_16 = 0;

 FUNC_1(VAR_13);
 do {
  VAR_14 = FUNC_3(VAR_13, VAR_2);
  VAR_15 = VAR_14 | 0x10;


  VAR_14 = FUNC_3(VAR_13, VAR_7);
  FUNC_5(VAR_13, VAR_7, VAR_14 & ~VAR_10);
  VAR_14 = FUNC_3(VAR_13, VAR_9);
  FUNC_5(VAR_13, VAR_9, VAR_14 & ~VAR_0);
  VAR_14 = FUNC_3(VAR_13, VAR_8);
  FUNC_5(VAR_13, VAR_8, VAR_14 & ~VAR_12);

  FUNC_5(VAR_13, VAR_6, VAR_5);
  FUNC_0(20);

  FUNC_5(VAR_13, VAR_2, VAR_15 & ~VAR_4);
  FUNC_5(VAR_13, VAR_3, ~VAR_4);
  FUNC_5(VAR_13, VAR_1, 0);
  FUNC_5(VAR_13, VAR_2, VAR_15 | VAR_4);
  FUNC_0(VAR_13->delay1 * 1000);
  FUNC_5(VAR_13, VAR_1, VAR_4);
  FUNC_0(5);
  FUNC_5(VAR_13, VAR_6, VAR_5 |
      VAR_11);
  FUNC_5(VAR_13, VAR_3, ~0);
  FUNC_0(VAR_13->delay2 * 1000);


  VAR_14 = FUNC_4(((void*)0), VAR_13, 0x7c);
  if ((VAR_14 == 0) || (VAR_14 == 0xffff)) {
   VAR_16++;
   if (VAR_16 > 3) {
    FUNC_2(VAR_13->dev, "Codec reset failed\n");
    break;
   }
   FUNC_2(VAR_13->dev, "Codec reset retry\n");
  } else VAR_16 = 0;
 } while (VAR_16);
}
