
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ l100; scalar_t__ l120; scalar_t__ l110; scalar_t__ l119; scalar_t__ l108; scalar_t__ l117; scalar_t__ l89; scalar_t__ l101; scalar_t__ l103; scalar_t__ l121; scalar_t__ l112; scalar_t__ l47; } ;
struct TYPE_6__ {int l100; int l120; int l110; int l119; int l108; int l117; int l89; int l101; int l103; int l121; int l112; int l47; } ;
struct TYPE_7__ {int l55; int t; int l105; int l109; scalar_t__ l161; TYPE_3__ n; TYPE_1__ l29; TYPE_3__* l118; int l44; int d; } ;
typedef TYPE_2__ e ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ,unsigned char) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 unsigned char FUNC_3 (int ,int ) ;

void FUNC_4(e*VAR_0){unsigned char VAR_1;int VAR_2;++VAR_0
->l55;{if(!(!VAR_0->l161&&VAR_0->l55<=1))goto l386;return;l386:;}VAR_0->t=0;VAR_1=FUNC_3
(VAR_0->d,VAR_0->l44);FUNC_1(VAR_0->d,VAR_0->l44,VAR_1);VAR_2=FUNC_0(VAR_0);{if(!(VAR_1&1))goto
l775;++VAR_0->n.l47;l775:;}{if(!(!VAR_2))goto l777;VAR_0->t|=64;l777:;}{if(!(
VAR_1&2))goto l388;VAR_0->t|=4096;l388:;}{if(!(VAR_1&16))goto l789;VAR_0->t|=2048
;l789:;}{if(!(!VAR_0->t))goto l394;VAR_0->t=1;l394:;}{if(!(!VAR_2||(VAR_1&16)))goto
l791;++VAR_0->n.l101;goto l792;l791:;{{if(!(VAR_1&1))goto l793;++VAR_0->n.l89;
l793:;}++VAR_0->l105;{if(!(VAR_2&&(VAR_1&1)))goto l794;++VAR_0->l109;l794:;}}
l792:;}{if(!(VAR_0->l55/60==0))goto l795;{{if(!(VAR_0->l109*2>VAR_0->l105))goto
l796;++VAR_0->n.l100;l796:;}VAR_0->l105=0;VAR_0->l109=0;}l795:;}{if(!(VAR_0->l55>15*
60))goto l398;{int VAR_3;{VAR_3=47;l800:if(!(VAR_3>0))goto l812;goto l408;l811:--
VAR_3;goto l800;l408:VAR_0->l118[VAR_3]=VAR_0->l118[VAR_3-1];goto l811;l812:;}VAR_0->l118[0]=
VAR_0->n;VAR_0->l29.l47+=VAR_0->n.l47;VAR_0->l29.l112+=VAR_0->n.l112;VAR_0->l29.l121+=VAR_0->n.
l121;VAR_0->l29.l103+=VAR_0->n.l103;VAR_0->l29.l101+=VAR_0->n.l101;VAR_0->l29.l89+=VAR_0->n.
l89;VAR_0->l29.l117+=VAR_0->n.l117;VAR_0->l29.l108+=VAR_0->n.l108;VAR_0->l29.l119+=VAR_0->n.
l119;VAR_0->l29.l110+=VAR_0->n.l110;VAR_0->l29.l120+=VAR_0->n.l120;VAR_0->l29.l100+=VAR_0->n.
l100;FUNC_2(&VAR_0->n,0,sizeof(VAR_0->n));VAR_0->l161+=VAR_0->l55;VAR_0->l55=0;}l398:;}}
