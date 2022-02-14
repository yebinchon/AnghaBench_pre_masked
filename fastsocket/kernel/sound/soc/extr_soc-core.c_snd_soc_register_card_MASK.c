
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_card {int name; int dev; int list; scalar_t__ instantiated; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct snd_soc_card *VAR_3)
{
 if (!VAR_3->name || !VAR_3->dev)
  return -VAR_0;

 FUNC_0(&VAR_3->list);
 VAR_3->instantiated = 0;

 FUNC_3(&VAR_2);
 FUNC_2(&VAR_3->list, &VAR_1);
 FUNC_5();
 FUNC_4(&VAR_2);

 FUNC_1(VAR_3->dev, "Registered card '%s'\n", VAR_3->name);

 return 0;
}
