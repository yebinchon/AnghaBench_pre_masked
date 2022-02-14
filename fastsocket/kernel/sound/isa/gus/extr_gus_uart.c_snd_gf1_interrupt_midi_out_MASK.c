
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int uart_cmd; } ;
struct snd_gus_card {int uart_cmd_lock; TYPE_1__ gf1; int midi_substream_output; } ;


 int FUNC_0 (struct snd_gus_card*) ;
 int FUNC_1 (struct snd_gus_card*,int) ;
 int FUNC_2 (struct snd_gus_card*,char) ;
 int FUNC_3 (struct snd_gus_card*) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct snd_gus_card * VAR_0)
{
 char VAR_1;
 unsigned long VAR_2;


 if (FUNC_3(VAR_0) & 0x01)
  FUNC_0(VAR_0);

 FUNC_5(&VAR_0->uart_cmd_lock, VAR_2);
 if (FUNC_3(VAR_0) & 0x02) {
  if (FUNC_4(VAR_0->midi_substream_output, &VAR_1, 1) != 1) {
   FUNC_1(VAR_0, VAR_0->gf1.uart_cmd & ~0x20);
  } else {
   FUNC_2(VAR_0, VAR_1);
  }
 }
 FUNC_6(&VAR_0->uart_cmd_lock, VAR_2);
}
