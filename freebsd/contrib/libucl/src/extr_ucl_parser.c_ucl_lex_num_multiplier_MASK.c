
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char FUNC_0 (char) ;

__attribute__((used)) static inline unsigned long
FUNC_1 (const unsigned char VAR_0, bool VAR_1) {
 const struct {
  char c;
  long mult_normal;
  long mult_bytes;
 } VAR_2[] = {
   {'m', 1000 * 1000, 1024 * 1024},
   {'k', 1000, 1024},
   {'g', 1000 * 1000 * 1000, 1024 * 1024 * 1024}
 };
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 3; VAR_3 ++) {
  if (FUNC_0 (VAR_0) == VAR_2[VAR_3].c) {
   if (VAR_1) {
    return VAR_2[VAR_3].mult_bytes;
   }
   return VAR_2[VAR_3].mult_normal;
  }
 }

 return 1;
}
