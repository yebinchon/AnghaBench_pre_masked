
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wimax_dev {int rfkill; } ;
struct device {int dummy; } ;


 int FUNC_0 (int,struct device*,char*,struct wimax_dev*) ;
 int FUNC_1 (int,struct device*,char*,struct wimax_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct device* FUNC_4 (struct wimax_dev*) ;

void FUNC_5(struct wimax_dev *VAR_0)
{
 struct device *VAR_1 = FUNC_4(VAR_0);
 FUNC_1(3, VAR_1, "(wimax_dev %p)\n", VAR_0);
 FUNC_3(VAR_0->rfkill);
 FUNC_2(VAR_0->rfkill);
 FUNC_0(3, VAR_1, "(wimax_dev %p)\n", VAR_0);
}
