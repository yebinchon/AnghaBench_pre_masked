
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int u_int ;
struct sockaddr_dl {int dummy; } ;


 int* FUNC_0 (struct sockaddr_dl*) ;

__attribute__((used)) static u_int
FUNC_1(void *VAR_0, struct sockaddr_dl *VAR_1, u_int VAR_2)
{
 uint16_t *VAR_3 = VAR_0;
 uint8_t *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_1);
 VAR_5 = VAR_2 * 6;
 VAR_3[VAR_5] = VAR_3[VAR_5+1] = (VAR_4[1] << 8 | VAR_4[0]);
 VAR_5 += 2;
 VAR_3[VAR_5] = VAR_3[VAR_5+1] = (VAR_4[3] << 8 | VAR_4[2]);
 VAR_5 += 2;
 VAR_3[VAR_5] = VAR_3[VAR_5+1] = (VAR_4[5] << 8 | VAR_4[4]);

 return (1);
}
