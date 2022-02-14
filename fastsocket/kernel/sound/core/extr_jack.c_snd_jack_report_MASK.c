
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_jack {int type; int input_dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 int * VAR_0 ;

void FUNC_3(struct snd_jack *VAR_1, int VAR_2)
{
 int VAR_3;

 if (!VAR_1)
  return;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  int VAR_4 = 1 << VAR_3;
  if (VAR_1->type & VAR_4)
   FUNC_1(VAR_1->input_dev, VAR_0[VAR_3],
         VAR_2 & VAR_4);
 }

 FUNC_2(VAR_1->input_dev);
}
