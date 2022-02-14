
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ gid_t ;


 scalar_t__ FUNC_0 (char const*,char*) ;

int
FUNC_1(const char *VAR_0, gid_t VAR_1, gid_t *VAR_2, int *VAR_3)
{
 int VAR_4, VAR_5;

 if (FUNC_0(VAR_0, "root") == 0) {
  if (*VAR_3 >= 1) {
   VAR_2[0] = VAR_1;
   VAR_4 = 1;
  }

  VAR_5 = (*VAR_3 >= VAR_4) ? 0 : -1;
  *VAR_3 = VAR_4;
 } else if (FUNC_0(VAR_0, "test") == 0) {
  if (*VAR_3 >= 1) {
   VAR_2[0] = VAR_1;
   VAR_4 = 1;
  }

  if (*VAR_3 >= 2) {
   VAR_2[1] = 0;
   VAR_4 = 2;
  }

  VAR_5 = (*VAR_3 >= VAR_4) ? 0 : -1;
  *VAR_3 = VAR_4;
 } else
  VAR_5 = -1;

 return VAR_5;
}
