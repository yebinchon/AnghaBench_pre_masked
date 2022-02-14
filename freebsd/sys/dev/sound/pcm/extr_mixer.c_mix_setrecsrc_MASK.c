
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct snd_mixer {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct snd_mixer*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int
FUNC_4(struct snd_mixer *VAR_1, u_int32_t VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_1 != ((void*)0), ("NULL snd_mixer"));

 FUNC_2(VAR_1->lock);
 VAR_3 = FUNC_1(VAR_1, VAR_2);
 FUNC_3(VAR_1->lock);

 return ((VAR_3 != 0) ? VAR_0 : 0);
}
