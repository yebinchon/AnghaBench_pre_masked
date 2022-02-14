
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {unsigned char* g; unsigned char p; int l125; int l137; int l83; int f; int l80; TYPE_2__* k; int l39; scalar_t__ l116; scalar_t__ l174; scalar_t__ l30; } ;
typedef TYPE_1__ s ;
struct TYPE_9__ {int f; TYPE_1__* d; } ;
typedef TYPE_2__ e ;


 int FUNC_0 (TYPE_2__*) ;
 unsigned short FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_1__*,int ) ;

unsigned short FUNC_5(s*VAR_0,int VAR_1,
unsigned char*VAR_2){unsigned char VAR_3;unsigned short VAR_4;e*VAR_5;VAR_0->g=VAR_2;VAR_0->
p=(unsigned char)VAR_1;VAR_0->l30=0;VAR_0->l174=0; * (volatile unsigned long* )((
VAR_0)->g+8)=262144; * (volatile unsigned short* )((VAR_0)->g+1032)=65535; * (
volatile unsigned short* )((VAR_0)->g+1024)=0;VAR_0->l125=4;VAR_0->l116=0;VAR_0->l137
=192;VAR_0->l83=38;switch(FUNC_2(VAR_0)){case 0:VAR_0->l137|=32;;{if(!((VAR_4=FUNC_1(VAR_0
))))goto l373;return VAR_4;l373:;}VAR_0->l83=30;break;case 1:VAR_3=FUNC_4(VAR_0,0);{
if(!((VAR_3&56)!=40&&(VAR_3&128)==(FUNC_4(VAR_0,0)&128)))goto l359;{return 65535;}
l359:;}break;case 2:case 3:default:return 65535;break;}VAR_3=FUNC_4(VAR_0,0);
switch(VAR_3&56){default:VAR_0->f=0;FUNC_3(VAR_0->l39,"\x55\x6e\x6b\x6e\x6f\x77"
"\x6e");break;case 56:{if(!((VAR_3&64)!=(FUNC_4(VAR_0,0)&64)))goto l375;{VAR_0->f=12
;FUNC_3(VAR_0->l39,"\x54\x61\x75\x2d\x50\x43\x49\x2d\x4c");}goto l376;
l375:;{if(!(VAR_3&64))goto l397;{VAR_0->f=6;FUNC_3(VAR_0->l39,"\x54\x61\x75\x2d"
"\x50\x43\x49\x34");}goto l333;l397:;{VAR_0->f=1;FUNC_3(VAR_0->l39,"\x54\x61"
"\x75\x2d\x50\x43\x49");}l333:;}l376:;}break;case 8:{if(!(VAR_3&64))goto
l399;{VAR_0->f=10;FUNC_3(VAR_0->l39,"\x54\x61\x75\x2d\x50\x43\x49\x34\x2d\x45"
"\x31\x2f\x58");}goto l400;l399:;{VAR_0->f=5;FUNC_3(VAR_0->l39,"\x54\x61\x75"
"\x2d\x50\x43\x49\x2d\x45\x31");}l400:;}break;case 16:{if(!(VAR_3&64))goto
l401;{VAR_0->f=7;FUNC_3(VAR_0->l39,"\x54\x61\x75\x2d\x50\x43\x49\x34\x2d\x47"
"\x37\x30\x33\x2f\x58");}goto l330;l401:;{VAR_0->f=4;FUNC_3(VAR_0->l39,"\x54"
"\x61\x75\x2d\x50\x43\x49\x2d\x47\x37\x30\x33");}l330:;}break;case 24
:{if(!(VAR_3&64))goto l403;{VAR_0->f=10;FUNC_3(VAR_0->l39,"\x54\x61\x75\x2d\x50"
"\x43\x49\x34\x2d\x32\x45\x31\x2f\x58");}goto l404;l403:;{VAR_0->f=9;
FUNC_3(VAR_0->l39,"\x54\x61\x75\x2d\x50\x43\x49\x2d\x32\x45\x31");}l404:;
}break;case 32:VAR_0->f=11;FUNC_3(VAR_0->l39,"\x54\x61\x75\x2d\x50\x43\x49"
"\x2d\x34\x45\x31");break;case 40:VAR_0->f=2;FUNC_3(VAR_0->l39,"\x54\x61\x75"
"\x2d\x50\x43\x49\x2d\x45\x33");break;case 48:VAR_0->f=3;FUNC_3(VAR_0->l39,""
"\x54\x61\x75\x2d\x50\x43\x49\x2d\x48\x53\x53\x49");break;}{if(!(VAR_0->f
==2))goto l405;{switch(VAR_3&6){default:break;case 6:VAR_0->k->f=4;VAR_0->l80=
34368000;break;case 4:FUNC_3(VAR_0->l39,"\x54\x61\x75\x2d\x50\x43\x49\x2d"
"\x54\x33");VAR_0->k->f=7;VAR_0->l80=44736000;break;case 2:FUNC_3(VAR_0->l39,""
"\x54\x61\x75\x2d\x50\x43\x49\x2d\x53\x54\x53\x2d\x31");VAR_0->k->f=8;VAR_0->
l80=51840000;break;}}goto l406;l405:;{switch(VAR_3&6){default:break;
case 6:VAR_0->l80=32768000;break;case 4:VAR_0->l80=16384000;break;}}l406:;}{VAR_5
=VAR_0->k;l428:if(!(VAR_5<VAR_0->k+4))goto l430;goto l431;l429:++VAR_5;goto l428;l431
:{VAR_5->d=VAR_0;FUNC_0(VAR_5);}goto l429;l430:;}return 0;}
