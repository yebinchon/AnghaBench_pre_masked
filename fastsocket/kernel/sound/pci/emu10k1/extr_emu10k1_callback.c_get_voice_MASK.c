
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emux_voice {scalar_t__ ch; } ;
struct snd_emux_port {int dummy; } ;
struct snd_emux {int num_voices; struct snd_emux_voice* voices; struct snd_emu10k1* hw; } ;
struct snd_emu10k1_voice {scalar_t__ number; } ;
struct snd_emu10k1 {int dummy; } ;
struct best_voice {size_t voice; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_emux*,struct snd_emu10k1*,struct best_voice*,int ) ;
 scalar_t__ FUNC_1 (struct snd_emu10k1*,int ,int,struct snd_emu10k1_voice**) ;

__attribute__((used)) static struct snd_emux_voice *
FUNC_2(struct snd_emux *VAR_2, struct snd_emux_port *VAR_3)
{
 struct snd_emu10k1 *VAR_4;
 struct snd_emux_voice *VAR_5;
 struct best_voice VAR_6[VAR_1];
 int VAR_7;

 VAR_4 = VAR_2->hw;

 FUNC_0(VAR_2, VAR_4, VAR_6, 0);
 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  if (VAR_6[VAR_7].voice >= 0) {
   VAR_5 = &VAR_2->voices[VAR_6[VAR_7].voice];
   if (VAR_5->ch < 0) {

    struct snd_emu10k1_voice *VAR_8;
    if (FUNC_1(VAR_4, VAR_0, 1, &VAR_8) < 0 || VAR_8 == ((void*)0))
     continue;
    VAR_5->ch = VAR_8->number;
    VAR_2->num_voices++;
   }
   return VAR_5;
  }
 }


 return ((void*)0);
}
