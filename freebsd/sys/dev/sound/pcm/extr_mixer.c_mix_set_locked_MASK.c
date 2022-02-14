
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct snd_mixer {int dummy; } ;


 int FUNC_0 (struct snd_mixer*,int ,int) ;

int
FUNC_1(struct snd_mixer *VAR_0, u_int VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = (VAR_2 & 0xFF) | ((VAR_3 & 0xFF) << 8);

 return (FUNC_0(VAR_0, VAR_1, VAR_4));
}
