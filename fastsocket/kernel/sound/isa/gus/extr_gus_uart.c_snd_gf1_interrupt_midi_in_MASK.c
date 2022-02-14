
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int uart_cmd; int uart_overrun; int uart_framing; } ;
struct snd_gus_card {TYPE_1__ gf1; int midi_substream_input; int uart_cmd_lock; } ;


 unsigned char FUNC_0 (struct snd_gus_card*) ;
 unsigned char FUNC_1 (struct snd_gus_card*) ;
 int FUNC_2 (int ,unsigned char*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct snd_gus_card * VAR_0)
{
 int VAR_1;
 unsigned char VAR_2, VAR_3, VAR_4;
 unsigned long VAR_5;

 VAR_1 = 10;
 while (VAR_1) {
  FUNC_3(&VAR_0->uart_cmd_lock, VAR_5);
  VAR_2 = FUNC_1(VAR_0);
  if (!(VAR_2 & 0x01)) {
   FUNC_4(&VAR_0->uart_cmd_lock, VAR_5);
   VAR_1--;
   continue;
  }
  VAR_1 = 100;
  VAR_3 = FUNC_0(VAR_0);
  if (!(VAR_0->gf1.uart_cmd & 0x80)) {
   FUNC_4(&VAR_0->uart_cmd_lock, VAR_5);
   continue;
  }
  if (VAR_2 & 0x10) {
   VAR_0->gf1.uart_framing++;
   FUNC_4(&VAR_0->uart_cmd_lock, VAR_5);
   continue;
  }
  VAR_4 = FUNC_0(VAR_0);
  FUNC_4(&VAR_0->uart_cmd_lock, VAR_5);
  FUNC_2(VAR_0->midi_substream_input, &VAR_4, 1);
  if (VAR_2 & 0x20) {
   VAR_0->gf1.uart_overrun++;
  }
 }
}
