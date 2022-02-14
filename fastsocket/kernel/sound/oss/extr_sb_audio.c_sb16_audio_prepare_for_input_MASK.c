
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ bits; scalar_t__ trigger_bits; int dma8; int dma16; int fullduplex; } ;
typedef TYPE_3__ sb_devc ;
struct TYPE_8__ {TYPE_2__* dmap_in; TYPE_1__* dmap_out; TYPE_3__* devc; } ;
struct TYPE_6__ {int dma; } ;
struct TYPE_5__ {int dma; } ;


 scalar_t__ VAR_0 ;
 TYPE_4__** VAR_1 ;

__attribute__((used)) static int FUNC_0(int VAR_2, int VAR_3, int VAR_4)
{
 sb_devc *VAR_5 = VAR_1[VAR_2]->devc;

 if (!VAR_5->fullduplex)
 {
  VAR_1[VAR_2]->dmap_out->dma =
   VAR_1[VAR_2]->dmap_in->dma =
    VAR_5->bits == VAR_0 ?
     VAR_5->dma16 : VAR_5->dma8;
 }
 else if (VAR_5->bits == VAR_0)
 {
  VAR_1[VAR_2]->dmap_out->dma = VAR_5->dma8;
  VAR_1[VAR_2]->dmap_in->dma = VAR_5->dma16;
 }
 else
 {
  VAR_1[VAR_2]->dmap_out->dma = VAR_5->dma16;
  VAR_1[VAR_2]->dmap_in->dma = VAR_5->dma8;
 }

 VAR_5->trigger_bits = 0;
 return 0;
}
