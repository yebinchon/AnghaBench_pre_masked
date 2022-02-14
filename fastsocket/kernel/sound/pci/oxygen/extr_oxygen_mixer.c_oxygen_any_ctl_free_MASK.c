
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {struct oxygen* private_data; } ;
struct oxygen {int ** controls; } ;


 unsigned int FUNC_0 (int **) ;

__attribute__((used)) static void FUNC_1(struct snd_kcontrol *VAR_0)
{
 struct oxygen *VAR_1 = VAR_0->private_data;
 unsigned int VAR_2;


 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->controls); ++VAR_2)
  VAR_1->controls[VAR_2] = ((void*)0);
}
