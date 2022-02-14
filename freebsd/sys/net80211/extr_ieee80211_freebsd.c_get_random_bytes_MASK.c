
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 () ;
 int FUNC_1 (int *,int *,int) ;

void
FUNC_2(void *VAR_0, size_t VAR_1)
{
 uint8_t *VAR_2 = VAR_0;

 while (VAR_1 > 0) {
  uint32_t VAR_3 = FUNC_0();
  size_t VAR_4 = VAR_1 > sizeof(uint32_t) ? sizeof(uint32_t) : VAR_1;
  FUNC_1(&VAR_3, VAR_2, VAR_1 > sizeof(uint32_t) ? sizeof(uint32_t) : VAR_1);
  VAR_2 += sizeof(uint32_t), VAR_1 -= VAR_4;
 }
}
