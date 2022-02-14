
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct snd_mixer {int dummy; } ;
struct a10codec_info {int dummy; } ;
struct TYPE_2__ {unsigned int mask; unsigned int shift; int reg; } ;


 unsigned int FUNC_0 (struct a10codec_info*,int ) ;
 int FUNC_1 (struct a10codec_info*,int ,unsigned int) ;
 TYPE_1__* VAR_0 ;
 struct a10codec_info* FUNC_2 (struct snd_mixer*) ;

__attribute__((used)) static int
FUNC_3(struct snd_mixer *VAR_1, unsigned VAR_2, unsigned VAR_3,
    unsigned VAR_4)
{
 struct a10codec_info *VAR_5 = FUNC_2(VAR_1);
 uint32_t VAR_6;
 unsigned VAR_7, VAR_8;

 VAR_8 = VAR_0[VAR_2].mask >> VAR_0[VAR_2].shift;
 VAR_7 = (VAR_3 * VAR_8) / 100;

 VAR_6 = FUNC_0(VAR_5, VAR_0[VAR_2].reg);
 VAR_6 &= ~VAR_0[VAR_2].mask;
 VAR_6 |= (VAR_7 << VAR_0[VAR_2].shift);
 FUNC_1(VAR_5, VAR_0[VAR_2].reg, VAR_6);

 VAR_3 = VAR_4 = (VAR_3 * 100) / VAR_8;
 return (VAR_3 | (VAR_4 << 8));
}
