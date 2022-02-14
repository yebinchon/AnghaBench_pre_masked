
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int u_int ;
struct sockaddr_dl {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sockaddr_dl*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static u_int
FUNC_2(void *VAR_2, struct sockaddr_dl *VAR_3, u_int VAR_4)
{
 uint8_t *VAR_5 = VAR_2;
 uint32_t VAR_6;

 VAR_6 = FUNC_1(FUNC_0(VAR_3), VAR_1) & ((1 << VAR_0) - 1);
 VAR_5[(VAR_6 >> 3)] |= 1 << (VAR_6 & 0x7);

 return (1);
}
