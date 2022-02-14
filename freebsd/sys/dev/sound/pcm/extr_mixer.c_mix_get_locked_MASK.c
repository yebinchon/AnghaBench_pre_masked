
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct snd_mixer {int dummy; } ;


 int FUNC_0 (struct snd_mixer*,int ) ;

int
FUNC_1(struct snd_mixer *VAR_0, u_int VAR_1, int *VAR_2, int *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1);
 if (VAR_4 < 0) {
  *VAR_3 = *VAR_2 = -1;
  return (-1);
 }

 *VAR_2 = VAR_4 & 0xFF;
 *VAR_3 = (VAR_4 >> 8) & 0xFF;

 return (0);
}
