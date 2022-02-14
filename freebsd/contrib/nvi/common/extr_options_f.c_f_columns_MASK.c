
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
typedef int SCR ;
typedef int OPTION ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*,scalar_t__) ;

int
FUNC_1(
 SCR *VAR_3,
 OPTION *VAR_4,
 char *VAR_5,
 u_long *VAR_6)
{

 if (*VAR_6 < VAR_1) {
  FUNC_0(VAR_3, VAR_2, "040|Screen columns too small, less than %d",
      VAR_1);
  return (1);
 }
 if (*VAR_6 > 500) {
  FUNC_0(VAR_3, VAR_2, "041|Screen columns too large, greater than %d",
      500);
  return (1);
 }
 return (0);
}
