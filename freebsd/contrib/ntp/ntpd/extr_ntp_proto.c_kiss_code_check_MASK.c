
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32 ;
typedef scalar_t__ u_char ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int *,char*,int) ;

int
FUNC_1(
 u_char VAR_8,
 u_char VAR_9,
 u_char VAR_10,
 u_int32 VAR_11
 )
{

 if ( VAR_10 == VAR_2
     && VAR_8 == VAR_1
     && VAR_9 == VAR_6) {
  if(FUNC_0(&VAR_11,"RATE", 4) == 0) {
   return (VAR_4);
  } else if(FUNC_0(&VAR_11,"DENY", 4) == 0) {
   return (VAR_0);
  } else if(FUNC_0(&VAR_11,"RSTR", 4) == 0) {
   return (VAR_5);
  } else if(FUNC_0(&VAR_11,"X", 1) == 0) {
   return (VAR_7);
  }
 }
 return (VAR_3);
}
