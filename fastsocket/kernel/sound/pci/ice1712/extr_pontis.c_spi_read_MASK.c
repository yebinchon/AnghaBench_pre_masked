
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int write_mask; int direction; } ;
struct snd_ice1712 {TYPE_1__ gpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_ice1712*,int,int) ;
 int FUNC_1 (struct snd_ice1712*,int) ;
 int FUNC_2 (struct snd_ice1712*,int) ;
 unsigned int FUNC_3 (struct snd_ice1712*) ;
 int FUNC_4 (struct snd_ice1712*,unsigned int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static unsigned int FUNC_6(struct snd_ice1712 *VAR_3, unsigned int VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6;
 FUNC_1(VAR_3, VAR_1|VAR_2|VAR_0);
 FUNC_2(VAR_3, ~(VAR_1|VAR_2|VAR_0));
 FUNC_0(VAR_3, VAR_1, 0);
 FUNC_4(VAR_3, VAR_4 & ~1);
 FUNC_4(VAR_3, VAR_5);

 FUNC_0(VAR_3, VAR_1, 1);
 FUNC_5(1);
 FUNC_0(VAR_3, VAR_1, 0);
 FUNC_4(VAR_3, VAR_4 | 1);
 VAR_6 = FUNC_3(VAR_3);

 FUNC_0(VAR_3, VAR_1, 1);
 FUNC_5(1);

 FUNC_2(VAR_3, VAR_3->gpio.write_mask);
 FUNC_1(VAR_3, VAR_3->gpio.direction);
 return VAR_6;
}
