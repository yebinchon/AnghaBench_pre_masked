
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
 uint32_t *VAR_3 = VAR_0;
 int VAR_4 = 0;

 VAR_4 = FUNC_1(FUNC_0(VAR_1));
 if (VAR_4 < 32)
  VAR_3[0] |= (1 << VAR_4);
 else
  VAR_3[1] |= (1 << (VAR_4 - 32));

 return (1);
}
