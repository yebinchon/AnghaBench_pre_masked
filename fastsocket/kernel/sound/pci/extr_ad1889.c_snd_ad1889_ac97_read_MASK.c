
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_ad1889 {int dummy; } ;
struct snd_ac97 {struct snd_ad1889* private_data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_ad1889*,scalar_t__) ;

__attribute__((used)) static u16
FUNC_1(struct snd_ac97 *VAR_1, unsigned short VAR_2)
{
 struct snd_ad1889 *VAR_3 = VAR_1->private_data;
 return FUNC_0(VAR_3, VAR_0 + VAR_2);
}
