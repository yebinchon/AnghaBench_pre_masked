
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_len; TYPE_1__ sin_addr; int sin_family; } ;


 int VAR_0 ;
 int FUNC_0 (struct sockaddr_in*,int ,int) ;

void
FUNC_1(register struct sockaddr_in *VAR_1, register u_int32_t VAR_2)
{

 FUNC_0(VAR_1, 0, sizeof(*VAR_1));



 VAR_1->sin_family = VAR_0;
 VAR_1->sin_addr.s_addr = VAR_2;
}
