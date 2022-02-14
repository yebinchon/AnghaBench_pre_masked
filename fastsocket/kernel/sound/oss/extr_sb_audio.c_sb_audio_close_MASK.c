
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dma_buffparms {int dma; } ;
struct TYPE_5__ {int opened; int dma8; int dma16; scalar_t__ submodel; scalar_t__ duplex; int fullduplex; } ;
typedef TYPE_1__ sb_devc ;
struct TYPE_6__ {struct dma_buffparms* dmap_in; struct dma_buffparms* dmap_out; TYPE_1__* devc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_4__** VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int) ;

void FUNC_3(int VAR_5)
{
 sb_devc *VAR_6 = VAR_4[VAR_5]->devc;


 if(VAR_6->duplex
    && !VAR_6->fullduplex
    && (VAR_6->opened & VAR_1) && (VAR_6->opened & VAR_2))
 {
  struct dma_buffparms *VAR_7;
  VAR_7 = VAR_4[VAR_5]->dmap_out;
  VAR_4[VAR_5]->dmap_out = VAR_4[VAR_5]->dmap_in;
  VAR_4[VAR_5]->dmap_in = VAR_7;
 }
 VAR_4[VAR_5]->dmap_out->dma = VAR_6->dma8;
 VAR_4[VAR_5]->dmap_in->dma = ( VAR_6->duplex ) ?
  VAR_6->dma16 : VAR_6->dma8;

 if (VAR_6->dma16 != -1 && VAR_6->dma16 != VAR_6->dma8 && !VAR_6->duplex)
  FUNC_2(VAR_6->dma16);



 if ((VAR_6->submodel == VAR_3) && (VAR_6->opened & VAR_1))
 {
  FUNC_1(VAR_6,VAR_0,
   FUNC_0(VAR_6,VAR_0) | 0x06);
 }
 VAR_6->opened = 0;
}
