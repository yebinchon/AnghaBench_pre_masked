
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int l28; unsigned long* l67; int (* l65 ) (TYPE_2__*,int) ;int l200; TYPE_1__* l32; scalar_t__ l102; int l635; } ;
typedef TYPE_2__ e ;
struct TYPE_6__ {int l88; int t; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_2(e*VAR_0){int VAR_1
=0;int VAR_2=0;{if(!(!VAR_0->l32))goto l363;return;l363:;}++VAR_0->l635;{if(!(
 * (volatile unsigned long* )&VAR_0->l32[(VAR_0->l28+64-1)%64].t&1073741824))goto
l362;VAR_1++;l362:;}{l360:if(!(( * (volatile unsigned long* )&VAR_0->l32[VAR_0
->l28].t&1073741824)&&( * (volatile unsigned long* )&VAR_0->l67[VAR_0->l28]!=
 * (volatile unsigned long* )((VAR_0)->l102))))goto l358;{FUNC_0(VAR_0);VAR_2++;
}goto l360;l358:;}{if(!(VAR_1))goto l356;{{if(!(VAR_2<64-1))goto l355;{
{l350:if(!(( * (volatile unsigned long* )&VAR_0->l67[VAR_0->l28]!= * (
volatile unsigned long* )((VAR_0)->l102))))goto l349;{ * (volatile
unsigned long* )&VAR_0->l32[VAR_0->l28].t=0; * (volatile unsigned long* )&VAR_0->
l32[VAR_0->l28].l88=VAR_0->l67[VAR_0->l28]; * (volatile unsigned long* )&VAR_0->l32[(
VAR_0->l28+64-1)%64].l88=VAR_0->l67[VAR_0->l28];VAR_0->l28=++VAR_0->l28%64;}goto l350;
l349:;}}l355:;}++VAR_0->l200;{if(!(VAR_0->l65))goto l346;VAR_0->l65(VAR_0,5);l346:;}}
l356:;}}
