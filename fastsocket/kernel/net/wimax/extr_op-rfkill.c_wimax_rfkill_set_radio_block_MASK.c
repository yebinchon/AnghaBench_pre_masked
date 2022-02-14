
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wimax_dev {scalar_t__ state; int mutex; } ;
struct device {int dummy; } ;
typedef enum wimax_rf_state { ____Placeholder_wimax_rf_state } wimax_rf_state ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct wimax_dev*,int) ;
 int FUNC_1 (int,struct device*,char*,struct wimax_dev*,int,int) ;
 int FUNC_2 (int,struct device*,char*,struct wimax_dev*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct device* FUNC_5 (struct wimax_dev*) ;

__attribute__((used)) static int FUNC_6(void *VAR_3, bool VAR_4)
{
 int VAR_5;
 struct wimax_dev *VAR_6 = VAR_3;
 struct device *VAR_7 = FUNC_5(VAR_6);
 enum wimax_rf_state VAR_8;

 FUNC_2(3, VAR_7, "(wimax_dev %p blocked %u)\n", VAR_6, VAR_4);
 VAR_8 = VAR_1;
 if (VAR_4)
  VAR_8 = VAR_0;
 FUNC_3(&VAR_6->mutex);
 if (VAR_6->state <= VAR_2)
  VAR_5 = 0;
 else
  VAR_5 = FUNC_0(VAR_6, VAR_8);
 FUNC_4(&VAR_6->mutex);
 FUNC_1(3, VAR_7, "(wimax_dev %p blocked %u) = %d\n",
  VAR_6, VAR_4, VAR_5);
 return VAR_5;
}
