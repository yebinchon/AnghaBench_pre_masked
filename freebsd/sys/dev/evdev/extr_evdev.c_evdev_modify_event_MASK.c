
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct evdev_dev {int ev_clients; int ev_key_states; int ev_flags; } ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (struct evdev_dev*) ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct evdev_dev*,int ) ;
 int FUNC_4 (struct evdev_dev*,int) ;
 int FUNC_5 (struct evdev_dev*) ;

__attribute__((used)) static void
FUNC_6(struct evdev_dev *VAR_4, uint16_t VAR_5, uint16_t VAR_6,
    int32_t *VAR_7)
{

 FUNC_0(VAR_4);

 switch (VAR_5) {
 case 128:
  if (!FUNC_3(VAR_4, VAR_1))
   break;

  if (!FUNC_2(VAR_4->ev_flags, VAR_0)) {

   if (FUNC_2(VAR_4->ev_key_states, VAR_6) &&
       *VAR_7 == VAR_2)
    *VAR_7 = VAR_3;
  } else {

   if (FUNC_2(VAR_4->ev_key_states, VAR_6) == !*VAR_7 &&
       !FUNC_1(&VAR_4->ev_clients)) {
    if (*VAR_7 == VAR_2)
     FUNC_4(VAR_4, VAR_6);
    else
     FUNC_5(VAR_4);
   }
  }
  break;

 case 129:

  break;
 }
}
