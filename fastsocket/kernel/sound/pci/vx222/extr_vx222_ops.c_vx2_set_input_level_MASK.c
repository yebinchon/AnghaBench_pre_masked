
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_vx222 {int mic_level; int regSELMIC; scalar_t__* input_level; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct snd_vx222*,int ) ;
 int FUNC_2 (struct snd_vx222*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct snd_vx222 *VAR_7)
{
 int VAR_8, VAR_9, VAR_10;
 unsigned int VAR_11;

 VAR_9 = VAR_7->mic_level;
 VAR_9 += VAR_5;
 VAR_10 = 0;
        while (VAR_9 > 210) {
  VAR_10++;
  VAR_9 -= (18 * 2);
        }
 if (FUNC_0(VAR_10 >= 4))
  return;


 VAR_7->regSELMIC &= ~VAR_1;
 VAR_7->regSELMIC |= (VAR_10 << VAR_2) & VAR_1;
 FUNC_2(VAR_7, VAR_4, VAR_7->regSELMIC);

 VAR_11 = (unsigned int)VAR_9 << 16 |
  (unsigned int)VAR_7->input_level[1] << 8 |
  (unsigned int)VAR_7->input_level[0];
 FUNC_1(VAR_7, VAR_0);


 for (VAR_8 = 0; VAR_8 < 32; VAR_8++, VAR_11 <<= 1)
  FUNC_2(VAR_7, VAR_0, ((VAR_11 & 0x80000000) ? VAR_6 : 0));

 FUNC_1(VAR_7, VAR_3);
}
