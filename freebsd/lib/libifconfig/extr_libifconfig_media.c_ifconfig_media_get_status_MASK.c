
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifmediareq {int ifm_status; int ifm_active; } ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

const char *
FUNC_2(const struct ifmediareq *VAR_2)
{
 switch (FUNC_1(VAR_2->ifm_active)) {
 case 129:
 case 130:
  if (VAR_2->ifm_status & VAR_0) {
   return ("active");
  } else {
   return ("no carrier");
  }
  break;

 case 128:
  if (VAR_2->ifm_status & VAR_0) {

   if (FUNC_0(VAR_2->ifm_active) == VAR_1) {
    return ("associated");
   } else {
    return ("running");
   }
  } else {
   return ("no carrier");
  }
  break;
 default:
  return ("");
 }
}
