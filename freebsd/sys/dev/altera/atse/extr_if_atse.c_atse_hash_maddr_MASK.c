
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int u_int ;
struct sockaddr_dl {int dummy; } ;


 int VAR_0 ;
 int* FUNC_0 (struct sockaddr_dl*) ;

__attribute__((used)) static u_int
FUNC_1(void *VAR_1, struct sockaddr_dl *VAR_2, u_int VAR_3)
{
 uint64_t *VAR_4 = VAR_1;
 uint8_t *VAR_5, VAR_6, VAR_7;
 int VAR_8, VAR_9;

 VAR_5 = FUNC_0(VAR_2);
 VAR_6 = 0;
 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  VAR_7 = VAR_5[VAR_8] & 0x01;
  for (VAR_9 = 1; VAR_9 < 8; VAR_9++)
   VAR_7 ^= (VAR_5[VAR_8] >> VAR_9) & 0x01;
  VAR_6 |= (VAR_7 << VAR_8);
 }
 *VAR_4 |= (1 << VAR_6);

 return (1);
}
