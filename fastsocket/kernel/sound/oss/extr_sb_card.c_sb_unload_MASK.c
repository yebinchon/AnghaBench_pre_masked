
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sb_card_config {int mpucnf; scalar_t__ mpu; int conf; } ;


 int FUNC_0 (struct sb_card_config*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct sb_card_config *VAR_0)
{
 FUNC_1(&VAR_0->conf, 0);
 if(VAR_0->mpu)
  FUNC_2(&VAR_0->mpucnf);
 FUNC_0(VAR_0);
}
