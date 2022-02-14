
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_4__ {int * s6_addr; } ;
struct sockaddr_in6 {scalar_t__ sin6_family; int sin6_port; TYPE_2__ sin6_addr; } ;
struct TYPE_3__ {int s_addr; } ;
struct sockaddr_in {int sin_port; int sin_len; int sin_family; TYPE_1__ sin_addr; } ;
typedef int addr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct sockaddr_in*,int ,int) ;

void
FUNC_3(struct sockaddr_in6 *VAR_2)
{
 struct sockaddr_in *VAR_3;
 u_int32_t VAR_4;
 int VAR_5;

 if (VAR_2->sin6_family != VAR_1 ||
     !FUNC_0(&VAR_2->sin6_addr))
  return;
 VAR_3 = (struct sockaddr_in *)VAR_2;
 FUNC_1(&VAR_4, &VAR_2->sin6_addr.s6_addr[12], sizeof(VAR_4));
 VAR_5 = VAR_2->sin6_port;
 FUNC_2(VAR_3, 0, sizeof(struct sockaddr_in));
 VAR_3->sin_addr.s_addr = VAR_4;
 VAR_3->sin_port = VAR_5;
 VAR_3->sin_family = VAR_0;
 VAR_3->sin_len = sizeof(struct sockaddr_in);
}
