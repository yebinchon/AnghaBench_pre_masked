
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu10k1_midi {scalar_t__ port; } ;
struct snd_emu10k1 {scalar_t__ port; scalar_t__ audigy; } ;


 unsigned char FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct snd_emu10k1*,scalar_t__,int ) ;

__attribute__((used)) static inline unsigned char FUNC_2(struct snd_emu10k1 *VAR_0,
     struct snd_emu10k1_midi *VAR_1, int VAR_2)
{
 if (VAR_0->audigy)
  return (unsigned char)FUNC_1(VAR_0, VAR_1->port + VAR_2, 0);
 else
  return FUNC_0(VAR_0->port + VAR_1->port + VAR_2);
}
