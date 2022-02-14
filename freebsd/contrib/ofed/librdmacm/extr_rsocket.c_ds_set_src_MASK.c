
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct TYPE_8__ {struct sockaddr sin6_addr; int sin6_flowinfo; int sin6_port; int sin6_family; } ;
struct TYPE_6__ {int s_addr; } ;
struct TYPE_7__ {TYPE_1__ sin_addr; int sin_port; int sin_family; } ;
union socket_addr {TYPE_3__ sin6; TYPE_2__ sin; } ;
struct TYPE_9__ {union socket_addr addr; int flowinfo; } ;
struct TYPE_10__ {TYPE_4__ ipv6; int ipv4; } ;
struct ds_header {int version; TYPE_5__ addr; int port; } ;
typedef int socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sockaddr*,union socket_addr*,int) ;
 int FUNC_1 (union socket_addr*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct sockaddr *VAR_2, socklen_t *VAR_3,
         struct ds_header *VAR_4)
{
 union socket_addr VAR_5;

 FUNC_1(&VAR_5, 0, sizeof VAR_5);
 if (VAR_4->version == 4) {
  if (*VAR_3 > sizeof(VAR_5.sin))
   *VAR_3 = sizeof(VAR_5.sin);

  VAR_5.sin.sin_family = VAR_0;
  VAR_5.sin.sin_port = VAR_4->port;
  VAR_5.sin.sin_addr.s_addr = VAR_4->addr.ipv4;
 } else {
  if (*VAR_3 > sizeof(VAR_5.sin6))
   *VAR_3 = sizeof(VAR_5.sin6);

  VAR_5.sin6.sin6_family = VAR_1;
  VAR_5.sin6.sin6_port = VAR_4->port;
  VAR_5.sin6.sin6_flowinfo = VAR_4->addr.ipv6.flowinfo;
  FUNC_0(&VAR_5.sin6.sin6_addr, &VAR_4->addr.ipv6.addr, 16);
 }
 FUNC_0(VAR_2, &VAR_5, *VAR_3);
}
