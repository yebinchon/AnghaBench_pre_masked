
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int gpio_mutex; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned char FUNC_2 (struct snd_ice1712*,int ) ;
 int FUNC_3 (struct snd_ice1712*,int ,unsigned char) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct snd_ice1712 *VAR_3, unsigned char VAR_4)
{
 unsigned char VAR_5, VAR_6, VAR_7;
 int VAR_8;

 VAR_6 = VAR_0;
 VAR_7 = VAR_1;
 FUNC_0(&VAR_3->gpio_mutex);
 VAR_5 = FUNC_2(VAR_3, VAR_2);
 for (VAR_8 = 7; VAR_8 >= 0; VAR_8--) {
  VAR_5 &= ~(VAR_6 | VAR_7);
  if (VAR_4 & (1 << VAR_8))
   VAR_5 |= VAR_7;
  FUNC_3(VAR_3, VAR_2, VAR_5);
  FUNC_4(100);
  VAR_5 |= VAR_6;
  FUNC_3(VAR_3, VAR_2, VAR_5);
  FUNC_4(100);
 }
 VAR_5 &= ~VAR_6;
 FUNC_3(VAR_3, VAR_2, VAR_5);
 FUNC_1(&VAR_3->gpio_mutex);
}
