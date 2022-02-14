
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static void FUNC_0(uint32_t * VAR_0, uint32_t VAR_1)
{
 if ((((*VAR_0) + VAR_1) < (*VAR_0))
     || ((*VAR_0) + VAR_1) > 0xffff)
  (*VAR_0) = 0xffff;
 else
  (*VAR_0) = (*VAR_0) + VAR_1;
}
