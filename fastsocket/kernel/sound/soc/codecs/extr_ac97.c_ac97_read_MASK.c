
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_codec {int ac97; } ;
struct TYPE_2__ {unsigned int (* read ) (int ,unsigned int) ;} ;


 TYPE_1__ VAR_0 ;
 unsigned int FUNC_0 (int ,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_1(struct snd_soc_codec *VAR_1,
 unsigned int VAR_2)
{
 return VAR_0.read(VAR_1->ac97, VAR_2);
}
