
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_opl3 {scalar_t__ fm_mode; int (* command ) (struct snd_opl3*,unsigned short,unsigned char) ;} ;
struct snd_dm_fm_note {unsigned char voice; int fnum; int octave; scalar_t__ key_on; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned short VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned short VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct snd_opl3*,unsigned short,unsigned char) ;
 int FUNC_1 (struct snd_opl3*,unsigned short,unsigned char) ;

__attribute__((used)) static int FUNC_2(struct snd_opl3 * VAR_11, struct snd_dm_fm_note * VAR_12)
{
 unsigned short VAR_13;
 unsigned char VAR_14;

 unsigned short VAR_15;
 unsigned char VAR_16;



 if (VAR_12->voice >= ((VAR_11->fm_mode == VAR_10) ?
       VAR_2 : VAR_1))
  return -VAR_0;


 if (VAR_12->voice < VAR_1) {

  VAR_13 = VAR_6;
  VAR_14 = VAR_12->voice;
 } else {

  VAR_13 = VAR_9;
  VAR_14 = VAR_12->voice - VAR_1;
 }


 VAR_16 = (unsigned char) VAR_12->fnum;
 VAR_15 = VAR_13 | (VAR_7 + VAR_14);
 VAR_11->command(VAR_11, VAR_15, VAR_16);

 VAR_16 = 0x00;

 if (VAR_12->key_on)
  VAR_16 |= VAR_5;

 VAR_16 |= (VAR_12->octave << 2) & VAR_3;

 VAR_16 |= (unsigned char) (VAR_12->fnum >> 8) & VAR_4;


 VAR_15 = VAR_13 | (VAR_8 + VAR_14);
 VAR_11->command(VAR_11, VAR_15, VAR_16);

 return 0;
}
