
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_softc {int midi_number; int * midis; } ;
typedef int kobj_t ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct seq_softc *VAR_1, int VAR_2, kobj_t *VAR_3)
{

 if (VAR_2 >= VAR_1->midi_number || VAR_2 < 0)
  return VAR_0;

 *VAR_3 = VAR_1->midis[VAR_2];

 return 0;
}
