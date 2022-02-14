
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct snd_ac97*) ;
 scalar_t__ FUNC_1 (struct snd_ac97*) ;
 int FUNC_2 (struct snd_ac97*,int ,int,int) ;

__attribute__((used)) static void FUNC_3(struct snd_ac97 *VAR_1)
{

 FUNC_2(VAR_1, VAR_0, 1 << 10,
        FUNC_1(VAR_1) ? (1 << 10) : 0);

 FUNC_2(VAR_1, VAR_0, 0x3000,
        FUNC_0(VAR_1) ? 0x1000 : 0x2000);
}
