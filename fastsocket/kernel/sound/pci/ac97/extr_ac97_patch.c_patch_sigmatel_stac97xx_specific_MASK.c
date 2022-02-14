
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_ac97*,int *,int) ;
 int FUNC_1 (struct snd_ac97*,int ) ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct snd_ac97*,int ,int) ;
 int FUNC_3 (struct snd_ac97*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct snd_ac97 * VAR_5)
{
 int VAR_6;

 FUNC_3(VAR_5, VAR_0, FUNC_1(VAR_5, VAR_0) & ~0x0003);
 if (FUNC_2(VAR_5, VAR_0, 1))
  if ((VAR_6 = FUNC_0(VAR_5, &VAR_3[0], 1)) < 0)
   return VAR_6;
 if (FUNC_2(VAR_5, VAR_0, 0))
  if ((VAR_6 = FUNC_0(VAR_5, &VAR_3[1], 1)) < 0)
   return VAR_6;
 if (FUNC_2(VAR_5, VAR_1, 2))
  if ((VAR_6 = FUNC_0(VAR_5, &VAR_2, 1)) < 0)
   return VAR_6;
 if (FUNC_2(VAR_5, VAR_1, 3))
  if ((VAR_6 = FUNC_0(VAR_5, &VAR_4, 1)) < 0)
   return VAR_6;
 return 0;
}
