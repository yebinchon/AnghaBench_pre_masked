
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int
FUNC_0(long VAR_6, long VAR_7)
{
 if (VAR_1 == 0) {
  VAR_4 = VAR_6;
  VAR_5 = VAR_7;
 }
 if (VAR_4 > VAR_5 || 1 > VAR_4 ||
     VAR_5 > VAR_2) {
  VAR_3 = "invalid address";
  return VAR_0;
 }
 return 0;
}
