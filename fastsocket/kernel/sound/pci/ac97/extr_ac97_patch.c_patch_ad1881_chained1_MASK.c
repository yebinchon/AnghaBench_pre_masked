
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* chained; unsigned short* id; unsigned short* codec_cfg; } ;
struct TYPE_4__ {TYPE_1__ ad18xx; } ;
struct snd_ac97 {TYPE_2__ spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned short FUNC_0 (struct snd_ac97*,int ) ;
 int FUNC_1 (struct snd_ac97*,int ,int,int) ;
 int FUNC_2 (struct snd_ac97*,int ,unsigned short) ;

__attribute__((used)) static int FUNC_3(struct snd_ac97 * VAR_3, int VAR_4, unsigned short VAR_5)
{
 static int VAR_6[3] = { 1<<12, 1<<14, 1<<13 };
 unsigned short VAR_7;

 FUNC_1(VAR_3, VAR_1, 0x7000, VAR_6[VAR_4]);
 FUNC_2(VAR_3, VAR_0, 0x0004);
 VAR_7 = FUNC_0(VAR_3, VAR_2);
 if ((VAR_7 & 0xff40) != 0x5340)
  return 0;
 if (VAR_5)
  FUNC_2(VAR_3, VAR_0, VAR_5);
 VAR_3->spec.ad18xx.chained[VAR_4] = VAR_6[VAR_4];
 VAR_3->spec.ad18xx.id[VAR_4] = VAR_7;
 VAR_3->spec.ad18xx.codec_cfg[VAR_4] = VAR_5 ? VAR_5 : 0x0004;
 return 1;
}
