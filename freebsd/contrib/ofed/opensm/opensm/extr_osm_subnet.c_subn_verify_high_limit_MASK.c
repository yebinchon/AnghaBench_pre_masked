
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char const*,int,int ) ;

__attribute__((used)) static void FUNC_1(int *VAR_1, const char *VAR_2)
{
 if (*VAR_1 < 0 || *VAR_1 > 255) {
  if (*VAR_1 > 255)
   FUNC_0(" Invalid Cached Option: %s_high_limit=%d: "
       "Using Default: %d\n",
       VAR_2, *VAR_1,
       VAR_0);
  *VAR_1 = -1;
 }
}
