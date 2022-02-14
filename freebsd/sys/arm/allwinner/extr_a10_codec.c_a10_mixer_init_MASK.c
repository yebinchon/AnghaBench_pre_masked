
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
 int FUNC_0 (struct a10codec_info*,int ) ;
 int FUNC_1 (struct a10codec_info*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct a10codec_info* FUNC_2 (struct snd_mixer*) ;
 int FUNC_3 (struct snd_mixer*,int) ;
 int FUNC_4 (struct snd_mixer*,int) ;

__attribute__((used)) static int
FUNC_5(struct snd_mixer *VAR_9)
{
 struct a10codec_info *VAR_10 = FUNC_2(VAR_9);
 uint32_t VAR_11;

 FUNC_3(VAR_9, VAR_8 | VAR_4 | VAR_7);
 FUNC_4(VAR_9, VAR_4 | VAR_5 | VAR_6);


 VAR_11 = FUNC_0(VAR_10, VAR_1);
 VAR_11 |= VAR_2;
 FUNC_1(VAR_10, VAR_1, VAR_11);


 VAR_11 = FUNC_0(VAR_10, VAR_0);
 VAR_11 |= VAR_3;
 FUNC_1(VAR_10, VAR_0, VAR_11);

 return (0);
}
