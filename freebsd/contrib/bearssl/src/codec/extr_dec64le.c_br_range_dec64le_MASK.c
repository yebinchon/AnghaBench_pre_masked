
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (unsigned char const*) ;

void
FUNC_1(uint64_t *VAR_0, size_t VAR_1, const void *VAR_2)
{
 const unsigned char *VAR_3;

 VAR_3 = VAR_2;
 while (VAR_1 -- > 0) {
  *VAR_0 ++ = FUNC_0(VAR_3);
  VAR_3 += 8;
 }
}
