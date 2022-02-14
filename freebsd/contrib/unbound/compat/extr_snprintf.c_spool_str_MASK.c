
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void
FUNC_0(char** VAR_0, size_t* VAR_1, int* VAR_2, const char* VAR_3, int VAR_4)
{
 int VAR_5;
 for(VAR_5=0; VAR_5<VAR_4; VAR_5++) {
  if(*VAR_1 > 1) {
   *(*VAR_0)++ = VAR_3[VAR_5];
   (*VAR_1)--;
  }
  (*VAR_2)++;
 }
}
