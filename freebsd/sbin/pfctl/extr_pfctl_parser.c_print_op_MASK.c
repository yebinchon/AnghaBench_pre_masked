
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int8_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (char*,char const*,...) ;

void
FUNC_1(u_int8_t VAR_9, const char *VAR_10, const char *VAR_11)
{
 if (VAR_9 == VAR_3)
  FUNC_0(" %s >< %s", VAR_10, VAR_11);
 else if (VAR_9 == VAR_8)
  FUNC_0(" %s <> %s", VAR_10, VAR_11);
 else if (VAR_9 == VAR_0)
  FUNC_0(" = %s", VAR_10);
 else if (VAR_9 == VAR_6)
  FUNC_0(" != %s", VAR_10);
 else if (VAR_9 == VAR_5)
  FUNC_0(" < %s", VAR_10);
 else if (VAR_9 == VAR_4)
  FUNC_0(" <= %s", VAR_10);
 else if (VAR_9 == VAR_2)
  FUNC_0(" > %s", VAR_10);
 else if (VAR_9 == VAR_1)
  FUNC_0(" >= %s", VAR_10);
 else if (VAR_9 == VAR_7)
  FUNC_0(" %s:%s", VAR_10, VAR_11);
}
