
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int u_int ;
struct sockaddr_dl {int dummy; } ;


 char* FUNC_0 (struct sockaddr_dl*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static u_int
FUNC_2(void *VAR_0, struct sockaddr_dl *VAR_1, u_int VAR_2)
{
 uint32_t VAR_3, *VAR_4 = VAR_0;
 char *VAR_5;
 uint8_t VAR_6;


 VAR_5 = FUNC_0(VAR_1);
 VAR_3 = FUNC_1(VAR_5 + 0);
 VAR_6 = (VAR_3 >> 18) ^ (VAR_3 >> 12) ^ (VAR_3 >> 6) ^ VAR_3;
 VAR_3 = FUNC_1(VAR_5 + 3);
 VAR_6 ^= (VAR_3 >> 18) ^ (VAR_3 >> 12) ^ (VAR_3 >> 6) ^ VAR_3;
 VAR_6 &= 0x3f;
 VAR_4[VAR_6 / 32] |= (1 << (VAR_6 % 32));

 return (1);
}
