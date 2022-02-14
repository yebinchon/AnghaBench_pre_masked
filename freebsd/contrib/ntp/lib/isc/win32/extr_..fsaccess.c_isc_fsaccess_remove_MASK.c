
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int isc_fsaccess_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;

void
FUNC_1(int VAR_5, int VAR_6, isc_fsaccess_t *VAR_7) {
 FUNC_0(VAR_5 <= 0x7);
 FUNC_0(VAR_6 <= 0xFF);


 if ((VAR_5 & VAR_3) != 0)
  *VAR_7 &= ~VAR_6;

 if ((VAR_5 & VAR_1) != 0)
  *VAR_7 &= ~(VAR_6 << VAR_0);

 if ((VAR_5 & VAR_2) != 0)
  *VAR_7 &= ~(VAR_6 << VAR_4);
}
