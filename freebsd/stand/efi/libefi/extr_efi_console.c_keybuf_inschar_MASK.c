
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ScanCode; char UnicodeChar; } ;
typedef TYPE_1__ EFI_INPUT_KEY ;


 char VAR_0 ;






 char* VAR_1 ;

__attribute__((used)) static void
FUNC_0(EFI_INPUT_KEY *VAR_2)
{

 switch (VAR_2->ScanCode) {
 case 128:
  VAR_1[0] = 0x1b;
  VAR_1[1] = '[';
  VAR_1[2] = 'A';
  break;
 case 132:
  VAR_1[0] = 0x1b;
  VAR_1[1] = '[';
  VAR_1[2] = 'B';
  break;
 case 129:
  VAR_1[0] = 0x1b;
  VAR_1[1] = '[';
  VAR_1[2] = 'C';
  break;
 case 130:
  VAR_1[0] = 0x1b;
  VAR_1[1] = '[';
  VAR_1[2] = 'D';
  break;
 case 133:
  VAR_1[0] = VAR_0;
  break;
 case 131:
  VAR_1[0] = 0x1b;
  break;
 default:
  VAR_1[0] = VAR_2->UnicodeChar;
  break;
 }
}
