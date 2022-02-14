
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int l128 ;
struct TYPE_8__ {size_t l51; int l45; int* l132; int* l154; int p; int l620; int (* l187 ) (TYPE_3__*,void*,int) ;int l301; TYPE_2__* d; void** l79; TYPE_1__* l42; } ;
typedef TYPE_3__ e ;
struct TYPE_7__ {scalar_t__ g; } ;
struct TYPE_6__ {int w; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_3__*,void*,int) ;

__attribute__((used)) static void FUNC_2(e*VAR_0){int VAR_1=(( * (volatile unsigned long* )&VAR_0
->l42[VAR_0->l51].w)>>16&8191);void*VAR_2=VAR_0->l79[VAR_0->l51];;VAR_0->l51=++VAR_0->l51%4
;{if(!(VAR_0->l51!=VAR_0->l45))goto l343;{int VAR_3=(( * (VAR_0)->l132)-VAR_0->l154[0]
)/sizeof(l128);{if(!(VAR_3==(VAR_0->l51+4-1)%4))goto l342;{; * (volatile
unsigned long* )((VAR_0->d)->g+0)=1024<<VAR_0->p;FUNC_0(128,0);}l342:;}}l343:;}
{if(!(VAR_1>0))goto l339;{VAR_0->l620+=VAR_1;++VAR_0->l301;{if(!(VAR_0->l187))goto l337;VAR_0
->l187(VAR_0,VAR_2,VAR_1);l337:;}}l339:;}}
