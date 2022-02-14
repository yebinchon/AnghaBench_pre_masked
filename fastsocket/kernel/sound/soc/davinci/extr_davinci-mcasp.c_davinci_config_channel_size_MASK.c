
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct davinci_audio_dev {scalar_t__ base; } ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__,int ,int ) ;
 int FUNC_5 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_6(struct davinci_audio_dev *VAR_5,
           int VAR_6)
{
 u32 VAR_7 = 0;
 u32 VAR_8, VAR_9;

 switch (VAR_6) {
 case 128:
  VAR_7 = 0x03;
  VAR_9 = 6;
  VAR_8 = 0x000000ff;
  break;

 case 134:
  VAR_7 = 0x05;
  VAR_9 = 5;
  VAR_8 = 0x00000fff;
  break;

 case 133:
  VAR_7 = 0x07;
  VAR_9 = 4;
  VAR_8 = 0x0000ffff;
  break;

 case 132:
  VAR_7 = 0x09;
  VAR_9 = 3;
  VAR_8 = 0x000fffff;
  break;

 case 131:
  VAR_7 = 0x0B;
  VAR_9 = 2;
  VAR_8 = 0x00ffffff;
  break;

 case 130:
  VAR_7 = 0x0D;
  VAR_9 = 1;
  VAR_8 = 0x0fffffff;
  break;

 case 129:
  VAR_7 = 0x0F;
  VAR_9 = 0;
  VAR_8 = 0xffffffff;
  break;

 default:
  return -VAR_4;
 }

 FUNC_4(VAR_5->base + VAR_0,
     FUNC_1(VAR_7), FUNC_1(0x0F));
 FUNC_4(VAR_5->base + VAR_2,
     FUNC_3(VAR_7), FUNC_3(0x0F));
 FUNC_4(VAR_5->base + VAR_2, FUNC_2(VAR_9),
       FUNC_2(7));
 FUNC_4(VAR_5->base + VAR_0, FUNC_0(VAR_9),
       FUNC_0(7));
 FUNC_5(VAR_5->base + VAR_3, VAR_8);
 FUNC_5(VAR_5->base + VAR_1, VAR_8);

 return 0;
}
