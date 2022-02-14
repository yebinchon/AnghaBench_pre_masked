
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_wss {int reg_lock; int * image; } ;
struct snd_timer {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 struct snd_wss* FUNC_0 (struct snd_timer*) ;
 int FUNC_1 (struct snd_wss*,size_t,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct snd_timer *VAR_2)
{
 unsigned long VAR_3;
 struct snd_wss *VAR_4 = FUNC_0(VAR_2);
 FUNC_2(&VAR_4->reg_lock, VAR_3);
 VAR_4->image[VAR_0] &= ~VAR_1;
 FUNC_1(VAR_4, VAR_0,
      VAR_4->image[VAR_0]);
 FUNC_3(&VAR_4->reg_lock, VAR_3);
 return 0;
}
