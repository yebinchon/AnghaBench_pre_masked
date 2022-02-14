
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ caddr_t ;



__attribute__((used)) static size_t
FUNC_0(void *VAR_0, size_t VAR_1, uint64_t VAR_2)
{
 uint32_t *VAR_3;

 if (VAR_0) {
  VAR_3 = (void*)((caddr_t)VAR_0 + VAR_1);

  VAR_3[0] = (VAR_2 & 0xffffffffUL);
  VAR_3[1] = (VAR_2 >> 32);
 }

 return sizeof(*VAR_3) * 2;
}
