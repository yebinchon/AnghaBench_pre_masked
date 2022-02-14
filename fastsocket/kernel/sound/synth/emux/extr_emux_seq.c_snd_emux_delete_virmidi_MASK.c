
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emux {int midi_ports; scalar_t__* vmidi; int card; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int ,scalar_t__) ;

int FUNC_2(struct snd_emux *VAR_0)
{
 int VAR_1;

 if (VAR_0->vmidi == ((void*)0))
  return 0;

 for (VAR_1 = 0; VAR_1 < VAR_0->midi_ports; VAR_1++) {
  if (VAR_0->vmidi[VAR_1])
   FUNC_1(VAR_0->card, VAR_0->vmidi[VAR_1]);
 }
 FUNC_0(VAR_0->vmidi);
 VAR_0->vmidi = ((void*)0);
 return 0;
}
