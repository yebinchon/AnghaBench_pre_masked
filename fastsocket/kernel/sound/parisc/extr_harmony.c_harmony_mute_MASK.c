
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_harmony {int mixer_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_harmony*) ;
 int FUNC_1 (struct snd_harmony*,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_4(struct snd_harmony *VAR_2)
{
 unsigned long VAR_3;

 FUNC_2(&VAR_2->mixer_lock, VAR_3);
 FUNC_0(VAR_2);
 FUNC_1(VAR_2, VAR_0, VAR_1);
 FUNC_3(&VAR_2->mixer_lock, VAR_3);
}
