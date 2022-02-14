
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct adapter*,unsigned int) ;

__attribute__((used)) static __inline void
FUNC_1(struct adapter *VAR_0, uint8_t *VAR_1, unsigned int VAR_2,
    unsigned int VAR_3)
{
 uint32_t *VAR_4 = (uint32_t *)(VAR_1 + VAR_2);

 for ( ; VAR_2 <= VAR_3; VAR_2 += sizeof(uint32_t))
  *VAR_4++ = FUNC_0(VAR_0, VAR_2);
}
