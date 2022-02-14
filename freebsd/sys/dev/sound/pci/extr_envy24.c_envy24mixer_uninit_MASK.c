
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mixer {int dummy; } ;
struct sc_info {int dev; } ;


 int FUNC_0 (int ,char*) ;
 struct sc_info* FUNC_1 (struct snd_mixer*) ;

__attribute__((used)) static int
FUNC_2(struct snd_mixer *VAR_0)
{
 struct sc_info *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1 == ((void*)0))
  return -1;




 return 0;
}
