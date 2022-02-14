
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct sockaddr_dl {int dummy; } ;


 unsigned char* FUNC_0 (struct sockaddr_dl*) ;

__attribute__((used)) static u_int
FUNC_1(void *VAR_0, struct sockaddr_dl *VAR_1, u_int VAR_2)
{
 unsigned char *VAR_3;

 VAR_3 = FUNC_0(VAR_1);

 if (VAR_3[3] != 0 && VAR_3[4] != 0 && VAR_3[5] != 1)
  return (1);
 else
  return (0);
}
