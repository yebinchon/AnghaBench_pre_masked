
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wimax_dev {int rf_sw; int rf_hw; int mutex; int rfkill; } ;
struct device {int dummy; } ;
typedef enum wimax_rf_state { ____Placeholder_wimax_rf_state } wimax_rf_state ;


 int VAR_0 ;



 int FUNC_0 (struct wimax_dev*,int) ;
 int FUNC_1 (int,struct device*,char*,struct wimax_dev*,int,int) ;
 int FUNC_2 (int,struct device*,char*,struct wimax_dev*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct wimax_dev*) ;
 struct device* FUNC_7 (struct wimax_dev*) ;

int FUNC_8(struct wimax_dev *VAR_1, enum wimax_rf_state VAR_2)
{
 int VAR_3;
 struct device *VAR_4 = FUNC_7(VAR_1);

 FUNC_2(3, VAR_4, "(wimax_dev %p state %u)\n", VAR_1, VAR_2);
 FUNC_3(&VAR_1->mutex);
 VAR_3 = FUNC_6(VAR_1);
 if (VAR_3 < 0)
  goto error_not_ready;
 switch (VAR_2) {
 case 129:
 case 130:
  VAR_3 = FUNC_0(VAR_1, VAR_2);
  if (VAR_3 < 0)
   goto error;
  FUNC_5(VAR_1->rfkill, VAR_2 == 130);
  break;
 case 128:
  break;
 default:
  VAR_3 = -VAR_0;
  goto error;
 }
 VAR_3 = VAR_1->rf_sw << 1 | VAR_1->rf_hw;
error:
error_not_ready:
 FUNC_4(&VAR_1->mutex);
 FUNC_1(3, VAR_4, "(wimax_dev %p state %u) = %d\n",
  VAR_1, VAR_2, VAR_3);
 return VAR_3;
}
