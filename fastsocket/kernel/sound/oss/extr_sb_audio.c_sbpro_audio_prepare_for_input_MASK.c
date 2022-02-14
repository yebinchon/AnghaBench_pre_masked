
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ dma16; scalar_t__ dma8; int bits; scalar_t__ model; int tconst; int channels; scalar_t__ trigger_bits; int lock; } ;
typedef TYPE_3__ sb_devc ;
struct TYPE_9__ {TYPE_2__* dmap_in; TYPE_1__* dmap_out; TYPE_3__* devc; } ;
struct TYPE_7__ {scalar_t__ dma; } ;
struct TYPE_6__ {scalar_t__ dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_5__** VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(int VAR_5, int VAR_6, int VAR_7)
{
 sb_devc *VAR_8 = VAR_4[VAR_5]->devc;
 unsigned long VAR_9;
 unsigned char VAR_10 = 0;

 if (VAR_8->dma16 >= 0 && VAR_8->dma16 != VAR_8->dma8)
  VAR_4[VAR_5]->dmap_out->dma = VAR_4[VAR_5]->dmap_in->dma =
   VAR_8->bits == 16 ? VAR_8->dma16 : VAR_8->dma8;

 if (VAR_8->model == VAR_2 || VAR_8->model == VAR_3)
  if (VAR_8->bits == VAR_0)
   VAR_10 = 0x04;

 FUNC_1(&VAR_8->lock, VAR_9);
 if (FUNC_0(VAR_8, 0x40))
  FUNC_0(VAR_8, VAR_8->tconst);
 FUNC_0(VAR_8, VAR_1);
 if (VAR_8->channels == 1)
  FUNC_0(VAR_8, 0xa0 | VAR_10);
 else
  FUNC_0(VAR_8, 0xa8 | VAR_10);
 FUNC_2(&VAR_8->lock, VAR_9);

 VAR_8->trigger_bits = 0;
 return 0;
}
