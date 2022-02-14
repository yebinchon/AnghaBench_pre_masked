
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* prev; struct TYPE_5__* next; } ;
struct TYPE_4__ {int BSIZE; int BSHIFT; int nbufs; TYPE_2__ bufhead; } ;
typedef TYPE_1__ HTAB ;
typedef TYPE_2__ BUFHEAD ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;

void
FUNC_1(HTAB *VAR_1, int VAR_2)
{
 BUFHEAD *VAR_3;
 int VAR_4;

 VAR_3 = &(VAR_1->bufhead);
 VAR_4 = (VAR_2 + VAR_1->BSIZE - 1) >> VAR_1->BSHIFT;
 VAR_4 = FUNC_0(VAR_4, VAR_0);

 VAR_1->nbufs = VAR_4;
 VAR_3->next = VAR_3;
 VAR_3->prev = VAR_3;
}
