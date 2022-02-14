
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint16_t ;
struct input_absinfo {int maximum; } ;
struct evdev_dev {TYPE_1__* ev_absinfo; } ;
struct TYPE_3__ {int maximum; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,struct input_absinfo*,int) ;

inline void
FUNC_3(struct evdev_dev *VAR_3, uint16_t VAR_4,
    struct input_absinfo *VAR_5)
{

 FUNC_0(VAR_4 < VAR_0, ("invalid evdev abs property"));

 if (VAR_4 == VAR_1 &&
     (VAR_5->maximum < 1 || VAR_5->maximum >= VAR_2))
  return;

 if (VAR_3->ev_absinfo == ((void*)0))
  VAR_3->ev_absinfo = FUNC_1();

 if (VAR_4 == VAR_1)
  VAR_3->ev_absinfo[VAR_1].maximum = VAR_5->maximum;
 else
  FUNC_2(&VAR_3->ev_absinfo[VAR_4], VAR_5,
      sizeof(struct input_absinfo));
}
