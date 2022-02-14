
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_opl3 {int rhythm; int (* command ) (struct snd_opl3*,int,unsigned char) ;} ;
struct snd_dm_fm_params {scalar_t__ hihat; scalar_t__ cymbal; scalar_t__ tomtom; scalar_t__ snare; scalar_t__ bass; scalar_t__ rhythm; scalar_t__ vib_depth; scalar_t__ am_depth; scalar_t__ kbd_split; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char VAR_11 ;
 int FUNC_0 (struct snd_opl3*,int,unsigned char) ;
 int FUNC_1 (struct snd_opl3*,int,unsigned char) ;

__attribute__((used)) static int FUNC_2(struct snd_opl3 * VAR_12, struct snd_dm_fm_params * VAR_13)
{
 unsigned char VAR_14;

 VAR_14 = 0x00;

 if (VAR_13->kbd_split)
  VAR_14 |= VAR_3;
 VAR_12->command(VAR_12, VAR_4 | VAR_6, VAR_14);

 VAR_14 = 0x00;

 if (VAR_13->am_depth)
  VAR_14 |= VAR_10;

 if (VAR_13->vib_depth)
  VAR_14 |= VAR_11;

 if (VAR_13->rhythm) {
  VAR_14 |= VAR_5;
  VAR_12->rhythm = 1;
 } else {
  VAR_12->rhythm = 0;
 }

 if (VAR_13->bass)
  VAR_14 |= VAR_0;
 if (VAR_13->snare)
  VAR_14 |= VAR_8;
 if (VAR_13->tomtom)
  VAR_14 |= VAR_9;
 if (VAR_13->cymbal)
  VAR_14 |= VAR_1;
 if (VAR_13->hihat)
  VAR_14 |= VAR_2;

 VAR_12->command(VAR_12, VAR_4 | VAR_7, VAR_14);
 return 0;
}
