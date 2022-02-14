
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_ymfpci {scalar_t__ device_id; int rev; } ;
struct snd_ac97 {struct snd_ymfpci* private_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct snd_ymfpci*,int ) ;
 int FUNC_1 (struct snd_ymfpci*,int ) ;
 int FUNC_2 (struct snd_ymfpci*,int ,int) ;

__attribute__((used)) static u16 FUNC_3(struct snd_ac97 *VAR_4, u16 VAR_5)
{
 struct snd_ymfpci *VAR_6 = VAR_4->private_data;

 if (FUNC_0(VAR_6, 0))
  return ~0;
 FUNC_2(VAR_6, VAR_1, VAR_3 | VAR_5);
 if (FUNC_0(VAR_6, 0))
  return ~0;
 if (VAR_6->device_id == VAR_0 && VAR_6->rev < 2) {
  int VAR_7;
  for (VAR_7 = 0; VAR_7 < 600; VAR_7++)
   FUNC_1(VAR_6, VAR_2);
 }
 return FUNC_1(VAR_6, VAR_2);
}
