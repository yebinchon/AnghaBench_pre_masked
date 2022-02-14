
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_gus_card {int card; int ace_flag; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,struct snd_gus_card*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct snd_gus_card *VAR_1)
{
 if (!VAR_1->ace_flag)
  FUNC_0(VAR_1->card, FUNC_1(&VAR_0, VAR_1));
}
