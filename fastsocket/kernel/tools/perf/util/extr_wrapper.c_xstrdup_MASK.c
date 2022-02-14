
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__,int) ;
 char* FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*) ;

char *FUNC_4(const char *VAR_0)
{
 char *VAR_1 = FUNC_2(VAR_0);
 if (!VAR_1) {
  FUNC_1(FUNC_3(VAR_0) + 1, -1);
  VAR_1 = FUNC_2(VAR_0);
  if (!VAR_1)
   FUNC_0("Out of memory, strdup failed");
 }
 return VAR_1;
}
