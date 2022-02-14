
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct sockaddr_dl {int dummy; } ;


 int FUNC_0 (struct sockaddr_dl*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u_int
FUNC_2(void *VAR_0, struct sockaddr_dl *VAR_1, u_int VAR_2)
{
 uint32_t VAR_3, *VAR_4 = VAR_0;

 VAR_3 = FUNC_1(FUNC_0(VAR_1));
 VAR_4[VAR_3 >> 5] |= 1 << (VAR_3 & 0x1F);

 return (1);
}
