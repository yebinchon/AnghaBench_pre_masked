
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static int
FUNC_1(
 size_t VAR_0,
 FILE *VAR_1
 )
{
 if (VAR_0 == 0) {
  (void) FUNC_0(VAR_1, "No data returned in response to query\n");
  return 0;
 }
 if (VAR_0 > 1) {
  (void) FUNC_0(VAR_1, "Expected one item in response, got %lu\n",
          (u_long)VAR_0);
  return 0;
 }
 return 1;
}
