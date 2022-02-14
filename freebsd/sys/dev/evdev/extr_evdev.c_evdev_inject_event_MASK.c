
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct evdev_dev {int ev_lock_type; TYPE_1__* ev_methods; int ev_flags; } ;
typedef int int32_t ;
struct TYPE_2__ {int (* ev_event ) (struct evdev_dev*,int,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct evdev_dev*) ;
 int FUNC_1 (struct evdev_dev*) ;




 int VAR_2 ;






 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct evdev_dev*,int,int,int ) ;
 int FUNC_4 (struct evdev_dev*,int,int,int ) ;

int
FUNC_5(struct evdev_dev *VAR_3, uint16_t VAR_4, uint16_t VAR_5,
    int32_t VAR_6)
{
 int VAR_7 = 0;

 switch (VAR_4) {
 case 131:

  if (FUNC_2(VAR_3->ev_flags, VAR_1))
   goto push;

 case 134:
 case 133:
 case 130:
 case 136:
  if (VAR_3->ev_methods != ((void*)0) &&
      VAR_3->ev_methods->ev_event != ((void*)0))
   VAR_3->ev_methods->ev_event(VAR_3, VAR_4, VAR_5, VAR_6);






  if (VAR_4 == 134 || VAR_4 == 131)
   break;

 case 128:
 case 135:
 case 132:
 case 137:
 case 129:
push:
  if (VAR_3->ev_lock_type != VAR_2)
   FUNC_0(VAR_3);
  VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6);
  if (VAR_3->ev_lock_type != VAR_2)
   FUNC_1(VAR_3);
  break;

 default:
  VAR_7 = VAR_0;
 }

 return (VAR_7);
}
