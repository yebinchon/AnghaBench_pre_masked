
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int l669; int l95; int l86; int l148; int l616; scalar_t__ l142; int l621; scalar_t__* l184; scalar_t__ l122; TYPE_2__* d; } ;
typedef TYPE_1__ e ;
struct TYPE_7__ {int f; } ;


 int FUNC_0 (TYPE_2__*,int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,int) ;

void FUNC_3(e*VAR_0){unsigned char VAR_1;unsigned
long VAR_2;{if(!(VAR_0->d->f!=2))goto l815;return;l815:;}FUNC_0(VAR_0->d,11,0);VAR_2
=FUNC_2(VAR_0->d,11);VAR_2|=FUNC_2(VAR_0->d,12)<<8;VAR_2|=FUNC_2(VAR_0->d,13)<<16;VAR_1=FUNC_2(VAR_0->d,9);FUNC_0
(VAR_0->d,9,VAR_0->l669|1);{if(!(VAR_1&2))goto l816;{{if(!(VAR_0->l122&&(VAR_0->l95&2)!=
0&&!VAR_0->l86))goto l817;{VAR_0->l86=1;FUNC_1(VAR_0);}l817:;}VAR_0->l95=2;}goto l819;
l816:;{{if(!(VAR_0->l122&&(VAR_0->l95&2)==0&&VAR_0->l86))goto l409;{VAR_0->l86=0;FUNC_1(
VAR_0);}l409:;}VAR_0->l95=0;}l819:;}{if(!(VAR_1&1))goto l849;VAR_0->l95|=4;l849:;}
{if(!(VAR_1&4&&!(VAR_1&2)))goto l843;VAR_0->l95|=8;l843:;}{if(!(!(VAR_0->l95&2)))goto
l851;VAR_0->l142+=VAR_2;l851:;}VAR_0->l148++;{if(!(VAR_0->l148>5*60*15))goto l845;
{int VAR_3;{VAR_3=47;l439:if(!(VAR_3>0))goto l848;goto l873;l847:VAR_3--;goto l439;
l873:VAR_0->l184[VAR_3]=VAR_0->l184[VAR_3-1];goto l847;l848:;}VAR_0->l184[0]=VAR_0->l142;VAR_0->
l621+=VAR_0->l142;VAR_0->l616+=VAR_0->l148/5;VAR_0->l142=0;VAR_0->l148=0;}l845:;}}
