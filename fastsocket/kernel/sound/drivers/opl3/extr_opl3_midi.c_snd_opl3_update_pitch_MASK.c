
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_opl3_voice {unsigned char keyon_reg; scalar_t__ time; int * chan; int note; } ;
struct snd_opl3 {int use_time; int (* command ) (struct snd_opl3*,unsigned short,unsigned char) ;struct snd_opl3_voice* voices; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned short VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned short VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,unsigned char*,int ,int *) ;
 int FUNC_2 (struct snd_opl3*,unsigned short,unsigned char) ;
 int FUNC_3 (struct snd_opl3*,unsigned short,unsigned char) ;

__attribute__((used)) static void FUNC_4(struct snd_opl3 *VAR_7, int VAR_8)
{
 unsigned short VAR_9;
 unsigned char VAR_10;
 unsigned short VAR_11;

 unsigned char VAR_12, VAR_13;

 struct snd_opl3_voice *VAR_14;

 if (FUNC_0(VAR_8 >= VAR_1))
  return;

 VAR_14 = &VAR_7->voices[VAR_8];
 if (VAR_14->chan == ((void*)0))
  return;

 if (VAR_8 < VAR_0) {

  VAR_9 = VAR_3;
  VAR_10 = VAR_8;
 } else {

  VAR_9 = VAR_6;
  VAR_10 = VAR_8 - VAR_0;
 }

 FUNC_1(&VAR_12, &VAR_13, VAR_14->note, VAR_14->chan);


 VAR_11 = VAR_9 | (VAR_4 + VAR_10);
 VAR_7->command(VAR_7, VAR_11, VAR_12);

 VAR_14->keyon_reg = VAR_13;


 VAR_13 |= VAR_2;


 VAR_11 = VAR_9 | (VAR_5 + VAR_10);
 VAR_7->command(VAR_7, VAR_11, VAR_13);

 VAR_14->time = VAR_7->use_time++;
}
