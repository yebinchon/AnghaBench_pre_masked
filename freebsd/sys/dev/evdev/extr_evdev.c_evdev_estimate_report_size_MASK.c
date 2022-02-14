
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evdev_dev {int ev_sw_flags; int ev_snd_flags; int ev_led_flags; int ev_msc_flags; int ev_abs_flags; int * ev_absinfo; int ev_rel_flags; int ev_key_flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct evdev_dev*) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (int ,scalar_t__,scalar_t__,int*) ;
 int FUNC_2 (int ,scalar_t__,int*) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__,int*) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static size_t
FUNC_5(struct evdev_dev *VAR_13)
{
 size_t VAR_14 = 0;
 int VAR_15;





 FUNC_3(VAR_13->ev_key_flags, VAR_5, VAR_4 - VAR_5, &VAR_15);
 if (VAR_15 == -1)
  FUNC_2(VAR_13->ev_key_flags, VAR_3, &VAR_15);
 VAR_14 += (VAR_15 != -1);
 FUNC_1(VAR_13->ev_key_flags, VAR_3, VAR_5 - VAR_3, &VAR_15);
 VAR_14 += VAR_15;


 FUNC_1(VAR_13->ev_rel_flags, 0, VAR_10, &VAR_15);
 VAR_14 += VAR_15;





 if (VAR_13->ev_absinfo != ((void*)0)) {
  FUNC_1(VAR_13->ev_abs_flags, 0, VAR_0, &VAR_15);
  VAR_14 += VAR_15;
  FUNC_1(VAR_13->ev_abs_flags, VAR_1, VAR_9, &VAR_15);
  if (VAR_15 > 0) {
   VAR_15++;
   if (FUNC_4(VAR_13->ev_abs_flags, VAR_2))

    VAR_14 += VAR_15 * FUNC_0(VAR_13);
   else

    VAR_14 += VAR_15 * (VAR_7 - 1);
  }
 }


 FUNC_1(VAR_13->ev_msc_flags, 0, VAR_8, &VAR_15);
 VAR_14 += VAR_15;


 FUNC_1(VAR_13->ev_led_flags, 0, VAR_6, &VAR_15);
 VAR_14 += VAR_15;


 FUNC_2(VAR_13->ev_snd_flags, VAR_11, &VAR_15);
 VAR_14 += (VAR_15 != -1);

 FUNC_2(VAR_13->ev_sw_flags, VAR_12, &VAR_15);
 VAR_14 += (VAR_15 != -1);



 VAR_14++;
 return (VAR_14);
}
