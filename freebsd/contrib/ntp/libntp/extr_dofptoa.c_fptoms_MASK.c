
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_fp ;
typedef scalar_t__ s_fp ;


 int VAR_0 ;
 char* FUNC_0 (scalar_t__,int,short,int ) ;

char *
FUNC_1(
 s_fp VAR_1,
 short VAR_2
 )
{
 u_fp VAR_3;
 int VAR_4;

 VAR_4 = (VAR_1 < 0);
 if (VAR_4) {
  VAR_3 = (u_fp)(-VAR_1);
 } else {
  VAR_3 = (u_fp)VAR_1;
 }

 return FUNC_0(VAR_3, VAR_4, VAR_2, VAR_0);
}
