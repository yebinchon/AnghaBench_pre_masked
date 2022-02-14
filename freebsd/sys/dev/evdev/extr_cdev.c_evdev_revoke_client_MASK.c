
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evdev_client {int ec_revoked; int ec_evdev; } ;


 int FUNC_0 (int ) ;

void
FUNC_1(struct evdev_client *VAR_0)
{

 FUNC_0(VAR_0->ec_evdev);

 VAR_0->ec_revoked = 1;
}
