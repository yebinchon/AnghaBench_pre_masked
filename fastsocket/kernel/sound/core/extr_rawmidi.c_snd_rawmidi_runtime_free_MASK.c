
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rawmidi_substream {struct snd_rawmidi_runtime* runtime; } ;
struct snd_rawmidi_runtime {struct snd_rawmidi_runtime* buffer; } ;


 int FUNC_0 (struct snd_rawmidi_runtime*) ;

__attribute__((used)) static int FUNC_1(struct snd_rawmidi_substream *VAR_0)
{
 struct snd_rawmidi_runtime *VAR_1 = VAR_0->runtime;

 FUNC_0(VAR_1->buffer);
 FUNC_0(VAR_1);
 VAR_0->runtime = ((void*)0);
 return 0;
}
