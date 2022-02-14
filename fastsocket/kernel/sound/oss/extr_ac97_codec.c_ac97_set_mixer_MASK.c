
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ac97_codec {unsigned int* mixer_state; int (* write_mixer ) (struct ac97_codec*,unsigned int,unsigned int,unsigned int) ;} ;


 int FUNC_0 (struct ac97_codec*,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct ac97_codec *VAR_0, unsigned int VAR_1, unsigned int VAR_2 )
{
 unsigned int VAR_3,VAR_4;


 VAR_4 = ((VAR_2 >> 8) & 0xff) ;
 VAR_3 = (VAR_2 & 0xff) ;

 if (VAR_4 > 100) VAR_4 = 100;
 if (VAR_3 > 100) VAR_3 = 100;

 VAR_0->mixer_state[VAR_1] = (VAR_4 << 8) | VAR_3;
 VAR_0->write_mixer(VAR_0, VAR_1, VAR_3, VAR_4);
}
