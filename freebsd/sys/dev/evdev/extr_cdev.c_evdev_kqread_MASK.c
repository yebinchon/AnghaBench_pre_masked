
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knote {int kn_data; int kn_flags; scalar_t__ kn_hook; } ;
struct input_event {int dummy; } ;
struct evdev_client {scalar_t__ ec_revoked; } ;


 int FUNC_0 (struct evdev_client*) ;
 int FUNC_1 (struct evdev_client*) ;
 int FUNC_2 (struct evdev_client*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_3(struct knote *VAR_1, long VAR_2)
{
 struct evdev_client *VAR_3;
 int VAR_4;

 VAR_3 = (struct evdev_client *)VAR_1->kn_hook;

 FUNC_1(VAR_3);

 if (VAR_3->ec_revoked) {
  VAR_1->kn_flags |= VAR_0;
  VAR_4 = 1;
 } else {
  VAR_1->kn_data = FUNC_2(VAR_3) *
      sizeof(struct input_event);
  VAR_4 = !FUNC_0(VAR_3);
 }
 return (VAR_4);
}
