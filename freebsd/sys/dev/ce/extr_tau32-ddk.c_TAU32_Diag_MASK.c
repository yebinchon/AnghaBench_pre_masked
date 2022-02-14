
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned long GEt0d; int h2LrH3; TYPE_1__* fV7o35; } ;
typedef TYPE_2__ kWMzp1 ;
struct TYPE_4__ {unsigned long UyRVB4; } ;


 int FUNC_0 (unsigned long volatile*,int,unsigned long) ;
 int FUNC_1 (unsigned long volatile*,unsigned long) ;
 int FUNC_2 (unsigned long volatile*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

unsigned long __attribute__((cdecl))FUNC_5
(kWMzp1*VAR_0,unsigned VAR_1,unsigned long VAR_2){volatile unsigned
long*VAR_3;unsigned long VAR_4=0;FUNC_3(&VAR_0->h2LrH3);VAR_3=&
VAR_0->fV7o35->UyRVB4;switch(VAR_1){case 01:((VAR_3)[-1])=0;((VAR_3
)[0])=0xFFFF;((VAR_3)[-1])=224;((VAR_3)[-01])=0;case 0:VAR_4=(((
VAR_3)[0])&0xFFFF)|(((VAR_3)[-0x1])<<16);break;case 02:((VAR_3)[-1])=
VAR_2>>16;((VAR_3)[0])=VAR_2&0xFFFF;VAR_4=((VAR_3)[0]);break;case 0x3
:((VAR_3)[0])=VAR_2&0xFFFF;((VAR_3)[-1])=VAR_2>>16;VAR_4=((VAR_3)[0]
);break;case 0x5:FUNC_0(VAR_3,(VAR_2>>16)&0xFF,(VAR_2>>0x8)&0xFF);
break;case 0x6:FUNC_0(VAR_3,(VAR_2>>16)&0xFF,(VAR_2>>8)&0xFF);case 04
:VAR_4=FUNC_2(VAR_3,(VAR_2>>16)&0xFF)<<010;break;case 0x7:FUNC_0(
VAR_3,(VAR_2>>16)&0xFF,(VAR_2>>8)&0xFF);VAR_4=FUNC_2(VAR_3,0x5);
break;case 010:FUNC_0(VAR_3,(VAR_2>>16)&0xFF,(VAR_2>>8)&0xFF);FUNC_0(
VAR_3,0x5,VAR_2&0xFF);break;case 011:FUNC_0(VAR_3,(VAR_2>>16)&0xFF,(
VAR_2>>010)&0xFF);VAR_4=FUNC_2(VAR_3,05);FUNC_0(VAR_3,(VAR_2>>16)&
0xFF,(VAR_2>>0x8)&0xFF);FUNC_0(VAR_3,0x5,VAR_2&0xFF);break;case 012:
FUNC_0(VAR_3,(VAR_2>>16)&0xFF,(VAR_2>>8)&0xFF);FUNC_0(VAR_3,0x5,VAR_2
&0xFF);FUNC_0(VAR_3,(VAR_2>>16)&0xFF,(VAR_2>>0x8)&0xFF);VAR_4=FUNC_2
(VAR_3,05);break;case 013:FUNC_0(VAR_3,(VAR_2>>16)&0xFF,(VAR_2>>8)&
0xFF);FUNC_0(VAR_3,5,VAR_2&0xFF);FUNC_0(VAR_3,(VAR_2>>16)&0xFF,(VAR_2
>>0x8)&0xFF);VAR_4=FUNC_2(VAR_3,5);FUNC_0(VAR_3,(VAR_2>>16)&0xFF,(
VAR_2>>0x8)&0xFF);FUNC_0(VAR_3,05,VAR_4&VAR_2&0xFF);break;case 014:{
if(!(VAR_2>2097151999ul))goto bZsbt1;VAR_4=~0ul;goto NQD_Y1;bZsbt1:;
{unsigned long VAR_5=VAR_2;__asm __volatile("mul %2;"
"add $2147483648, %0;" "adc $0, %1":"=a"(VAR_5),"=d"(VAR_4):"r"(
01422335136ul),"0"(VAR_5));VAR_4+=VAR_2+VAR_2;}NQD_Y1:;}FUNC_1(
VAR_3,VAR_4);FUNC_0(VAR_3,0,VAR_0->GEt0d=(VAR_0->GEt0d&~043)|32);
break;}FUNC_4(&VAR_0->h2LrH3);return VAR_4;}
