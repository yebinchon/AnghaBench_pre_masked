
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int (* get_data ) (struct snd_ice1712*) ;} ;
struct snd_ice1712 {TYPE_1__ gpio; } ;


 unsigned int FUNC_0 (struct snd_ice1712*) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct snd_ice1712 *VAR_0)
{
 return VAR_0->gpio.get_data(VAR_0);
}
