
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pmac {int reg_lock; TYPE_1__* awacs; } ;
struct TYPE_2__ {int codec_stat; int codec_ctrl; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (struct snd_pmac*) ;
 int FUNC_3 (struct snd_pmac*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static unsigned
FUNC_6(struct snd_pmac *VAR_0, unsigned int VAR_1)
{
 unsigned VAR_2 = 0;
 unsigned long VAR_3;

 FUNC_4(&VAR_0->reg_lock, VAR_3);

 FUNC_1(&VAR_0->awacs->codec_ctrl, VAR_1 + 0x100000);
 FUNC_2(VAR_0);
 FUNC_3(VAR_0);
 VAR_2 += (FUNC_0(&VAR_0->awacs->codec_stat) >> 4) & 0xff;

 FUNC_5(&VAR_0->reg_lock, VAR_3);

 return VAR_2;
}
