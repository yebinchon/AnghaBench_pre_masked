
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int gpio_mutex; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned char FUNC_2 (struct snd_ice1712*,int ) ;
 int FUNC_3 (struct snd_ice1712*,int ,unsigned char) ;

__attribute__((used)) static void FUNC_4(struct snd_ice1712 *VAR_2, unsigned int VAR_3)
{
 unsigned char VAR_4, VAR_5;

 if (VAR_3 == 0)
  return;

 FUNC_0(&VAR_2->gpio_mutex);
 VAR_4 = FUNC_2(VAR_2, VAR_1);
 VAR_5 = VAR_4 & ~VAR_0;
 if (VAR_3 > 48000)
  VAR_5 |= VAR_0;
 if (VAR_4 != VAR_5)
  FUNC_3(VAR_2, VAR_1, VAR_5);
 FUNC_1(&VAR_2->gpio_mutex);
}
