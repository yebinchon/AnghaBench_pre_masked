
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ac97 {TYPE_1__* bus; } ;
struct TYPE_2__ {unsigned int clock; } ;


 unsigned short FUNC_0 (struct snd_ac97*,int) ;
 int FUNC_1 (struct snd_ac97*,int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct snd_ac97 *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 unsigned short VAR_4;
 unsigned int VAR_5;

 VAR_5 = ((unsigned int)VAR_3 * VAR_0->bus->clock) / 48000;
 FUNC_1(VAR_0, VAR_1, VAR_5 & 0xffff);
 if (VAR_2)
  FUNC_1(VAR_0, VAR_2, VAR_5 & 0xffff);
 VAR_4 = FUNC_0(VAR_0, VAR_1);
 return VAR_4 == (VAR_5 & 0xffff);
}
