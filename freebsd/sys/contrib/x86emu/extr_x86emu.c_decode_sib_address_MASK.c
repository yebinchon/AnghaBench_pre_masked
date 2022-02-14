
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int R_EAX; int R_ECX; int R_EDX; int R_EBX; int R_ESP; int R_EBP; int R_ESI; int R_EDI; int mode; } ;
struct x86emu {TYPE_1__ x86; } ;


 int VAR_0 ;
 int FUNC_0 (struct x86emu*) ;

__attribute__((used)) static uint32_t
FUNC_1(struct x86emu *VAR_1, int VAR_2, int VAR_3)
{
 uint32_t VAR_4 = 0, VAR_5 = 0, VAR_6 = 1;

 switch (VAR_2 & 0x07) {
 case 0:
  VAR_4 = VAR_1->x86.R_EAX;
  break;
 case 1:
  VAR_4 = VAR_1->x86.R_ECX;

  break;
 case 2:
  VAR_4 = VAR_1->x86.R_EDX;
  break;
 case 3:
  VAR_4 = VAR_1->x86.R_EBX;
  break;
 case 4:
  VAR_4 = VAR_1->x86.R_ESP;
  VAR_1->x86.mode |= VAR_0;
  break;
 case 5:
  if (VAR_3 == 0) {
   VAR_4 = FUNC_0(VAR_1);
  } else {
   VAR_4 = VAR_1->x86.R_EBP;
   VAR_1->x86.mode |= VAR_0;
  }
  break;
 case 6:
  VAR_4 = VAR_1->x86.R_ESI;
  break;
 case 7:
  VAR_4 = VAR_1->x86.R_EDI;
  break;
 }
 switch ((VAR_2 >> 3) & 0x07) {
 case 0:
  VAR_5 = VAR_1->x86.R_EAX;
  break;
 case 1:
  VAR_5 = VAR_1->x86.R_ECX;
  break;
 case 2:
  VAR_5 = VAR_1->x86.R_EDX;
  break;
 case 3:
  VAR_5 = VAR_1->x86.R_EBX;
  break;
 case 4:
  VAR_5 = 0;
  break;
 case 5:
  VAR_5 = VAR_1->x86.R_EBP;
  break;
 case 6:
  VAR_5 = VAR_1->x86.R_ESI;
  break;
 case 7:
  VAR_5 = VAR_1->x86.R_EDI;
  break;
 }
 VAR_6 = 1 << ((VAR_2 >> 6) & 0x03);
 return VAR_4 + (VAR_5 * VAR_6);
}
