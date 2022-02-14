
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {struct snd_soc_codec* disc_data; } ;
struct snd_soc_codec {int dummy; } ;
struct TYPE_4__ {int pins; } ;
struct TYPE_3__ {int (* close ) (struct tty_struct*) ;} ;


 int FUNC_0 (int *) ;
 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_soc_codec*,char*) ;
 int FUNC_3 (struct snd_soc_codec*,char*) ;
 int FUNC_4 (struct snd_soc_codec*) ;
 int FUNC_5 (struct tty_struct*) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void FUNC_6(struct tty_struct *VAR_3)
{
 struct snd_soc_codec *VAR_4 = VAR_3->disc_data;

 FUNC_1(&VAR_1);

 VAR_2.close(VAR_3);


 FUNC_0(&VAR_0.pins);


 FUNC_2(VAR_4, "Mouthpiece");
 FUNC_3(VAR_4, "Earpiece");
 FUNC_3(VAR_4, "Microphone");
 FUNC_2(VAR_4, "Speaker");
 FUNC_2(VAR_4, "AGCIN");
 FUNC_4(VAR_4);
}
