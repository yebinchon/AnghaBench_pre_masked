
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
typedef int u_char ;
typedef int token_t ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_port; int sin_family; } ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int FUNC_3 (int *,int *,int) ;

token_t *
FUNC_4(struct sockaddr_in *VAR_1)
{
 token_t *VAR_2;
 u_char *VAR_3 = ((void*)0);
 uint16_t VAR_4;

 FUNC_3(VAR_2, VAR_3, sizeof(u_char) + 2 * sizeof(uint16_t) +
     sizeof(uint32_t));
 if (VAR_2 == ((void*)0))
  return (((void*)0));

 FUNC_1(VAR_3, VAR_0);
 VAR_4 = VAR_1->sin_family;
 FUNC_2(VAR_3, VAR_4);
 FUNC_0(VAR_3, &VAR_1->sin_port, sizeof(uint16_t));
 FUNC_0(VAR_3, &VAR_1->sin_addr.s_addr, sizeof(uint32_t));

 return (VAR_2);
}
