
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcd_clocktime {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct bcd_clocktime const*,int) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;

void
FUNC_3(device_t VAR_1, int VAR_2, const struct bcd_clocktime *VAR_3)
{

 if (VAR_0 & VAR_2) {
  FUNC_0(VAR_1, VAR_2);
  FUNC_1(VAR_3, 9);
  FUNC_2("\n");
 }
}
