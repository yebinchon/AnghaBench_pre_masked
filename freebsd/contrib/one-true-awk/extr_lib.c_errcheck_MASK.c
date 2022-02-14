
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char const*) ;
 scalar_t__ VAR_2 ;

double FUNC_1(double VAR_3, const char *VAR_4)
{

 if (VAR_2 == VAR_0) {
  VAR_2 = 0;
  FUNC_0("%s argument out of domain", VAR_4);
  VAR_3 = 1;
 } else if (VAR_2 == VAR_1) {
  VAR_2 = 0;
  FUNC_0("%s result out of range", VAR_4);
  VAR_3 = 1;
 }
 return VAR_3;
}
