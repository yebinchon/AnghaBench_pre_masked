
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;


 int FUNC_0 (char*,char const*,char const*,scalar_t__,scalar_t__) ;

u_int
FUNC_1(u_int *VAR_0, u_int VAR_1, u_int VAR_2, u_int VAR_3, const char *VAR_4)
{
 u_int VAR_5 = *VAR_0;
 const char *VAR_6 = ((void*)0);

 if (VAR_1 < VAR_2)
  VAR_1 = VAR_2;
 if (VAR_1 > VAR_3)
  VAR_1 = VAR_3;
 if (VAR_5 < VAR_2) {
  *VAR_0 = VAR_1;
  VAR_6 = "Bump";
 } else if (VAR_5 > VAR_3) {
  *VAR_0 = VAR_3;
  VAR_6 = "Clamp";
 }
 if (VAR_6 && VAR_4)
  FUNC_0("%s %s to %d (was %d)", VAR_6, VAR_4, *VAR_0, VAR_5);
 return *VAR_0;
}
