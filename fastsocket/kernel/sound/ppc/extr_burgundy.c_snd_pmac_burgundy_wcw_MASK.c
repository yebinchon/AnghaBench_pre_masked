
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pmac {TYPE_1__* awacs; } ;
struct TYPE_2__ {int codec_ctrl; } ;


 int FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (struct snd_pmac*) ;

__attribute__((used)) static void
FUNC_2(struct snd_pmac *VAR_0, unsigned VAR_1, unsigned VAR_2)
{
 FUNC_0(&VAR_0->awacs->codec_ctrl, VAR_1 + 0x200c00 + (VAR_2 & 0xff));
 FUNC_1(VAR_0);
 FUNC_0(&VAR_0->awacs->codec_ctrl, VAR_1 + 0x200d00 +((VAR_2>>8) & 0xff));
 FUNC_1(VAR_0);
 FUNC_0(&VAR_0->awacs->codec_ctrl, VAR_1 + 0x200e00 +((VAR_2>>16) & 0xff));
 FUNC_1(VAR_0);
 FUNC_0(&VAR_0->awacs->codec_ctrl, VAR_1 + 0x200f00 +((VAR_2>>24) & 0xff));
 FUNC_1(VAR_0);
}
