
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void
FUNC_0(char** VAR_0, size_t* VAR_1, int* VAR_2, char VAR_3, int VAR_4)
{
 while(VAR_4--) {
  if(*VAR_1 > 1) {
   *(*VAR_0)++ = VAR_3;
   (*VAR_1)--;
  }
  (*VAR_2)++;
 }
}
