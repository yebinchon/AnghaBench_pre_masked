
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * saved; int write_mask; int direction; int (* set_mask ) (struct snd_ice1712*,int ) ;int (* set_dir ) (struct snd_ice1712*,int ) ;} ;
struct snd_ice1712 {int gpio_mutex; TYPE_1__ gpio; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_ice1712*,int ) ;
 int FUNC_2 (struct snd_ice1712*,int ) ;

__attribute__((used)) static inline void FUNC_3(struct snd_ice1712 *VAR_0)
{
 VAR_0->gpio.set_dir(VAR_0, VAR_0->gpio.saved[0]);
 VAR_0->gpio.set_mask(VAR_0, VAR_0->gpio.saved[1]);
 VAR_0->gpio.direction = VAR_0->gpio.saved[0];
 VAR_0->gpio.write_mask = VAR_0->gpio.saved[1];
 FUNC_0(&VAR_0->gpio_mutex);
}
