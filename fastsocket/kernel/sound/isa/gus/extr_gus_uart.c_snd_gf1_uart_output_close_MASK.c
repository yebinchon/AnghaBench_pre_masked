
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct TYPE_4__ {scalar_t__ interrupt_handler_midi_in; } ;
struct snd_gus_card {int uart_cmd_lock; int * midi_substream_output; TYPE_2__ gf1; } ;
struct TYPE_3__ {struct snd_gus_card* private_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct snd_gus_card*,int ) ;
 int FUNC_1 (struct snd_gus_card*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct snd_rawmidi_substream *VAR_2)
{
 unsigned long VAR_3;
 struct snd_gus_card *VAR_4;

 VAR_4 = VAR_2->rmidi->private_data;
 FUNC_2(&VAR_4->uart_cmd_lock, VAR_3);
 if (VAR_4->gf1.interrupt_handler_midi_in != VAR_1)
  FUNC_1(VAR_4, 1);
 FUNC_0(VAR_4, VAR_0);
 VAR_4->midi_substream_output = ((void*)0);
 FUNC_3(&VAR_4->uart_cmd_lock, VAR_3);
 return 0;
}
