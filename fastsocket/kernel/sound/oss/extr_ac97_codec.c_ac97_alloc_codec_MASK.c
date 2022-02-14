
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ac97_codec {int list; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct ac97_codec* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

struct ac97_codec *FUNC_3(void)
{
 struct ac97_codec *VAR_1 = FUNC_1(sizeof(struct ac97_codec), VAR_0);
 if(!VAR_1)
  return ((void*)0);

 FUNC_2(&VAR_1->lock);
 FUNC_0(&VAR_1->list);
 return VAR_1;
}
