
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;

u_int32_t
FUNC_1(u_int32_t VAR_8)
{
 u_int32_t VAR_9;

 VAR_9 = 0;
 if (VAR_8 & VAR_7)
  VAR_9 |= 1 << 0;
 if (VAR_8 & VAR_5)
  VAR_9 |= 1 << 1;




 VAR_9 |= (FUNC_0(VAR_8) & 0x3f) << 2;
 if (VAR_8 & VAR_4)
  VAR_9 |= 1 << 8;
 else if (VAR_8 & VAR_6)
  VAR_9 |= 1 << 9;
 else if (VAR_8 & VAR_3)
  VAR_9 |= 1 << 10;
 else if (VAR_8 & VAR_0)
  VAR_9 |= 1 << 11;
 else if (VAR_8 & VAR_1)
  VAR_9 |= 1 << 12;
 else if (VAR_8 & VAR_2)
  VAR_9 |= 1 << 13;

 return VAR_9;
}
