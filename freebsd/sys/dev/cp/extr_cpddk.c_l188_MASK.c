
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ l100; scalar_t__ l120; scalar_t__ l110; scalar_t__ l119; scalar_t__ l108; scalar_t__ l117; scalar_t__ l89; scalar_t__ l101; scalar_t__ l103; scalar_t__ l121; scalar_t__ l112; scalar_t__ l47; } ;
struct TYPE_9__ {int l100; int l120; int l110; int l119; int l108; int l117; int l89; int l101; int l103; int l121; int l112; int l47; } ;
struct TYPE_11__ {int l55; int t; int l105; unsigned int l109; scalar_t__ l161; TYPE_3__ n; TYPE_2__ l29; TYPE_3__* l118; scalar_t__ l38; TYPE_1__* d; scalar_t__ l58; int l46; int l31; } ;
typedef TYPE_4__ e ;
struct TYPE_8__ {scalar_t__ l30; } ;


 short FUNC_0 (TYPE_4__*,int) ;
 unsigned char FUNC_1 (TYPE_4__*,int,int) ;

__attribute__((used)) static void FUNC_2(e*VAR_0){unsigned char VAR_1,
VAR_2;unsigned VAR_3,VAR_4,VAR_5,VAR_6,VAR_7,VAR_8;++VAR_0->l55;{if(!(!VAR_0->l161&&VAR_0
->l55<=1))goto l523;return;l523:;}VAR_0->t=0;VAR_1=FUNC_1(VAR_0,6,255);VAR_8=0;{if(
!(VAR_1&2))goto l707;VAR_0->t|=64;l707:;}{if(!(VAR_1&8))goto l708;VAR_0->t|=8;
l708:;}VAR_3=(((short)(FUNC_0(VAR_0,0))<<8)|(FUNC_0(VAR_0,1)));VAR_4=0;VAR_5=0;VAR_6=0;{
if(!(!VAR_0->l31))goto l519;{VAR_2=FUNC_0(VAR_0,30);{if(!(!VAR_0->l46&&(VAR_1&128)))goto
l711;VAR_0->t|=256;l711:;}{if(!(!VAR_0->l46&&(VAR_1&64)))goto l712;VAR_0->t|=512;
l712:;}{if(!(VAR_1&4))goto l713;VAR_0->t|=2;l713:;}{if(!(VAR_2&4))goto l717;
{VAR_0->t|=32;++VAR_8;}l717:;}{if(!((!VAR_0->l46&&(VAR_2&2))||(VAR_0->l58&&(VAR_2&1))))goto
l511;{VAR_0->t|=1024;++VAR_8;}l511:;}VAR_4=(((short)(FUNC_0(VAR_0,2))<<4&4032)|(
FUNC_0(VAR_0,4))>>2);VAR_5=(((short)(FUNC_0(VAR_0,2))<<8&768)|(FUNC_0(VAR_0,3)));VAR_6=(((
short)(FUNC_0(VAR_0,4))<<8&768)|(FUNC_0(VAR_0,5)));{if(!((VAR_0->d->l30||VAR_0->l38)&&(VAR_1&
16)))goto l719;++VAR_0->n.l120;l719:;}}l519:;}{if(!(VAR_0->t&64))goto l510;VAR_0
->t=64;goto l723;l510:;{if(!(VAR_0->t&8))goto l499;VAR_0->t=8;goto l725;l499:
;{if(!(VAR_0->t&32))goto l498;VAR_0->t=32;goto l727;l498:;{if(!(VAR_0->t&1024))goto
l493;VAR_0->t&=~(512|256);l493:;}l727:;}l725:;}l723:;}{if(!(!VAR_0->t))goto
l470;VAR_0->t=1;l470:;}VAR_0->n.l47+=VAR_3;VAR_0->n.l112+=VAR_4;{if(!(VAR_0->l58))goto
l732;{VAR_0->n.l121+=VAR_5;VAR_0->n.l103+=VAR_6;}l732:;}VAR_7=VAR_4;{if(!(VAR_0->l58))goto
l748;VAR_7+=VAR_5;l748:;}{if(!(VAR_1&(8|2)))goto l744;++VAR_0->n.l101;goto l374
;l744:;{{if(!(VAR_3))goto l746;++VAR_0->n.l89;l746:;}{if(!(VAR_7||VAR_8||((VAR_0
->d->l30||VAR_0->l38)&&(VAR_1&16))))goto l747;++VAR_0->n.l117;l747:;}{if(!(VAR_8
))goto l753;++VAR_0->n.l110;l753:;}{if(!(VAR_3>=2048||VAR_7>=832))goto l749;
++VAR_0->n.l119;goto l754;l749:;{{if(!(VAR_7>1))goto l756;++VAR_0->n.l108;l756
:;}++VAR_0->l105;VAR_0->l109+=VAR_3+VAR_7;}l754:;}}l374:;}{if(!(VAR_0->l55%60==0))goto
l757;{{if(!(VAR_0->l109>VAR_0->l105*2048/1000))goto l773;++VAR_0->n.l100;l773:;}VAR_0
->l105=0;VAR_0->l109=0;}l757:;}{if(!(VAR_0->l55>15*60))goto l769;{int VAR_9;{VAR_9=47
;l384:if(!(VAR_9>0))goto l772;goto l776;l771:--VAR_9;goto l384;l776:VAR_0->l118[VAR_9
]=VAR_0->l118[VAR_9-1];goto l771;l772:;}VAR_0->l118[0]=VAR_0->n;VAR_0->l29.l47+=VAR_0->n.l47;
VAR_0->l29.l112+=VAR_0->n.l112;VAR_0->l29.l121+=VAR_0->n.l121;VAR_0->l29.l103+=VAR_0->n.l103;
VAR_0->l29.l101+=VAR_0->n.l101;VAR_0->l29.l89+=VAR_0->n.l89;VAR_0->l29.l117+=VAR_0->n.l117;VAR_0
->l29.l108+=VAR_0->n.l108;VAR_0->l29.l119+=VAR_0->n.l119;VAR_0->l29.l110+=VAR_0->n.l110;VAR_0
->l29.l120+=VAR_0->n.l120;VAR_0->l29.l100+=VAR_0->n.l100;VAR_0->n.l47=0;VAR_0->n.l112=0;VAR_0
->n.l121=0;VAR_0->n.l103=0;VAR_0->n.l101=0;VAR_0->n.l89=0;VAR_0->n.l117=0;VAR_0->n.l108=0
;VAR_0->n.l119=0;VAR_0->n.l110=0;VAR_0->n.l120=0;VAR_0->n.l100=0;VAR_0->l161+=VAR_0->l55;VAR_0->
l55=0;}l769:;}}
