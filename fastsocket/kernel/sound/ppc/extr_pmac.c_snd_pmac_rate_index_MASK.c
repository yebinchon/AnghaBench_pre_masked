
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pmac {unsigned int* freq_table; int num_freqs; } ;
struct pmac_stream {int cur_freqs; } ;



unsigned int FUNC_0(struct snd_pmac *VAR_0, struct pmac_stream *VAR_1, unsigned int VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 VAR_4 = VAR_1->cur_freqs;
 if (VAR_2 > VAR_0->freq_table[0])
  return 0;
 VAR_5 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_0->num_freqs; VAR_3++, VAR_4 >>= 1) {
  if (! (VAR_4 & 1)) continue;
  VAR_5 = VAR_3;
  if (VAR_2 >= VAR_0->freq_table[VAR_3])
   break;
 }
 return VAR_5;
}
