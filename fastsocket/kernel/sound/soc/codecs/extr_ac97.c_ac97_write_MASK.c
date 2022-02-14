
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_codec {int ac97; } ;
struct TYPE_2__ {int (* write ) (int ,unsigned int,unsigned int) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_codec *VAR_1, unsigned int VAR_2,
 unsigned int VAR_3)
{
 VAR_0.write(VAR_1->ac97, VAR_2, VAR_3);
 return 0;
}
