
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct evdev_dev {int ev_sw_flags; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,scalar_t__) ;

inline void
FUNC_2(struct evdev_dev *VAR_1, uint16_t VAR_2)
{

 FUNC_0(VAR_2 < VAR_0, ("invalid evdev sw property"));
 FUNC_1(VAR_1->ev_sw_flags, VAR_2);
}
