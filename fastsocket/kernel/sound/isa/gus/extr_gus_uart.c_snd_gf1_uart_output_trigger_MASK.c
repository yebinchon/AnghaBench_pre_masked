
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct TYPE_4__ {int uart_cmd; } ;
struct snd_gus_card {int uart_cmd_lock; TYPE_2__ gf1; } ;
struct TYPE_3__ {struct snd_gus_card* private_data; } ;


 int FUNC_0 (struct snd_gus_card*,int) ;
 int FUNC_1 (struct snd_gus_card*,char) ;
 int FUNC_2 (struct snd_gus_card*) ;
 int FUNC_3 (struct snd_rawmidi_substream*,char*,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct snd_rawmidi_substream *VAR_0, int VAR_1)
{
 unsigned long VAR_2;
 struct snd_gus_card *VAR_3;
 char VAR_4;
 int VAR_5;

 VAR_3 = VAR_0->rmidi->private_data;

 FUNC_4(&VAR_3->uart_cmd_lock, VAR_2);
 if (VAR_1) {
  if ((VAR_3->gf1.uart_cmd & 0x20) == 0) {
   FUNC_5(&VAR_3->uart_cmd_lock, VAR_2);

   VAR_5 = 10000;
   while (VAR_5-- > 0 && FUNC_2(VAR_3) & 0x01);

   FUNC_4(&VAR_3->uart_cmd_lock, VAR_2);
   if (VAR_3->gf1.uart_cmd & 0x20) {
    FUNC_5(&VAR_3->uart_cmd_lock, VAR_2);
    return;
   }
   if (FUNC_2(VAR_3) & 0x02) {
    if (FUNC_3(VAR_0, &VAR_4, 1) != 1) {
     FUNC_5(&VAR_3->uart_cmd_lock, VAR_2);
     return;
    }
    FUNC_1(VAR_3, VAR_4);
   }
   FUNC_0(VAR_3, VAR_3->gf1.uart_cmd | 0x20);
  }
 } else {
  if (VAR_3->gf1.uart_cmd & 0x20)
   FUNC_0(VAR_3, VAR_3->gf1.uart_cmd & ~0x20);
 }
 FUNC_5(&VAR_3->uart_cmd_lock, VAR_2);
}
