
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int dummy; } ;
struct snd_akm4xxx {struct snd_ice1712** private_data; scalar_t__* private_value; } ;
struct snd_ak4xxx_private {int cs_addr; int cs_mask; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_ice1712*) ;

__attribute__((used)) static void FUNC_1(struct snd_akm4xxx *VAR_1, int VAR_2)
{
        struct snd_ak4xxx_private *VAR_3 = (void *)VAR_1->private_value[0];
        struct snd_ice1712 *VAR_4 = VAR_1->private_data[0];

 FUNC_0(VAR_4);
 VAR_3->cs_mask = VAR_0;
 VAR_3->cs_addr = VAR_2 << 4;
}
