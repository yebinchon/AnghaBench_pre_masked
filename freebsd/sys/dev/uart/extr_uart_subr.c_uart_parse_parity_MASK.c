
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const*,char*,int) ;

__attribute__((used)) static int
FUNC_1(const char **VAR_5)
{
 if (!FUNC_0(*VAR_5, "even", 4)) {
  *VAR_5 += 4;
  return VAR_0;
 }
 if (!FUNC_0(*VAR_5, "mark", 4)) {
  *VAR_5 += 4;
  return VAR_1;
 }
 if (!FUNC_0(*VAR_5, "none", 4)) {
  *VAR_5 += 4;
  return VAR_2;
 }
 if (!FUNC_0(*VAR_5, "odd", 3)) {
  *VAR_5 += 3;
  return VAR_3;
 }
 if (!FUNC_0(*VAR_5, "space", 5)) {
  *VAR_5 += 5;
  return VAR_4;
 }
 return (-1);
}
