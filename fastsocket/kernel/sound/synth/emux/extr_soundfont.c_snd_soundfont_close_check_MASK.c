
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sf_list {int open_client; int lock; } ;


 int FUNC_0 (struct snd_sf_list*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int
FUNC_3(struct snd_sf_list *VAR_0, int VAR_1)
{
 unsigned long VAR_2;
 FUNC_1(&VAR_0->lock, VAR_2);
 if (VAR_0->open_client == VAR_1) {
  FUNC_2(&VAR_0->lock, VAR_2);
  return FUNC_0(VAR_0);
 }
 FUNC_2(&VAR_0->lock, VAR_2);
 return 0;
}
