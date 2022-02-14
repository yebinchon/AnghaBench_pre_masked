
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_midi {int dummy; } ;
struct mpu401 {int cookie; } ;


 int FUNC_0 (struct mpu401*,int ) ;

int
FUNC_1(struct snd_midi *VAR_0, void *VAR_1)
{
 struct mpu401 *VAR_2 = VAR_1;

 return FUNC_0(VAR_2, VAR_2->cookie);
}
