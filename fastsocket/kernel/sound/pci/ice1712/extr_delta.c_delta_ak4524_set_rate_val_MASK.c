
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int gpio_mutex; } ;
struct snd_akm4xxx {struct snd_ice1712** private_data; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_akm4xxx*,int) ;
 unsigned char FUNC_3 (struct snd_ice1712*,int ) ;
 int FUNC_4 (struct snd_ice1712*,int ,unsigned char) ;

__attribute__((used)) static void FUNC_5(struct snd_akm4xxx *VAR_2, unsigned int VAR_3)
{
 unsigned char VAR_4, VAR_5;
 struct snd_ice1712 *VAR_6 = VAR_2->private_data[0];

 if (VAR_3 == 0)
  return;


 FUNC_0(&VAR_6->gpio_mutex);
 VAR_4 = FUNC_3(VAR_6, VAR_1);
 FUNC_1(&VAR_6->gpio_mutex);
 VAR_5 = VAR_4 & ~VAR_0;
 if (VAR_3 > 48000)
  VAR_5 |= VAR_0;
 if (VAR_4 == VAR_5)
  return;


 FUNC_2(VAR_2, 1);
 FUNC_0(&VAR_6->gpio_mutex);
 VAR_4 = FUNC_3(VAR_6, VAR_1) & ~VAR_0;
 if (VAR_3 > 48000)
  VAR_4 |= VAR_0;
 FUNC_4(VAR_6, VAR_1, VAR_4);
 FUNC_1(&VAR_6->gpio_mutex);
 FUNC_2(VAR_2, 0);
}
