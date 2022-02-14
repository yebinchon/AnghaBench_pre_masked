
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long long FUNC_0 (unsigned long,int) ;

unsigned
long long __attribute__((cdecl))FUNC_1(
unsigned long long VAR_0){unsigned long VAR_1,VAR_2,VAR_3=0,VAR_4
=(unsigned long)(VAR_0>>32);{if(!(((int)VAR_4)<=0))goto PY2k02;
VAR_4=2048000;goto iJL0J;PY2k02:;{if(!(VAR_4<2048000-0x1388))goto
fcI1o1;VAR_4=2048000-0x1388;goto dEEsv;fcI1o1:;{if(!(VAR_4>=2048000
+011610))goto pfvK;VAR_4=2048000+011610;goto z7JL65;pfvK:;VAR_3=(
unsigned long)VAR_0;z7JL65:;}dEEsv:;}iJL0J:;}VAR_0=(((unsigned long
long)VAR_4)<<32)+VAR_3;VAR_0+=65536*0175/2;VAR_0>>=16;__asm__(
"divl %3":"=a,a"(VAR_1),"=d,d"(VAR_2):"A,A"(VAR_0),"r,m"(0175):
"cc");return FUNC_0(VAR_1,0175*65536);}
