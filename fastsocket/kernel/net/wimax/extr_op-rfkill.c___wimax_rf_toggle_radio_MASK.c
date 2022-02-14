
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wimax_dev {int rf_sw; int (* op_rfkill_sw_toggle ) (struct wimax_dev*,int) ;} ;
struct device {int dummy; } ;
typedef enum wimax_st { ____Placeholder_wimax_st } wimax_st ;
typedef enum wimax_rf_state { ____Placeholder_wimax_rf_state } wimax_rf_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct wimax_dev*,int) ;
 int FUNC_1 (int,struct device*,char*,struct wimax_dev*,int,int) ;
 int FUNC_2 (int,struct device*,char*,struct wimax_dev*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (struct wimax_dev*,int) ;
 struct device* FUNC_5 (struct wimax_dev*) ;

__attribute__((used)) static
int FUNC_6(struct wimax_dev *VAR_5,
       enum wimax_rf_state VAR_6)
{
 int VAR_7 = 0;
 struct device *VAR_8 = FUNC_5(VAR_5);
 enum wimax_st VAR_9;

 FUNC_3();
 FUNC_2(3, VAR_8, "(wimax_dev %p state %u)\n", VAR_5, VAR_6);
 if (VAR_5->rf_sw == VAR_6)
  goto out_no_change;
 if (VAR_5->op_rfkill_sw_toggle != ((void*)0))
  VAR_7 = VAR_5->op_rfkill_sw_toggle(VAR_5, VAR_6);
 else if (VAR_6 == VAR_1)
  VAR_7 = -VAR_0;
 else
  VAR_7 = 0;
 if (VAR_7 >= 0) {
  VAR_7 = 0;
  VAR_5->rf_sw = VAR_6;
  VAR_9 = VAR_6 == VAR_2 ?
   VAR_4 : VAR_3;
  FUNC_0(VAR_5, VAR_9);
 }
out_no_change:
 FUNC_1(3, VAR_8, "(wimax_dev %p state %u) = %d\n",
  VAR_5, VAR_6, VAR_7);
 return VAR_7;
}
