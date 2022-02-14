
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct emu_sc_info {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct emu_sc_info*,int ,int ,int) ;

void
FUNC_2(struct emu_sc_info *VAR_10, int VAR_11)
{
 uint32_t VAR_12;

 switch (VAR_11) {
 case 128:
  break;
 case 129:
  FUNC_0(VAR_10->dev, "AC3 mode does not work and disabled\n");
  return;
 default:
  return;
 }

 VAR_12 = VAR_4 | VAR_8 |
     VAR_3 | VAR_9 |
     VAR_7 | 0x00001200 | 0x00000000 |
     VAR_6 | VAR_5;

 VAR_11 = 128;

 FUNC_1(VAR_10, 0, VAR_0, VAR_12);
 FUNC_1(VAR_10, 0, VAR_1, VAR_12);
 FUNC_1(VAR_10, 0, VAR_2, VAR_12);
}
