
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evdev_dev {int ev_prop_flags; int ev_abs_flags; } ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct evdev_dev*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct evdev_dev*) ;
 int FUNC_3 (struct evdev_dev*,int ,int ) ;
 int ** VAR_6 ;
 int FUNC_4 (struct evdev_dev*,int ,int ,int) ;
 int FUNC_5 (struct evdev_dev*,scalar_t__) ;
 scalar_t__ FUNC_6 (int **) ;

void
FUNC_7(struct evdev_dev *VAR_7)
{
 int32_t VAR_8, VAR_9;

 FUNC_0(VAR_7);

 VAR_8 = FUNC_2(VAR_7);
 FUNC_4(VAR_7, VAR_4, VAR_2, VAR_8 > 0);

 if (FUNC_3(VAR_7, 0, VAR_0) != -1)

  for (VAR_9 = 0; VAR_9 < FUNC_6(VAR_6); VAR_9++)
   if (FUNC_1(VAR_7->ev_abs_flags, VAR_6[VAR_9][1]))
    FUNC_4(VAR_7, VAR_3,
        VAR_6[VAR_9][1],
        FUNC_3(VAR_7, 0,
        VAR_6[VAR_9][0]));


 if (!FUNC_1(VAR_7->ev_prop_flags, VAR_5))
  FUNC_5(VAR_7, VAR_8);

 if (VAR_8 == 0)
  FUNC_4(VAR_7, VAR_3, VAR_1, 0);
}
