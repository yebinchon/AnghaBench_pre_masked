
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_uart16550 {unsigned short buff_in; scalar_t__ buff_in_count; unsigned char* tx_buff; scalar_t__ irq; } ;


 unsigned short VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct snd_uart16550*) ;

__attribute__((used)) static inline int FUNC_1(struct snd_uart16550 *VAR_2,
          unsigned char VAR_3)
{
 unsigned short VAR_4 = VAR_2->buff_in;
 if (VAR_2->buff_in_count < VAR_1) {
  VAR_2->tx_buff[VAR_4] = VAR_3;
  VAR_4++;
  VAR_4 &= VAR_0;
  VAR_2->buff_in = VAR_4;
  VAR_2->buff_in_count++;
  if (VAR_2->irq < 0)
   FUNC_0(VAR_2);
  return 1;
 } else
  return 0;
}
