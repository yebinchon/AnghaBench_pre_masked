
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu10k1_midi {scalar_t__ port; } ;
struct snd_emu10k1 {scalar_t__ port; scalar_t__ audigy; } ;


 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (struct snd_emu10k1*,scalar_t__,int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct snd_emu10k1 *VAR_0,
    struct snd_emu10k1_midi *VAR_1, int VAR_2, int VAR_3)
{
 if (VAR_0->audigy)
  FUNC_1(VAR_0, VAR_1->port + VAR_3, 0, VAR_2);
 else
  FUNC_0(VAR_2, VAR_0->port + VAR_1->port + VAR_3);
}
