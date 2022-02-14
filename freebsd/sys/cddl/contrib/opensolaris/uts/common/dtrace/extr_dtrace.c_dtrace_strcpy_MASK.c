
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;


 char FUNC_0 (uintptr_t) ;

__attribute__((used)) static void
FUNC_1(const void *VAR_0, void *VAR_1, size_t VAR_2)
{
 if (VAR_2 != 0) {
  uint8_t *VAR_3 = VAR_1, VAR_4;
  const uint8_t *VAR_5 = VAR_0;

  do {
   *VAR_3++ = VAR_4 = FUNC_0((uintptr_t)VAR_5++);
  } while (--VAR_2 != 0 && VAR_4 != '\0');
 }
}
