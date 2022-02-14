
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int private_value; } ;
struct snd_ac97 {int scaps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int,int ) ;
 int FUNC_1 (struct snd_ac97*,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct snd_ac97 *VAR_2, struct snd_kcontrol *VAR_3)
{
 VAR_3->private_value = FUNC_0(VAR_0, 15, 1, 0);
 FUNC_1(VAR_2, VAR_0, (1<<15), (1<<15));
 VAR_2->scaps |= VAR_1;
}
