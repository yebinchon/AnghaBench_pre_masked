
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_wss {scalar_t__ irq; int hwshare; scalar_t__ dma1; scalar_t__ dma2; scalar_t__ timer; int card; int res_cport; int res_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,void*) ;
 int FUNC_3 (struct snd_wss*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (scalar_t__) ;

int FUNC_7(struct snd_wss *VAR_3)
{
 FUNC_4(VAR_3->res_port);
 FUNC_4(VAR_3->res_cport);
 if (VAR_3->irq >= 0) {
  FUNC_0(VAR_3->irq);
  if (!(VAR_3->hwshare & VAR_2))
   FUNC_2(VAR_3->irq, (void *) VAR_3);
 }
 if (!(VAR_3->hwshare & VAR_0) && VAR_3->dma1 >= 0) {
  FUNC_6(VAR_3->dma1);
  FUNC_1(VAR_3->dma1);
 }
 if (!(VAR_3->hwshare & VAR_1) &&
     VAR_3->dma2 >= 0 && VAR_3->dma2 != VAR_3->dma1) {
  FUNC_6(VAR_3->dma2);
  FUNC_1(VAR_3->dma2);
 }
 if (VAR_3->timer)
  FUNC_5(VAR_3->card, VAR_3->timer);
 FUNC_3(VAR_3);
 return 0;
}
