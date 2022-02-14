
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int ,char*,int,...) ;

__attribute__((used)) static int FUNC_2(int VAR_1, const char *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 < 0) {
  FUNC_1(VAR_0, "Line %d: invalid cipher '%s'.",
      VAR_1, VAR_2);
  return -1;
 }
 if (VAR_3 == 0) {
  FUNC_1(VAR_0, "Line %d: no cipher values configured.",
      VAR_1);
  return -1;
 }
 return VAR_3;
}
