
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct address_info {size_t* slots; scalar_t__ io_base; } ;
struct TYPE_7__ {scalar_t__ base; int model; scalar_t__ pcibase; int caps; scalar_t__ dma8; scalar_t__ dma16; scalar_t__ irq; int dev; int my_mididev; } ;
typedef TYPE_1__ sb_devc ;
struct TYPE_8__ {TYPE_1__* devc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_6__** VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (scalar_t__,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

void FUNC_7(struct address_info *VAR_5, int VAR_6)
{
 sb_devc *VAR_7;

 VAR_7 = VAR_3[VAR_5->slots[0]]->devc;

 if (VAR_7 && VAR_7->base == VAR_5->io_base)
 {
  if ((VAR_7->model & VAR_0) && VAR_7->pcibase)
   FUNC_2(VAR_7->pcibase, 8);

  FUNC_2(VAR_7->base, 16);

  if (!(VAR_7->caps & VAR_1))
  {
   FUNC_4(VAR_7->dma8);
   if (VAR_7->dma16 >= 0)
    FUNC_4(VAR_7->dma16);
  }
  if (!(VAR_7->caps & VAR_1 && VAR_7->caps & VAR_2))
  {
   if (VAR_7->irq > 0)
    FUNC_0(VAR_7->irq, VAR_7);

   FUNC_3(VAR_7);



   if (!VAR_6)
    FUNC_6(VAR_7->my_mididev);
   FUNC_5(VAR_7->dev);
  }
  FUNC_1(VAR_7);
 }
 else
  FUNC_2(VAR_5->io_base, 16);

 FUNC_1(VAR_4);
}
