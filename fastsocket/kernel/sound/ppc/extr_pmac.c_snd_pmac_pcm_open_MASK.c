
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pmac {int num_freqs; int freqs_ok; int can_duplex; scalar_t__ can_capture; int formats_ok; int * freq_table; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_3__ {scalar_t__ periods_max; int info; int formats; int rate_min; int rate_max; int rates; } ;
struct snd_pcm_runtime {TYPE_1__ hw; struct pmac_stream* private_data; } ;
struct TYPE_4__ {scalar_t__ size; } ;
struct pmac_stream {TYPE_2__ cmd; int stream; struct snd_pcm_substream* substream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ) ;
 int FUNC_1 (struct snd_pcm_runtime*,int ,int ,int ,struct snd_pmac*,int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_3(struct snd_pmac *VAR_7, struct pmac_stream *VAR_8,
        struct snd_pcm_substream *VAR_9)
{
 struct snd_pcm_runtime *VAR_10 = VAR_9->runtime;
 int VAR_11;


 VAR_10->hw.rates = 0;
 for (VAR_11 = 0; VAR_11 < VAR_7->num_freqs; VAR_11++)
  if (VAR_7->freqs_ok & (1 << VAR_11))
   VAR_10->hw.rates |=
    FUNC_2(VAR_7->freq_table[VAR_11]);


 for (VAR_11 = 0; VAR_11 < VAR_7->num_freqs; VAR_11++) {
  if (VAR_7->freqs_ok & (1 << VAR_11)) {
   VAR_10->hw.rate_max = VAR_7->freq_table[VAR_11];
   break;
  }
 }
 for (VAR_11 = VAR_7->num_freqs - 1; VAR_11 >= 0; VAR_11--) {
  if (VAR_7->freqs_ok & (1 << VAR_11)) {
   VAR_10->hw.rate_min = VAR_7->freq_table[VAR_11];
   break;
  }
 }
 VAR_10->hw.formats = VAR_7->formats_ok;
 if (VAR_7->can_capture) {
  if (! VAR_7->can_duplex)
   VAR_10->hw.info |= VAR_3;
  VAR_10->hw.info |= VAR_4;
 }
 VAR_10->private_data = VAR_8;
 VAR_8->substream = VAR_9;
 VAR_10->hw.periods_max = VAR_8->cmd.size - 1;


 FUNC_0(VAR_10, VAR_1);
 return 0;
}
