
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_midi_event {int type; scalar_t__ qlen; scalar_t__ read; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct snd_midi_event *VAR_1)
{
 VAR_1->read = 0;
 VAR_1->qlen = 0;
 VAR_1->type = VAR_0;
}
