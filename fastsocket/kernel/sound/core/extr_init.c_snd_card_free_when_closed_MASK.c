
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card {int free_on_last_close; int files_lock; int files_list; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct snd_card*) ;
 int FUNC_2 (struct snd_card*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct snd_card *VAR_0)
{
 int VAR_1 = 0;
 int VAR_2 = FUNC_1(VAR_0);
 if (VAR_2)
  return VAR_2;

 FUNC_3(&VAR_0->files_lock);
 if (FUNC_0(&VAR_0->files_list))
  VAR_1 = 1;
 else
  VAR_0->free_on_last_close = 1;
 FUNC_4(&VAR_0->files_lock);

 if (VAR_1)
  FUNC_2(VAR_0);
 return 0;
}
