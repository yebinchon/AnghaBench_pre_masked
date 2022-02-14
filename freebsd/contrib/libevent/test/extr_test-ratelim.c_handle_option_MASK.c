
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int* ptr; long min; scalar_t__ isbool; } ;


 int FUNC_0 (int ,char*,char*) ;
 int VAR_0 ;
 long FUNC_1 (char*,char**,int) ;

__attribute__((used)) static int
FUNC_2(int VAR_1, char **VAR_2, int *VAR_3, const struct option *VAR_4)
{
 long VAR_5;
 char *VAR_6 = ((void*)0);
 if (VAR_4->isbool) {
  *VAR_4->ptr = 1;
  return 0;
 }
 if (*VAR_3 + 1 == VAR_1) {
  FUNC_0(VAR_0, "Too few arguments to '%s'\n",VAR_2[*VAR_3]);
  return -1;
 }
 VAR_5 = FUNC_1(VAR_2[*VAR_3+1], &VAR_6, 10);
 if (*VAR_2[*VAR_3+1] == '\0' || !VAR_6 || *VAR_6 != '\0') {
  FUNC_0(VAR_0, "Couldn't parse numeric value '%s'\n",
      VAR_2[*VAR_3+1]);
  return -1;
 }
 if (VAR_5 < VAR_4->min || VAR_5 > 0x7fffffff) {
  FUNC_0(VAR_0, "Value '%s' is out-of-range'\n",
      VAR_2[*VAR_3+1]);
  return -1;
 }
 *VAR_4->ptr = (int)VAR_5;
 ++*VAR_3;
 return 0;
}
