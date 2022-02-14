
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,int) ;

__attribute__((used)) static const char *
FUNC_1(int VAR_4, int VAR_5)
{
 if (VAR_4 == VAR_0) {
  if (VAR_5 == VAR_1)
   return "admin local";
  else if (VAR_5 == VAR_2)
   return "admin remote";
 } else if (VAR_4 == VAR_3) {
  if (VAR_5 == VAR_1)
   return "user local";
  else if (VAR_5 == VAR_2)
   return "user remote";
 }
 FUNC_0("Unknown forward permission list %d/%d", VAR_4, VAR_5);
}
