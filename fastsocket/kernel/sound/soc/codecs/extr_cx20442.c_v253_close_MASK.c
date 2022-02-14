
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct snd_soc_codec* disc_data; } ;
struct snd_soc_codec {scalar_t__ pop_time; int * control_data; int * hw_write; } ;



__attribute__((used)) static void FUNC_0(struct tty_struct *VAR_0)
{
 struct snd_soc_codec *VAR_1 = VAR_0->disc_data;

 VAR_0->disc_data = ((void*)0);

 if (!VAR_1)
  return;


 VAR_1->hw_write = ((void*)0);
 VAR_1->control_data = ((void*)0);
 VAR_1->pop_time = 0;
}
