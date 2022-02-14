
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct evdev_dev {int ev_sw_flags; int ev_snd_flags; int ev_led_flags; int ev_msc_flags; int ev_abs_flags; int * ev_mt; int ev_rel_flags; int ev_key_flags; } ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct evdev_dev*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct evdev_dev*,int) ;

__attribute__((used)) static int
FUNC_4(struct evdev_dev *VAR_12, uint16_t VAR_13, uint16_t VAR_14,
    int32_t VAR_15)
{

 if (VAR_13 >= VAR_3)
  return (VAR_2);


 if (VAR_13 != 128 && !FUNC_3(VAR_12, VAR_13))
  return (VAR_2);

 switch (VAR_13) {
 case 128:
  if (VAR_14 >= VAR_11)
   return (VAR_2);
  break;

 case 135:
  if (VAR_14 >= VAR_4)
   return (VAR_2);
  if (!FUNC_2(VAR_12->ev_key_flags, VAR_14))
   return (VAR_2);
  break;

 case 132:
  if (VAR_14 >= VAR_7)
   return (VAR_2);
  if (!FUNC_2(VAR_12->ev_rel_flags, VAR_14))
   return (VAR_2);
  break;

 case 136:
  if (VAR_14 >= VAR_0)
   return (VAR_2);
  if (!FUNC_2(VAR_12->ev_abs_flags, VAR_14))
   return (VAR_2);
  if (VAR_14 == VAR_1 &&
      (VAR_15 < 0 || VAR_15 > FUNC_1(VAR_12)))
   return (VAR_2);
  if (FUNC_0(VAR_14) && VAR_12->ev_mt == ((void*)0) &&
      FUNC_2(VAR_12->ev_abs_flags, VAR_1))
   return (VAR_2);
  break;

 case 133:
  if (VAR_14 >= VAR_6)
   return (VAR_2);
  if (!FUNC_2(VAR_12->ev_msc_flags, VAR_14))
   return (VAR_2);
  break;

 case 134:
  if (VAR_14 >= VAR_5)
   return (VAR_2);
  if (!FUNC_2(VAR_12->ev_led_flags, VAR_14))
   return (VAR_2);
  break;

 case 130:
  if (VAR_14 >= VAR_9)
   return (VAR_2);
  if (!FUNC_2(VAR_12->ev_snd_flags, VAR_14))
   return (VAR_2);
  break;

 case 129:
  if (VAR_14 >= VAR_10)
   return (VAR_2);
  if (!FUNC_2(VAR_12->ev_sw_flags, VAR_14))
   return (VAR_2);
  break;

 case 131:
  if (VAR_14 >= VAR_8)
   return (VAR_2);
  break;

 default:
  return (VAR_2);
 }

 return (0);
}
