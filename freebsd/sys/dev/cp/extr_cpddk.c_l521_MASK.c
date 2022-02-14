
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ g; } ;
typedef TYPE_1__ s ;



__attribute__((used)) static unsigned short FUNC_0(
s*VAR_0){int VAR_1;unsigned short VAR_2;unsigned short VAR_3; * (volatile unsigned
short* )((VAR_0)->g+1024)=255;{VAR_1=255;l366:if(!(VAR_1>=0))goto l365;goto l370;
l371:VAR_1--;goto l366;l370:{ * (volatile unsigned short* )((VAR_0)->g+1028)=
VAR_1|32; * (volatile unsigned short* )((VAR_0)->g+1024)=255;VAR_2=( * (volatile
unsigned short* )((VAR_0)->g+1028))>>8;VAR_3=((VAR_1&(~32))|((~(VAR_1<<1))&32));{
if(!(VAR_2!=VAR_3))goto l372;{ * (volatile unsigned short* )((VAR_0)->g+1028)=
255;return(VAR_1|(VAR_2<<8));}l372:;}}goto l371;l365:;} * (volatile unsigned
short* )((VAR_0)->g+1028)=255;return 0;}
