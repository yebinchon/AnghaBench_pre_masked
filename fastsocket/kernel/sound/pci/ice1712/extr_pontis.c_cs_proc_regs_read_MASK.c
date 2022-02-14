
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_entry {scalar_t__ private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct snd_ice1712 {int gpio_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_info_buffer*,char*,int,int) ;
 int FUNC_3 (struct snd_ice1712*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct snd_info_entry *VAR_1, struct snd_info_buffer *VAR_2)
{
 struct snd_ice1712 *VAR_3 = (struct snd_ice1712 *)VAR_1->private_data;
 int VAR_4, VAR_5;

 FUNC_0(&VAR_3->gpio_mutex);
 for (VAR_4 = 0; VAR_4 <= 0x26; VAR_4++) {
  VAR_5 = FUNC_3(VAR_3, VAR_0, VAR_4);
  FUNC_2(VAR_2, "%02x = %02x\n", VAR_4, VAR_5);
 }
 VAR_5 = FUNC_3(VAR_3, VAR_0, 0x7f);
 FUNC_2(VAR_2, "%02x = %02x\n", 0x7f, VAR_5);
 FUNC_1(&VAR_3->gpio_mutex);
}
