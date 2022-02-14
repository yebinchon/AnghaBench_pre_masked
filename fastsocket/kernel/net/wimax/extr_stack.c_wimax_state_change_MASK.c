
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wimax_dev {scalar_t__ state; int mutex; } ;
typedef enum wimax_st { ____Placeholder_wimax_st } wimax_st ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct wimax_dev*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct wimax_dev *VAR_1, enum wimax_st VAR_2)
{
 FUNC_1(&VAR_1->mutex);
 if (VAR_1->state > VAR_0)
  FUNC_0(VAR_1, VAR_2);
 FUNC_2(&VAR_1->mutex);
 return;
}
