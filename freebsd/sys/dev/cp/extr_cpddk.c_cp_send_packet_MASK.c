
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {size_t l45; unsigned char** l151; scalar_t__* l75; scalar_t__* l154; size_t l51; int* l82; int p; TYPE_2__* d; TYPE_1__* l42; int l52; void** l79; } ;
typedef TYPE_3__ e ;
struct TYPE_7__ {scalar_t__ g; } ;
struct TYPE_6__ {int w; int t; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (unsigned char*,unsigned char*,int) ;
 int FUNC_2 (int,int ) ;

int FUNC_3(e*VAR_0,unsigned char*VAR_1
,int VAR_2,void*VAR_3){{if(!(!FUNC_0(VAR_0)))goto l714;return-1;l714
:;}{if(!(VAR_2<=0||VAR_2>1664-1))goto l706;return-2;l706:;}VAR_0->l79[VAR_0->l45]=VAR_3
;{if(!(VAR_1!=VAR_0->l151[VAR_0->l45]))goto l698;FUNC_1(VAR_0->l151[VAR_0->l45],VAR_1,VAR_2);
l698:;} * (volatile unsigned long* )&VAR_0->l42[VAR_0->l45].t=0;FUNC_2(128,0); *
(volatile unsigned long* )&VAR_0->l42[VAR_0->l45].w=2147483648UL|1073741824|VAR_2
<<16;{if(!(VAR_0->l52))goto l694; * (volatile unsigned long* )&VAR_0->l42[VAR_0->
l45].w|=536870912;l694:;}FUNC_2(128,0); * (volatile unsigned long* )&VAR_0
->l42[(VAR_0->l45+4-1)%4].w&=~1073741824;FUNC_2(128,0);;{if(!(( * (VAR_0)->l75)==
0))goto l645;{;( * (VAR_0)->l75)=VAR_0->l154[VAR_0->l51];FUNC_2(128,0);( * (VAR_0)->l82
)=524288;FUNC_2(128,0); * (volatile unsigned long* )((VAR_0->d)->g+0)=513;}
goto l650;l645:;{if(!(VAR_0->l51==VAR_0->l45))goto l648;{; * (volatile
unsigned long* )((VAR_0->d)->g+0)=1024<<VAR_0->p;}l648:;}l650:;}FUNC_2(128,0);VAR_0
->l45=(VAR_0->l45+1)%4;return 0;}
