
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct evdev_client {int ec_clock_id; } ;





 int FUNC_0 (struct timeval*) ;
 int FUNC_1 (struct timeval*) ;

__attribute__((used)) static void
FUNC_2(struct evdev_client *VAR_0, struct timeval *VAR_1)
{

 switch (VAR_0->ec_clock_id) {
 case 130:




 case 129:
  FUNC_1(VAR_1);
  break;

 case 128:
 default:
  FUNC_0(VAR_1);
  break;
 }
}
