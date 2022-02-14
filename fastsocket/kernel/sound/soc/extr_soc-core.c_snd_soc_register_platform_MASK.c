
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_platform {int name; int list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 () ;

int FUNC_6(struct snd_soc_platform *VAR_3)
{
 if (!VAR_3->name)
  return -VAR_0;

 FUNC_0(&VAR_3->list);

 FUNC_2(&VAR_1);
 FUNC_1(&VAR_3->list, &VAR_2);
 FUNC_5();
 FUNC_3(&VAR_1);

 FUNC_4("Registered platform '%s'\n", VAR_3->name);

 return 0;
}
