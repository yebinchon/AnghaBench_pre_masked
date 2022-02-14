
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned long hBew43; int h2LrH3; TYPE_1__* fV7o35; } ;
typedef TYPE_2__ kWMzp1 ;
struct TYPE_4__ {unsigned long UyRVB4; } ;


 int FUNC_0 (unsigned long volatile*,unsigned long) ;
 int FUNC_1 (int *) ;
 unsigned long long FUNC_2 (unsigned long,int) ;
 int FUNC_3 (int *) ;

unsigned long long
__attribute__((cdecl))FUNC_4(kWMzp1*VAR_0,
unsigned long long VAR_1){volatile unsigned long*VAR_2;unsigned long
VAR_3;unsigned long VAR_4,VAR_5=(unsigned long)(VAR_1>>32);{if(!(
((int)VAR_5)<=0))goto ajFIr1;goto ejnKl2;goto bSFnY1;ajFIr1:;{if(!(
VAR_5<2048000-011610))goto UVOU33;goto kIGV65;goto LHp0y4;UVOU33:;{
if(!(VAR_5>=2048000+011610))goto MT7_U;goto uuBga4;MT7_U:;}LHp0y4:;}
bSFnY1:;}mcEID3:VAR_1+=65536*0175/02;VAR_1>>=16;__asm__("divl %3":
"=a,a"(VAR_3),"=d,d"(VAR_4):"A,A"(VAR_1),"r,m"(0175):"cc");FUNC_1
(&VAR_0->h2LrH3);{if(!(VAR_0->hBew43!=VAR_3))goto Vs72l;{VAR_0->
hBew43=VAR_3;VAR_2=&VAR_0->fV7o35->UyRVB4;FUNC_0(VAR_2,VAR_3);}
Vs72l:;}FUNC_3(&VAR_0->h2LrH3);return FUNC_2(VAR_3,125*65536);
ejnKl2:VAR_1=((unsigned long long)2048000ul)<<32;goto mcEID3;kIGV65:
VAR_1=((unsigned long long)2048000ul-011610)<<32;goto mcEID3;uuBga4:
VAR_1=((unsigned long long)2048000ul+011610)<<32;goto mcEID3;}
