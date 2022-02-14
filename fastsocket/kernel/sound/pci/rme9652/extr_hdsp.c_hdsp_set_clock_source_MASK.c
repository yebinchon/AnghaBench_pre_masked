
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdsp {int control_register; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hdsp*) ;
 int FUNC_1 (struct hdsp*,int,int) ;
 int FUNC_2 (struct hdsp*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct hdsp *VAR_2, int VAR_3)
{
 int VAR_4;
 switch (VAR_3) {
 case 137:
  if (FUNC_0(VAR_2) != 0) {
      if (!FUNC_1(VAR_2, FUNC_0(VAR_2), 1)) {
   VAR_2->control_register &= ~VAR_0;
   FUNC_2(VAR_2, VAR_1, VAR_2->control_register);
   return 0;
      }
  }
  return -1;
 case 133:
  VAR_4 = 32000;
  break;
 case 132:
  VAR_4 = 44100;
  break;
 case 131:
  VAR_4 = 48000;
  break;
 case 130:
  VAR_4 = 64000;
  break;
 case 129:
  VAR_4 = 88200;
  break;
 case 128:
  VAR_4 = 96000;
  break;
 case 136:
  VAR_4 = 128000;
  break;
 case 135:
  VAR_4 = 176400;
  break;
 case 134:
  VAR_4 = 192000;
  break;
 default:
  VAR_4 = 48000;
 }
 VAR_2->control_register |= VAR_0;
 FUNC_2(VAR_2, VAR_1, VAR_2->control_register);
 FUNC_1(VAR_2, VAR_4, 1);
 return 0;
}
