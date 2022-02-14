
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char FUNC_0 (char) ;

__attribute__((used)) static inline double
FUNC_1 (const unsigned char VAR_0) {
 const struct {
  char c;
  double mult;
 } VAR_1[] = {
   {'m', 60},
   {'h', 60 * 60},
   {'d', 60 * 60 * 24},
   {'w', 60 * 60 * 24 * 7},
   {'y', 60 * 60 * 24 * 365}
 };
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 5; VAR_2 ++) {
  if (FUNC_0 (VAR_0) == VAR_1[VAR_2].c) {
   return VAR_1[VAR_2].mult;
  }
 }

 return 1;
}
