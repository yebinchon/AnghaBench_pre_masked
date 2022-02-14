
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct snd_mixer {int lock; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct snd_mixer*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int
FUNC_4(struct snd_mixer *VAR_0, u_int VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_0 != ((void*)0), ("NULL snd_mixer"));

 FUNC_2(VAR_0->lock);
 VAR_2 = FUNC_1(VAR_0, VAR_1);
 FUNC_3(VAR_0->lock);

 return (VAR_2);
}
