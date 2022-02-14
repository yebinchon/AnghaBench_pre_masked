
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* unlock ) (struct snd_akm4xxx*,int) ;int (* write ) (struct snd_akm4xxx*,int,unsigned char,unsigned char) ;int (* lock ) (struct snd_akm4xxx*,int) ;} ;
struct snd_akm4xxx {TYPE_1__ ops; } ;


 int FUNC_0 (struct snd_akm4xxx*,int,unsigned char,unsigned char) ;
 int FUNC_1 (struct snd_akm4xxx*,int) ;
 int FUNC_2 (struct snd_akm4xxx*,int,unsigned char,unsigned char) ;
 int FUNC_3 (struct snd_akm4xxx*,int) ;

void FUNC_4(struct snd_akm4xxx *VAR_0, int VAR_1, unsigned char VAR_2,
         unsigned char VAR_3)
{
 VAR_0->ops.lock(VAR_0, VAR_1);
 VAR_0->ops.write(VAR_0, VAR_1, VAR_2, VAR_3);


 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 VAR_0->ops.unlock(VAR_0, VAR_1);
}
