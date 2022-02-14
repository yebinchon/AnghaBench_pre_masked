
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttyinq {int ti_linestart; int ti_end; TYPE_1__* ti_lastblock; } ;
struct TYPE_2__ {struct TYPE_2__* tib_prev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

void
FUNC_1(struct ttyinq *VAR_1)
{

 FUNC_0(VAR_1->ti_linestart < VAR_1->ti_end);

 if (--VAR_1->ti_end % VAR_0 == 0) {

  VAR_1->ti_lastblock = VAR_1->ti_lastblock->tib_prev;




  FUNC_0((VAR_1->ti_lastblock == ((void*)0)) == (VAR_1->ti_end == 0));
 }
}
