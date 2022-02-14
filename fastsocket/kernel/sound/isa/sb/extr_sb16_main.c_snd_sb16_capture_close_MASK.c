
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sb {int open_lock; int mode; int * capture_substream; } ;
struct snd_pcm_substream {int dummy; } ;


 int VAR_0 ;
 struct snd_sb* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_sb*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_1)
{
 unsigned long VAR_2;
 struct snd_sb *VAR_3 = FUNC_0(VAR_1);

 FUNC_1(VAR_3);
 FUNC_2(&VAR_3->open_lock, VAR_2);
 VAR_3->capture_substream = ((void*)0);
 VAR_3->mode &= ~VAR_0;
 FUNC_3(&VAR_3->open_lock, VAR_2);
 return 0;
}
