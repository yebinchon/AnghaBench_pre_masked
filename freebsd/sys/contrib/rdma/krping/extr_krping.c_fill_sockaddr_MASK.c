
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {int sin6_len; int sin6_port; int sin6_addr; scalar_t__ sin6_family; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_len; int sin_port; TYPE_1__ sin_addr; scalar_t__ sin_family; } ;
struct krping_cb {scalar_t__ addr_type; int port; int addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (void*,int ,int) ;
 int FUNC_1 (struct sockaddr_storage*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct sockaddr_storage *VAR_2, struct krping_cb *VAR_3)
{
 FUNC_1(VAR_2, 0, sizeof(*VAR_2));

 if (VAR_3->addr_type == VAR_0) {
  struct sockaddr_in *VAR_4 = (struct sockaddr_in *)VAR_2;
  VAR_4->sin_len = sizeof(*VAR_4);
  VAR_4->sin_family = VAR_0;
  FUNC_0((void *)&VAR_4->sin_addr.s_addr, VAR_3->addr, 4);
  VAR_4->sin_port = VAR_3->port;
 } else if (VAR_3->addr_type == VAR_1) {
  struct sockaddr_in6 *VAR_5 = (struct sockaddr_in6 *)VAR_2;
  VAR_5->sin6_len = sizeof(*VAR_5);
  VAR_5->sin6_family = VAR_1;
  FUNC_0((void *)&VAR_5->sin6_addr, VAR_3->addr, 16);
  VAR_5->sin6_port = VAR_3->port;
 }
}
