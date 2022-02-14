
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int u_int ;
struct sockaddr_dl {int dummy; } ;


 scalar_t__ FUNC_0 (struct sockaddr_dl*) ;

__attribute__((used)) static u_int
FUNC_1(void *VAR_0, struct sockaddr_dl *VAR_1, u_int VAR_2)
{
 uint32_t *VAR_3 = VAR_0;
 uint8_t VAR_4;

 VAR_4 = ((uint8_t *)FUNC_0(VAR_1))[5] >> 2;
 if (VAR_4 < 32)
  VAR_3[0] |= 1 << VAR_4;
 else
  VAR_3[1] |= 1 << (VAR_4 - 32);

 return (1);
}
