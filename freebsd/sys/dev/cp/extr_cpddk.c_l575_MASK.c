
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {size_t l28; unsigned char** l136; int l571; unsigned long* l67; TYPE_1__* l32; int (* l171 ) (TYPE_2__*,unsigned char*,int) ;int l592; int (* l65 ) (TYPE_2__*,int) ;int l556; int l52; int l591; int l200; } ;
typedef TYPE_2__ e ;
struct TYPE_8__ {int l88; int t; } ;


 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,unsigned char*,int) ;

__attribute__((used)) static
void FUNC_4(e*VAR_0){int VAR_1=(( * (volatile unsigned long* )&VAR_0->l32[VAR_0->l28].t
)>>16&8191);unsigned char VAR_2;{if(!(VAR_1>0))goto l424;VAR_2=VAR_0->l136[VAR_0->
l28][--VAR_1];goto l852;l424:;VAR_2=0;l852:;};{if(!(VAR_2&64))goto l905;{++
VAR_0->l200;{if(!(VAR_0->l65))goto l881;VAR_0->l65(VAR_0,4);l881:;}}goto l875;l905:;{
if(!(!(VAR_2&128)))goto l876;{++VAR_0->l591;{if(!(VAR_0->l65))goto l908;VAR_0->l65
(VAR_0,1);l908:;}}goto l438;l876:;{if(!(!VAR_0->l52&&!(VAR_2&32)))goto l879;{
++VAR_0->l556;{if(!(VAR_0->l65))goto l450;VAR_0->l65(VAR_0,2);l450:;}}goto l903;l879:
;{VAR_0->l571+=VAR_1;++VAR_0->l592;{if(!(VAR_0->l171))goto l367;VAR_0->l171(VAR_0,VAR_0->l136[VAR_0->
l28],VAR_1);l367:;}}l903:;}l438:;}l875:;} * (volatile unsigned long* )&VAR_0
->l32[VAR_0->l28].t=0; * (volatile unsigned long* )&VAR_0->l32[VAR_0->l28].l88=VAR_0
->l67[VAR_0->l28]; * (volatile unsigned long* )&VAR_0->l32[(VAR_0->l28+64-1)%64].
l88=VAR_0->l67[VAR_0->l28];VAR_0->l28=++VAR_0->l28%64;}
