
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct evdev_dev {int dummy; } ;
struct TYPE_3__ {int kb_delay2; int kb_delay1; } ;
typedef TYPE_1__ keyboard_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct evdev_dev*,int ,int ,int ) ;

void
FUNC_1(struct evdev_dev *VAR_3, keyboard_t *VAR_4)
{

 if (VAR_3 == ((void*)0))
  return;

 FUNC_0(VAR_3, VAR_0, VAR_1, VAR_4->kb_delay1);
 FUNC_0(VAR_3, VAR_0, VAR_2, VAR_4->kb_delay2);
}
