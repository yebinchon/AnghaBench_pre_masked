
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_entry {scalar_t__ private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct snd_ice1712 {int gpio_mutex; } ;
typedef int line ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_info_buffer*,char*,int) ;
 int FUNC_3 (char*,char*,unsigned int*,unsigned int*) ;
 int FUNC_4 (struct snd_ice1712*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct snd_info_entry *VAR_0, struct snd_info_buffer *VAR_1)
{
 struct snd_ice1712 *VAR_2 = (struct snd_ice1712 *)VAR_0->private_data;
 char VAR_3[64];
 unsigned int VAR_4, VAR_5;
 FUNC_0(&VAR_2->gpio_mutex);
 while (!FUNC_2(VAR_1, VAR_3, sizeof(VAR_3))) {
  if (FUNC_3(VAR_3, "%x %x", &VAR_4, &VAR_5) != 2)
   continue;
  if (VAR_4 <= 0x17 && VAR_5 <= 0xffff)
   FUNC_4(VAR_2, VAR_4, VAR_5);
 }
 FUNC_1(&VAR_2->gpio_mutex);
}
