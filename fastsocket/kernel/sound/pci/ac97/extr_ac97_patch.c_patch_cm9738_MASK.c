
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int flags; int * build_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_ac97*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct snd_ac97 * VAR_3)
{
 VAR_3->build_ops = &VAR_2;


 VAR_3->flags |= VAR_0;
 FUNC_0(VAR_3, VAR_1, 0x8000);

 return 0;
}
