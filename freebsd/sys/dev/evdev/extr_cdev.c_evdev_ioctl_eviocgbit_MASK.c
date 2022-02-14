
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evdev_dev {unsigned long* ev_type_flags; unsigned long* ev_key_flags; unsigned long* ev_rel_flags; unsigned long* ev_abs_flags; unsigned long* ev_msc_flags; unsigned long* ev_led_flags; unsigned long* ev_snd_flags; unsigned long* ev_sw_flags; } ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;







 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,unsigned long*,int) ;

__attribute__((used)) static int
FUNC_4(struct evdev_dev *VAR_9, int VAR_10, int VAR_11, caddr_t VAR_12)
{
 unsigned long *VAR_13;
 int VAR_14;

 switch (VAR_10) {
 case 0:
  VAR_13 = VAR_9->ev_type_flags;
  VAR_14 = VAR_2;
  break;
 case 133:
  VAR_13 = VAR_9->ev_key_flags;
  VAR_14 = VAR_3;
  break;
 case 130:
  VAR_13 = VAR_9->ev_rel_flags;
  VAR_14 = VAR_6;
  break;
 case 135:
  VAR_13 = VAR_9->ev_abs_flags;
  VAR_14 = VAR_0;
  break;
 case 131:
  VAR_13 = VAR_9->ev_msc_flags;
  VAR_14 = VAR_5;
  break;
 case 132:
  VAR_13 = VAR_9->ev_led_flags;
  VAR_14 = VAR_4;
  break;
 case 129:
  VAR_13 = VAR_9->ev_snd_flags;
  VAR_14 = VAR_7;
  break;
 case 128:
  VAR_13 = VAR_9->ev_sw_flags;
  VAR_14 = VAR_8;
  break;
 case 134:




  FUNC_2(VAR_12, VAR_11);
  return (0);
 default:
  return (VAR_1);
 }





 FUNC_2(VAR_12, VAR_11);

 VAR_14 = FUNC_1(VAR_14);
 VAR_11 = FUNC_0(VAR_14, VAR_11);
 FUNC_3(VAR_12, VAR_13, VAR_11);
 return (0);
}
