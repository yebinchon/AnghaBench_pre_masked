
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {int sin6_addr; int sin6_flowinfo; int sin6_port; } ;
struct TYPE_8__ {int s_addr; } ;
struct TYPE_9__ {TYPE_2__ sin_addr; int sin_port; } ;
struct TYPE_7__ {scalar_t__ sa_family; } ;
union socket_addr {TYPE_6__ sin6; TYPE_3__ sin; TYPE_1__ sa; } ;
struct TYPE_10__ {int addr; int flowinfo; } ;
struct TYPE_11__ {TYPE_4__ ipv6; int ipv4; } ;
struct ds_header {int version; TYPE_5__ addr; int port; int length; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static void FUNC_1(struct ds_header *VAR_3, union socket_addr *VAR_4)
{
 if (VAR_4->sa.sa_family == VAR_0) {
  VAR_3->version = 4;
  VAR_3->length = VAR_1;
  VAR_3->port = VAR_4->sin.sin_port;
  VAR_3->addr.ipv4 = VAR_4->sin.sin_addr.s_addr;
 } else {
  VAR_3->version = 6;
  VAR_3->length = VAR_2;
  VAR_3->port = VAR_4->sin6.sin6_port;
  VAR_3->addr.ipv6.flowinfo= VAR_4->sin6.sin6_flowinfo;
  FUNC_0(&VAR_3->addr.ipv6.addr, &VAR_4->sin6.sin6_addr, 16);
 }
}
