
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* id; int* codec_cfg; scalar_t__* unchained; } ;
struct TYPE_4__ {TYPE_1__ ad18xx; } ;
struct snd_ac97 {int id; int * build_ops; TYPE_2__ spec; void* ext_id; int scaps; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct snd_ac97*,int,char const,char const) ;
 unsigned short FUNC_1 (struct snd_ac97*,int,int) ;
 void* FUNC_2 (struct snd_ac97*,int ) ;
 int FUNC_3 (struct snd_ac97*,int ,int,int) ;
 int FUNC_4 (struct snd_ac97*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct snd_ac97 * VAR_7)
{
 static const char VAR_8[3][2] = {
  {2, 1},
  {0, 2},
  {0, 1}
 };


 unsigned short VAR_9[3];
 unsigned short VAR_10;
 int VAR_11, VAR_12;

 VAR_10 = FUNC_2(VAR_7, VAR_2);
 FUNC_4(VAR_7, VAR_2, VAR_10);
 VAR_9[0] = FUNC_1(VAR_7, 0, (1<<12));
 VAR_9[1] = FUNC_1(VAR_7, 1, (1<<14));
 VAR_9[2] = FUNC_1(VAR_7, 2, (1<<13));

 if (! (VAR_9[0] || VAR_9[1] || VAR_9[2]))
  goto __end;

 for (VAR_11 = 0; VAR_11 < 3; VAR_11++)
  if (VAR_7->spec.ad18xx.unchained[VAR_11])
   FUNC_0(VAR_7, VAR_11, VAR_8[VAR_11][0], VAR_8[VAR_11][1]);

 if (VAR_7->spec.ad18xx.id[1]) {
  VAR_7->flags |= VAR_1;
  VAR_7->scaps |= VAR_5;
 }
 if (VAR_7->spec.ad18xx.id[2]) {
  VAR_7->flags |= VAR_1;
  VAR_7->scaps |= VAR_4;
 }

      __end:

 FUNC_3(VAR_7, VAR_2, 0x7000, 0x7000);

 for (VAR_11 = VAR_12 = 0; VAR_11 < 3; VAR_11++)
  if (VAR_7->spec.ad18xx.id[VAR_11])
   VAR_12++;
 if (VAR_12 == 1) {

  FUNC_4(VAR_7, VAR_0, 0x0000);
  VAR_7->spec.ad18xx.codec_cfg[0] =
   VAR_7->spec.ad18xx.codec_cfg[1] =
   VAR_7->spec.ad18xx.codec_cfg[2] = 0x0000;
 }

 VAR_7->ext_id = FUNC_2(VAR_7, VAR_3);
 if (VAR_7->spec.ad18xx.id[0]) {
  VAR_7->id &= 0xffff0000;
  VAR_7->id |= VAR_7->spec.ad18xx.id[0];
 }
 VAR_7->build_ops = &VAR_6;
 return 0;
}
