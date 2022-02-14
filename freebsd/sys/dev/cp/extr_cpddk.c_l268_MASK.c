
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t l104; size_t l51; size_t l45; int (* l65 ) (TYPE_2__*,int) ;int l261; scalar_t__ x; TYPE_1__* l42; int * l97; int l614; } ;
typedef TYPE_2__ e ;
struct TYPE_6__ {int t; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_2(e*VAR_0){unsigned long
VAR_1;int VAR_2=0;++VAR_0->l614;{l185:if(!((VAR_1= * (volatile unsigned long* )&
VAR_0->l97[VAR_0->l104])!=0))goto l332;{ * (volatile unsigned long* )&VAR_0->l97[
VAR_0->l104]=0;VAR_0->l104=++VAR_0->l104%128;{if(!(!(VAR_1&1073741824)))goto l331;{
;goto l185;}l331:;}{if(!(VAR_1&33554432))goto l329;{;{if(!(VAR_1&65536))goto
l326;++VAR_2;l326:;}goto l185;}l329:;};{if(!(VAR_0->l51!=VAR_0->l45&&( * (
volatile unsigned long* )&VAR_0->l42[VAR_0->l51].t&1073741824)))goto l322;
FUNC_0(VAR_0);l322:;}}goto l185;l332:;}{if(!(VAR_2))goto l316;{ * (volatile
unsigned long* )((VAR_0)->x+0)=16777216;++VAR_0->l261;{if(!(VAR_0->l65))goto l314
;VAR_0->l65(VAR_0,3);l314:;}}l316:;}}
