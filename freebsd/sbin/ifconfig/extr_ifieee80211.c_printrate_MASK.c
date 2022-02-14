
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char const*,int) ;

__attribute__((used)) static void
FUNC_1(const char *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 if ((VAR_2 & VAR_0) == 0) {
  if (VAR_2 != VAR_3) {
   if (VAR_2 & 1)
    FUNC_0("%s %d.5", VAR_1, VAR_2/2);
   else
    FUNC_0("%s %d", VAR_1, VAR_2/2);
  }
 } else {
  if (VAR_2 != VAR_4)
   FUNC_0("%s %d", VAR_1, VAR_2 &~ 0x80);
 }
}
