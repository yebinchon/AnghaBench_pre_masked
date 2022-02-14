
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_bo_device {int wq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int) ;
 int VAR_1 ;

void FUNC_1(struct ttm_bo_device *VAR_2, int VAR_3)
{
 if (VAR_3) {
  FUNC_0(VAR_1, &VAR_2->wq,
      ((VAR_0 / 100) < 1) ? 1 : VAR_0 / 100);
 }
}
