
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card {int files_list; int shutdown_sleep; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_card*) ;
 int FUNC_2 (struct snd_card*) ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(struct snd_card *VAR_0)
{
 int VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  return VAR_1;


 FUNC_3(VAR_0->shutdown_sleep, FUNC_0(&VAR_0->files_list));
 FUNC_2(VAR_0);
 return 0;
}
