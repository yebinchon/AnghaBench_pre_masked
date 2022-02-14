
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline void FUNC_0(char **VAR_0, char *VAR_1, int *VAR_2,
           int VAR_3)
{
 int VAR_4 = 0;

 if (!*VAR_2) {
  **VAR_0 = '|';
  *VAR_0 += 1;
 } else
  *VAR_2 = 0;

 while (VAR_4 < VAR_3) {
  if (*VAR_1 != '"') {
   **VAR_0 = *VAR_1;
   *VAR_0 += 1;
  }
  VAR_1 += 1;
  VAR_4 += 1;
 }
}
