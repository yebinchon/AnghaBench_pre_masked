
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned short* unchained; unsigned short* id; int* codec_cfg; } ;
struct TYPE_3__ {TYPE_2__ ad18xx; } ;
struct snd_ac97 {TYPE_1__ spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned short FUNC_0 (struct snd_ac97*,int ) ;
 int FUNC_1 (struct snd_ac97*,int ,int,unsigned short) ;
 int FUNC_2 (struct snd_ac97*,int ,int) ;

__attribute__((used)) static unsigned short FUNC_3(struct snd_ac97 * VAR_3, int VAR_4, unsigned short VAR_5)
{
 unsigned short VAR_6;


 FUNC_1(VAR_3, VAR_1, 0x7000, VAR_5);
 FUNC_2(VAR_3, VAR_0, 0x0000);
 VAR_6 = FUNC_0(VAR_3, VAR_2);
 if ((VAR_6 & 0xff40) != 0x5340)
  return 0;
 VAR_3->spec.ad18xx.unchained[VAR_4] = VAR_5;
 VAR_3->spec.ad18xx.id[VAR_4] = VAR_6;
 VAR_3->spec.ad18xx.codec_cfg[VAR_4] = 0x0000;
 return VAR_5;
}
