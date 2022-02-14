
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ dma16; scalar_t__ dma8; int bits; scalar_t__ model; int channels; int tconst; scalar_t__ trigger_bits; int lock; } ;
typedef TYPE_3__ sb_devc ;
struct TYPE_12__ {TYPE_2__* dmap_in; TYPE_1__* dmap_out; TYPE_3__* devc; } ;
struct TYPE_10__ {scalar_t__ dma; } ;
struct TYPE_9__ {scalar_t__ dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_8__** VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int) ;
 unsigned char FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_3__*,int,unsigned char) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(int VAR_6, int VAR_7, int VAR_8)
{
 sb_devc *VAR_9 = VAR_5[VAR_6]->devc;
 unsigned long VAR_10;
 unsigned char VAR_11;
 unsigned char VAR_12 = 0;

 if (VAR_9->dma16 >= 0 && VAR_9->dma16 != VAR_9->dma8)
  VAR_5[VAR_6]->dmap_out->dma = VAR_5[VAR_6]->dmap_in->dma = VAR_9->bits == 16 ? VAR_9->dma16 : VAR_9->dma8;
 if (VAR_9->model == VAR_3)
  FUNC_2(VAR_9, VAR_9->channels == 2);

 FUNC_4(&VAR_9->lock, VAR_10);
 if (FUNC_0(VAR_9, 0x40))
  FUNC_0(VAR_9, VAR_9->tconst);
 FUNC_0(VAR_9, VAR_1);

 if (VAR_9->model == VAR_2 || VAR_9->model == VAR_4)
 {
  if (VAR_9->bits == VAR_0)
   VAR_12 = 0x04;

  if (VAR_9->channels == 1)
   FUNC_0(VAR_9, 0xa0 | VAR_12);
  else
   FUNC_0(VAR_9, 0xa8 | VAR_12);
  FUNC_5(&VAR_9->lock, VAR_10);
 }
 else
 {
  FUNC_5(&VAR_9->lock, VAR_10);
  VAR_11 = FUNC_1(VAR_9, 0x0e);
  if (VAR_9->channels == 1)
   VAR_11 &= ~0x02;
  else
   VAR_11 |= 0x02;
  FUNC_3(VAR_9, 0x0e, VAR_11);
 }
 VAR_9->trigger_bits = 0;
 return 0;
}
