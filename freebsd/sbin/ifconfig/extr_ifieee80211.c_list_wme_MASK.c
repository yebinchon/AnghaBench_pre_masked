
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char const*,int) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_1(int VAR_4)
{
 static const char *VAR_5[] = { "AC_BE", "AC_BK", "AC_VI", "AC_VO" };
 int VAR_6;

 if (VAR_3) {

  for (VAR_6 = VAR_1; VAR_6 <= VAR_2; VAR_6++) {
 again:
   if (VAR_6 & VAR_0)
    FUNC_0(VAR_4, "     ", VAR_6);
   else
    FUNC_0(VAR_4, VAR_5[VAR_6], VAR_6);
   if ((VAR_6 & VAR_0) == 0) {
    VAR_6 |= VAR_0;
    goto again;
   } else
    VAR_6 &= ~VAR_0;
  }
 } else {

  for (VAR_6 = VAR_1; VAR_6 <= VAR_2; VAR_6++)
   FUNC_0(VAR_4, VAR_5[VAR_6], VAR_6);
 }
}
