
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uchar_t ;
typedef int processorid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int FUNC_0 () ;

uint64_t
FUNC_1(uint64_t VAR_7, processorid_t VAR_8, uchar_t VAR_9)
{
 uint64_t VAR_10 = 0;

 switch (VAR_9) {
 case 129:
  if (VAR_7) {
   VAR_10 = (uint64_t)((VAR_9 & VAR_6) |
       ((VAR_8 << VAR_1) &
       VAR_0) |
       ((VAR_7 << VAR_3) &
       VAR_2));
  } else {
   VAR_10 = (uint64_t)((VAR_9 & VAR_6) |
       ((VAR_8 << VAR_1) &
       VAR_0) |
       ((FUNC_0() << VAR_3) &
       VAR_2));
  }
  break;
 case 128:
  VAR_10 = (uint64_t)((VAR_9 & VAR_6) |
      ((VAR_7 << VAR_5) & VAR_4));
  break;
 default:
  break;
 }

 return (VAR_10);
}
