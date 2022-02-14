
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union sctp_addr {int dummy; } sctp_addr ;
typedef scalar_t__ sctp_scope_t ;


 scalar_t__ VAR_0 ;




 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (union sctp_addr const*) ;
 int VAR_3 ;

int FUNC_1(const union sctp_addr *VAR_4, sctp_scope_t VAR_5)
{
 sctp_scope_t VAR_6 = FUNC_0(VAR_4);




 if (VAR_2 == VAR_6)
  return 0;
 switch (VAR_3) {
 case 131:
  return 1;
 case 130:
  if (VAR_6 <= VAR_5)
   return 1;
  break;
 case 128:
  if (VAR_6 <= VAR_5 || VAR_1 == VAR_6)
   return 1;
  break;
 case 129:
  if (VAR_6 <= VAR_5 || VAR_0 == VAR_6)
   return 1;
  break;
 default:
  break;
 }

 return 0;
}
