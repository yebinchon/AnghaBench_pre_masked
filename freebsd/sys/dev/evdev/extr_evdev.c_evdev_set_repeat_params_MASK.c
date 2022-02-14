
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16_t ;
struct evdev_dev {int* ev_rep; } ;


 int FUNC_0 (int,char*) ;
 size_t VAR_0 ;

inline void
FUNC_1(struct evdev_dev *VAR_1, uint16_t VAR_2, int VAR_3)
{

 FUNC_0(VAR_2 < VAR_0, ("invalid evdev repeat property"));
 VAR_1->ev_rep[VAR_2] = VAR_3;
}
