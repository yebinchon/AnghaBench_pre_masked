
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct snd_mixer {int dummy; } ;
struct a10codec_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct a10codec_info*,int ,int) ;
 struct a10codec_info* FUNC_1 (struct snd_mixer*) ;

__attribute__((used)) static uint32_t
FUNC_2(struct snd_mixer *VAR_10, uint32_t VAR_11)
{
 struct a10codec_info *VAR_12 = FUNC_1(VAR_10);
 uint32_t VAR_13;

 VAR_13 = 0;
 VAR_11 &= (VAR_7 | VAR_9 |
     VAR_8 | VAR_6);

 if ((VAR_11 & VAR_7) != 0)
  VAR_13 |= VAR_0;
 if ((VAR_11 & VAR_9) != 0)
  VAR_13 |= VAR_1;
 if ((VAR_11 & VAR_8) != 0)
  VAR_13 |= VAR_2;
 if ((VAR_11 & VAR_6) != 0)
  VAR_13 |= VAR_3;

 FUNC_0(VAR_12, VAR_4, VAR_13);
 FUNC_0(VAR_12, VAR_5, VAR_13);

 return (VAR_11);
}
