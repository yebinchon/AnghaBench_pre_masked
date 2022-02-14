
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ u_int ;
struct sockaddr_dl {int dummy; } ;


 void* FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int* FUNC_1 (struct sockaddr_dl*) ;

__attribute__((used)) static u_int
FUNC_2(void *VAR_1, struct sockaddr_dl *VAR_2, u_int VAR_3)
{
 uint32_t **VAR_4 = VAR_1;
 uint8_t *VAR_5;

 if (VAR_3 == VAR_0)
  return (0);
 VAR_5 = FUNC_1(VAR_2);
 *(*VAR_4)++ = FUNC_0(VAR_5[1] << 8 | VAR_5[0]);
 *(*VAR_4)++ = FUNC_0(VAR_5[3] << 8 | VAR_5[2]);
 *(*VAR_4)++ = FUNC_0(VAR_5[5] << 8 | VAR_5[4]);

 return (1);
}
