
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*) ;

__attribute__((used)) static void
FUNC_1(char** VAR_0, int VAR_1, int VAR_2, int VAR_3,
 int* VAR_4, int* VAR_5)
{
 int VAR_6;
 *VAR_4 = 0;
 *VAR_5 = 0;
 if(VAR_1 <= 0) {
  if(VAR_2)
   *VAR_4 = 1;
  if(VAR_3)
   *VAR_5 = 1;
  return;
 }
 for(VAR_6=0; VAR_6<VAR_1; VAR_6++)
 {
  if(FUNC_0(VAR_0[VAR_6])) {
   if(VAR_3)
    (*VAR_5)++;
  } else {
   if(VAR_2)
    (*VAR_4)++;
  }
 }

}
