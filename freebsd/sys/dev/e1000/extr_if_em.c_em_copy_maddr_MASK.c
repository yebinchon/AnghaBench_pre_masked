
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u8 ;
struct sockaddr_dl {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sockaddr_dl*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,int) ;

__attribute__((used)) static u_int
FUNC_2(void *VAR_2, struct sockaddr_dl *VAR_3, u_int VAR_4)
{
 u8 *VAR_5 = VAR_2;

 if (VAR_4 == VAR_1)
  return (1);

 FUNC_1(FUNC_0(VAR_3), &VAR_5[VAR_4 * VAR_0], VAR_0);

 return (1);
}
