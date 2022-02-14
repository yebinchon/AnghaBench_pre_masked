
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int * build_ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_ac97*,int,int) ;

__attribute__((used)) static int FUNC_1(struct snd_ac97 * VAR_1)
{
 VAR_1->build_ops = &VAR_0;

 FUNC_0(VAR_1, 0x6a, 0x0050);
 FUNC_0(VAR_1, 0x6c, 0x0030);
 return 0;
}
