
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct evdev_dev {int dummy; } ;
typedef int int32_t ;
typedef enum evdev_sparse_result { ____Placeholder_evdev_sparse_result } evdev_sparse_result ;


 int VAR_0 ;
 int FUNC_0 (struct evdev_dev*) ;
 int FUNC_1 (struct evdev_dev*) ;
 int VAR_1 ;



 int FUNC_2 (struct evdev_dev*,int ,int ,int ) ;
 int FUNC_3 (struct evdev_dev*,int ,int ,int ) ;

void
FUNC_4(struct evdev_dev *VAR_2, uint16_t VAR_3, uint16_t VAR_4,
    int32_t VAR_5)
{
 enum evdev_sparse_result VAR_6;

 FUNC_1(VAR_2);

 VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5);
 switch (VAR_6) {
 case 129:

  FUNC_2(VAR_2, VAR_1, VAR_0,
      FUNC_0(VAR_2));

 case 130:
  FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);

 case 128:
  break;
 }
}
