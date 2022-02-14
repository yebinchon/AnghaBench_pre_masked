
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t addrlen_t ;
typedef size_t addrkey_t ;


 size_t VAR_0 ;

__attribute__((used)) static inline int
FUNC_0(const addrkey_t *VAR_1, const addrkey_t *VAR_2, addrlen_t VAR_3)
{
 addrkey_t VAR_4 = VAR_1[VAR_3/VAR_0] ^ VAR_2[VAR_3/VAR_0];
 return (int)(VAR_4 >> ((VAR_0-1)-(VAR_3%VAR_0))) & 1;
}
