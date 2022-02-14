
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_uart16550 {scalar_t__ irq; int res_base; } ;


 int FUNC_0 (scalar_t__,struct snd_uart16550*) ;
 int FUNC_1 (struct snd_uart16550*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_uart16550 *VAR_0)
{
 if (VAR_0->irq >= 0)
  FUNC_0(VAR_0->irq, VAR_0);
 FUNC_2(VAR_0->res_base);
 FUNC_1(VAR_0);
 return 0;
}
