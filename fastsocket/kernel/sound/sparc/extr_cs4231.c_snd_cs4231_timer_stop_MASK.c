
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_timer {int dummy; } ;
struct snd_cs4231 {int lock; int * image; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_cs4231*,size_t,int ) ;
 struct snd_cs4231* FUNC_1 (struct snd_timer*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct snd_timer *VAR_2)
{
 unsigned long VAR_3;
 struct snd_cs4231 *VAR_4 = FUNC_1(VAR_2);

 FUNC_2(&VAR_4->lock, VAR_3);
 VAR_4->image[VAR_0] &= ~VAR_1;
 FUNC_0(VAR_4, VAR_0,
         VAR_4->image[VAR_0]);
 FUNC_3(&VAR_4->lock, VAR_3);

 return 0;
}
