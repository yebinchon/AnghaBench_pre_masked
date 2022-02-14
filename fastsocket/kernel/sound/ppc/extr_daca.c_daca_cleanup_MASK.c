
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pmac {struct pmac_daca* mixer_data; } ;
struct pmac_daca {int i2c; } ;


 int FUNC_0 (struct pmac_daca*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct snd_pmac *VAR_0)
{
 struct pmac_daca *VAR_1 = VAR_0->mixer_data;
 if (! VAR_1)
  return;
 FUNC_1(&VAR_1->i2c);
 FUNC_0(VAR_1);
 VAR_0->mixer_data = ((void*)0);
}
