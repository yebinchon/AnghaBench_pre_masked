
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdsp {int control_register; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct hdsp*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct hdsp *VAR_7, int VAR_8)
{
 VAR_7->control_register &= ~VAR_0;
 switch (VAR_8) {
 case 133:
  VAR_7->control_register &= ~VAR_0;
  break;
 case 132:
  VAR_7->control_register |= VAR_1;
  break;
 case 131:
  VAR_7->control_register |= VAR_2;
  break;
 case 129:
  VAR_7->control_register |= VAR_4;
  break;
 case 128:
  VAR_7->control_register |= VAR_5;
  break;
 case 130:
  VAR_7->control_register |= VAR_3;
  break;
 default:
  return -1;
 }
 FUNC_0(VAR_7, VAR_6, VAR_7->control_register);
 return 0;
}
