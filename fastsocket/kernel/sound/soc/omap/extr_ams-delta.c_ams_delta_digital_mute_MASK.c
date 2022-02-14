
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_4, int VAR_5)
{
 int VAR_6;

 if (VAR_2 == VAR_5)
  return 0;

 FUNC_1(&VAR_1);
 VAR_2 = VAR_5;
 VAR_6 = !VAR_3;
 FUNC_2(&VAR_1);

 if (VAR_6)
  FUNC_0(VAR_0,
    VAR_5 ? VAR_0 : 0);
 return 0;
}
