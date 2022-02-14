
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

void
FUNC_1(void)
{






 if ((VAR_4 & VAR_0) != 0)
  VAR_3 = ((VAR_5 >> 8) & 0xff) * 8;






 FUNC_0("hw.clflush_disable", &VAR_7);
 if (VAR_8 != VAR_2 && VAR_7 == -1) {
  VAR_4 &= ~VAR_0;
  VAR_6 &= ~VAR_1;
 }





 if (VAR_7 == 1) {
  VAR_4 &= ~VAR_0;
  VAR_6 &= ~VAR_1;
 }
}
