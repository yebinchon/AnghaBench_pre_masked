
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long uintmax_t ;


 int FUNC_0 (char*,char*,double) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static const char *
FUNC_2(uintmax_t VAR_0)
{
 static char VAR_1[32];
 double VAR_2;

 if (VAR_0 == 0) {
  FUNC_1(VAR_1, "0B");
 } else if (VAR_0 > 2000000000UL) {
  VAR_2 = (double)VAR_0 / 1e9;
  FUNC_0(VAR_1, "%.1fG", VAR_2);
 } else if (VAR_0 > 2000000UL) {
  VAR_2 = (double)VAR_0 / 1e6;
  FUNC_0(VAR_1, "%.1fM", VAR_2);
 } else {
  VAR_2 = (double)VAR_0 / 1e3;
  FUNC_0(VAR_1, "%.1fK", VAR_2);
 }

 return (VAR_1);
}
