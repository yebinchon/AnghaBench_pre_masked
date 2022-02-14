
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {unsigned long long ust; void* msc; } ;
typedef TYPE_1__ ustmsc_t ;
struct TYPE_9__ {int lock; } ;
typedef TYPE_2__ lithium_t ;
struct TYPE_10__ {TYPE_4__* desc; TYPE_2__* lith; } ;
typedef TYPE_3__ dma_chan_t ;
struct TYPE_11__ {int ustreg; int mscreg; } ;
typedef TYPE_4__ dma_chan_desc_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(dma_chan_t *VAR_2, ustmsc_t *VAR_3)
{
 lithium_t *VAR_4 = VAR_2->lith;
 const dma_chan_desc_t *VAR_5 = VAR_2->desc;
 unsigned long VAR_6, VAR_7, VAR_8, VAR_9;

 FUNC_1(&VAR_4->lock);
 {





  do {
   VAR_7 = FUNC_0(VAR_4, VAR_0);
   VAR_6 = FUNC_0(VAR_4, VAR_1);







   VAR_3->msc = FUNC_0(VAR_4, VAR_5->mscreg);
   VAR_9 = FUNC_0(VAR_4, VAR_5->ustreg);

   VAR_8 = FUNC_0(VAR_4, VAR_0);
  } while (VAR_7 != VAR_8);
 }
 FUNC_2(&VAR_4->lock);
 VAR_3->ust = ((unsigned long long) VAR_7 << 32 | VAR_9);
}
