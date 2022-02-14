
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int name; int list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ) ;

void FUNC_4(struct snd_soc_dai *VAR_1)
{
 FUNC_1(&VAR_0);
 FUNC_0(&VAR_1->list);
 FUNC_2(&VAR_0);

 FUNC_3("Unregistered DAI '%s'\n", VAR_1->name);
}
