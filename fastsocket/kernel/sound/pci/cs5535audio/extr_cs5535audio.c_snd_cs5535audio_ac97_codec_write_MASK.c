
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {struct cs5535audio* private_data; } ;
struct cs5535audio {int dummy; } ;


 int FUNC_0 (struct cs5535audio*,unsigned short,unsigned short) ;

__attribute__((used)) static void FUNC_1(struct snd_ac97 *VAR_0,
          unsigned short VAR_1, unsigned short VAR_2)
{
 struct cs5535audio *VAR_3 = VAR_0->private_data;
 FUNC_0(VAR_3, VAR_1, VAR_2);
}
