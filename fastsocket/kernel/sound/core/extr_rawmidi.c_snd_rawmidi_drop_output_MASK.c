
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rawmidi_substream {struct snd_rawmidi_runtime* runtime; } ;
struct snd_rawmidi_runtime {int lock; int buffer_size; int avail; scalar_t__ hw_ptr; scalar_t__ appl_ptr; scalar_t__ drain; } ;


 int FUNC_0 (struct snd_rawmidi_substream*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(struct snd_rawmidi_substream *VAR_0)
{
 unsigned long VAR_1;
 struct snd_rawmidi_runtime *VAR_2 = VAR_0->runtime;

 FUNC_0(VAR_0, 0);
 VAR_2->drain = 0;
 FUNC_1(&VAR_2->lock, VAR_1);
 VAR_2->appl_ptr = VAR_2->hw_ptr = 0;
 VAR_2->avail = VAR_2->buffer_size;
 FUNC_2(&VAR_2->lock, VAR_1);
 return 0;
}
