
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int f; int v; scalar_t__ x; TYPE_3__* d; } ;
typedef TYPE_2__ e ;
struct TYPE_7__ {int f; TYPE_1__* k; } ;
struct TYPE_5__ {scalar_t__ x; } ;


 int FUNC_0 (TYPE_3__*,int) ;

int FUNC_1(e*VAR_0){{if(!(VAR_0->f==0))goto l315;return 0;l315:;}{if(!(
VAR_0->d->f==2))goto l311;return(FUNC_0(VAR_0->d,9)&2)==0;l311:;}{if(!(VAR_0->f==6))goto
l308;{ * (volatile unsigned long* )((VAR_0->d->k+VAR_0->v)->x+4);return( * (
volatile unsigned long* )((VAR_0->d->k+VAR_0->v)->x+4)&2097152)==0;}goto l303
;l308:;{ * (volatile unsigned long* )((VAR_0)->x+4);return( * (volatile
unsigned long* )((VAR_0)->x+4)&2097152)==0;}l303:;}}
