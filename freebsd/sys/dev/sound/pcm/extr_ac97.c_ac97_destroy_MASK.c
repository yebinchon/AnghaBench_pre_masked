
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ac97_info {int lock; int * methods; } ;


 int VAR_0 ;
 int FUNC_0 (struct ac97_info*,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void
FUNC_4(struct ac97_info *VAR_1)
{
 FUNC_3(VAR_1->lock);
 if (VAR_1->methods != ((void*)0))
  FUNC_1(VAR_1->methods, VAR_0);
 FUNC_2(VAR_1->lock);
 FUNC_0(VAR_1, VAR_0);
}
