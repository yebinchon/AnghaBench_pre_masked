
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_es1688 {scalar_t__ irq; scalar_t__ dma8; scalar_t__ res_port; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,void*) ;
 int FUNC_3 (struct snd_es1688*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct snd_es1688*,int ) ;

__attribute__((used)) static int FUNC_6(struct snd_es1688 *VAR_0)
{
 if (VAR_0->res_port) {
  FUNC_5(VAR_0, 0);
  FUNC_4(VAR_0->res_port);
 }
 if (VAR_0->irq >= 0)
  FUNC_2(VAR_0->irq, (void *) VAR_0);
 if (VAR_0->dma8 >= 0) {
  FUNC_0(VAR_0->dma8);
  FUNC_1(VAR_0->dma8);
 }
 FUNC_3(VAR_0);
 return 0;
}
