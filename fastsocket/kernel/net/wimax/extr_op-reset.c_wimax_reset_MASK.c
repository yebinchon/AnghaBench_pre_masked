
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wimax_dev {int state; int (* op_reset ) (struct wimax_dev*) ;int net_dev; int mutex_reset; int mutex; } ;
struct device {int dummy; } ;
typedef enum wimax_st { ____Placeholder_wimax_st } wimax_st ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct device*,char*,struct wimax_dev*,int) ;
 int FUNC_1 (int,struct device*,char*,struct wimax_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct wimax_dev*) ;
 struct device* FUNC_8 (struct wimax_dev*) ;

int FUNC_9(struct wimax_dev *VAR_2)
{
 int VAR_3 = -VAR_0;
 struct device *VAR_4 = FUNC_8(VAR_2);
 enum wimax_st VAR_5;

 FUNC_4();
 FUNC_1(3, VAR_4, "(wimax_dev %p)\n", VAR_2);
 FUNC_5(&VAR_2->mutex);
 FUNC_2(VAR_2->net_dev);
 VAR_5 = VAR_2->state;
 FUNC_6(&VAR_2->mutex);

 if (VAR_5 >= VAR_1) {
  FUNC_5(&VAR_2->mutex_reset);
  VAR_3 = VAR_2->op_reset(VAR_2);
  FUNC_6(&VAR_2->mutex_reset);
 }
 FUNC_3(VAR_2->net_dev);

 FUNC_0(3, VAR_4, "(wimax_dev %p) = %d\n", VAR_2, VAR_3);
 return VAR_3;
}
