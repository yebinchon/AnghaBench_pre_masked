
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_opl3_drum_voice {size_t voice; size_t op; int wave_select; int feedback_connection; int sustain_release; int attack_decay; int ksl_level; int am_vib; } ;
struct snd_opl3 {int (* command ) (struct snd_opl3*,unsigned short,int ) ;} ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char** VAR_7 ;
 int FUNC_0 (struct snd_opl3*,unsigned short,int ) ;
 int FUNC_1 (struct snd_opl3*,unsigned short,int ) ;
 int FUNC_2 (struct snd_opl3*,unsigned short,int ) ;
 int FUNC_3 (struct snd_opl3*,unsigned short,int ) ;
 int FUNC_4 (struct snd_opl3*,unsigned short,int ) ;
 int FUNC_5 (struct snd_opl3*,unsigned short,int ) ;

__attribute__((used)) static void FUNC_6(struct snd_opl3 *VAR_8,
        struct snd_opl3_drum_voice *VAR_9)
{
 unsigned char VAR_10 = VAR_7[VAR_9->voice][VAR_9->op];
 unsigned char VAR_11 = VAR_9->voice;
 unsigned short VAR_12;


 VAR_12 = VAR_0 | (VAR_1 + VAR_10);
 VAR_8->command(VAR_8, VAR_12, VAR_9->am_vib);


 VAR_12 = VAR_0 | (VAR_4 + VAR_10);
 VAR_8->command(VAR_8, VAR_12, VAR_9->ksl_level);


 VAR_12 = VAR_0 | (VAR_2 + VAR_10);
 VAR_8->command(VAR_8, VAR_12, VAR_9->attack_decay);


 VAR_12 = VAR_0 | (VAR_5 + VAR_10);
 VAR_8->command(VAR_8, VAR_12, VAR_9->sustain_release);


 VAR_12 = VAR_0 | (VAR_3 + VAR_11);
 VAR_8->command(VAR_8, VAR_12, VAR_9->feedback_connection);


 VAR_12 = VAR_0 | (VAR_6 + VAR_10);
 VAR_8->command(VAR_8, VAR_12, VAR_9->wave_select);
}
