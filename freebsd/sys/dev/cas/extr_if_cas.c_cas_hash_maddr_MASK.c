
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct sockaddr_dl {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sockaddr_dl*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static u_int
FUNC_2(void *VAR_1, struct sockaddr_dl *VAR_2, u_int VAR_3)
{
 uint32_t VAR_4, *VAR_5 = VAR_1;

 VAR_4 = FUNC_1(FUNC_0(VAR_2), VAR_0);

 VAR_4 >>= 24;

 VAR_5[VAR_4 >> 4] |= 1 << (15 - (VAR_4 & 15));

 return (1);
}
