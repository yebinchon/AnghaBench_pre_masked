
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {TYPE_1__* ops; struct snd_soc_codec* disc_data; } ;
struct snd_soc_codec {int pop_time; scalar_t__ hw_write; struct tty_struct* control_data; } ;
typedef scalar_t__ hw_write_t ;
struct TYPE_2__ {scalar_t__ write; } ;



__attribute__((used)) static void FUNC_0(struct tty_struct *VAR_0,
    const unsigned char *VAR_1, char *VAR_2, int VAR_3)
{
 struct snd_soc_codec *VAR_4 = VAR_0->disc_data;

 if (!VAR_4)
  return;

 if (!VAR_4->control_data) {



  VAR_4->control_data = VAR_0;
  VAR_4->hw_write = (hw_write_t)VAR_0->ops->write;
  VAR_4->pop_time = 1;
 }
}
