
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ isc_boolean_t ;


 int FUNC_0 (unsigned char) ;

__attribute__((used)) static inline unsigned int
FUNC_1(const char *VAR_0, isc_boolean_t VAR_1) {
 const char *VAR_2;
 unsigned int VAR_3 = 0;
 int VAR_4;






 if (VAR_1) {
  for (VAR_2 = VAR_0; *VAR_2 != '\0'; VAR_2++) {
   VAR_3 += (VAR_3 << 3) + *VAR_2;
  }
 } else {
  for (VAR_2 = VAR_0; *VAR_2 != '\0'; VAR_2++) {
   VAR_4 = *VAR_2;
   VAR_4 = FUNC_0((unsigned char)VAR_4);
   VAR_3 += (VAR_3 << 3) + VAR_4;
  }
 }

 return (VAR_3);
}
