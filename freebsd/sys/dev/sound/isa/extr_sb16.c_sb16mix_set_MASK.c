
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mixer {int dummy; } ;
struct sb_info {int dummy; } ;
struct sb16_mixent {int bits; unsigned int ofs; scalar_t__ reg; scalar_t__ stereo; } ;


 struct sb_info* FUNC_0 (struct snd_mixer*) ;
 unsigned int FUNC_1 (unsigned int,int) ;
 struct sb16_mixent* VAR_0 ;
 int FUNC_2 (struct sb_info*,scalar_t__,unsigned int) ;

__attribute__((used)) static int
FUNC_3(struct snd_mixer *VAR_1, unsigned VAR_2, unsigned VAR_3, unsigned VAR_4)
{
     struct sb_info *VAR_5 = FUNC_0(VAR_1);
     const struct sb16_mixent *VAR_6;
     int VAR_7;

 VAR_6 = &VAR_0[VAR_2];
 VAR_7 = (1 << VAR_6->bits) - 1;

 VAR_3 = FUNC_1(VAR_3, VAR_7);
 VAR_4 = FUNC_1(VAR_4, VAR_7);

 FUNC_2(VAR_5, VAR_6->reg, VAR_3 << VAR_6->ofs);
 if (VAR_6->stereo)
  FUNC_2(VAR_5, VAR_6->reg + 1, VAR_4 << VAR_6->ofs);
 else
  VAR_4 = VAR_3;

 VAR_3 = (VAR_3 * 100) / VAR_7;
 VAR_4 = (VAR_4 * 100) / VAR_7;

     return VAR_3 | (VAR_4 << 8);
}
