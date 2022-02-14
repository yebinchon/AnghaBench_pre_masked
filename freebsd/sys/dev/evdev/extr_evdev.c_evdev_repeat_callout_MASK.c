
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evdev_dev {int* ev_rep; int ev_rep_key; int ev_rep_callout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int,void (*) (void*),struct evdev_dev*) ;
 int FUNC_1 (struct evdev_dev*,int ,int ,int) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_2(void *VAR_7)
{
 struct evdev_dev *VAR_8 = (struct evdev_dev *)VAR_7;

 FUNC_1(VAR_8, VAR_0, VAR_8->ev_rep_key, VAR_2);
 FUNC_1(VAR_8, VAR_1, VAR_5, 1);

 if (VAR_8->ev_rep[VAR_4])
  FUNC_0(&VAR_8->ev_rep_callout,
      VAR_8->ev_rep[VAR_4] * VAR_6 / 1000,
      FUNC_2, VAR_8);
 else
  VAR_8->ev_rep_key = VAR_3;
}
