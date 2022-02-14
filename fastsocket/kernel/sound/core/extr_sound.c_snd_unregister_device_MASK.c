
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,struct snd_card*,int) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int ** VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_6(int VAR_5, struct snd_card *VAR_6, int VAR_7)
{
 int VAR_8;

 FUNC_4(&VAR_4);
 VAR_8 = FUNC_2(VAR_5, VAR_6, VAR_7);
 if (VAR_8 < 0) {
  FUNC_5(&VAR_4);
  return -VAR_0;
 }

 FUNC_1(VAR_3, FUNC_0(VAR_1, VAR_8));

 FUNC_3(VAR_2[VAR_8]);
 VAR_2[VAR_8] = ((void*)0);
 FUNC_5(&VAR_4);
 return 0;
}
