
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int v6; } ;
struct TYPE_7__ {int s6_addr; } ;
struct TYPE_6__ {int v6; } ;
struct TYPE_5__ {int v6; } ;
struct sockaddr_in6 {int sin6_len; int rdport; int sin6_port; TYPE_4__ rdaddr; TYPE_3__ sin6_addr; void* sin6_family; int dport; int sport; TYPE_2__ daddr; TYPE_1__ saddr; int proto; void* af; int direction; } ;
struct pfioc_natlook {int sin6_len; int rdport; int sin6_port; TYPE_4__ rdaddr; TYPE_3__ sin6_addr; void* sin6_family; int dport; int sport; TYPE_2__ daddr; TYPE_1__ saddr; int proto; void* af; int direction; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,struct sockaddr_in6*) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct sockaddr_in6*,int ,int) ;

int
FUNC_3(struct sockaddr_in6 *VAR_5, struct sockaddr_in6 *VAR_6,
    struct sockaddr_in6 *VAR_7)
{
 struct pfioc_natlook VAR_8;

 FUNC_2(&VAR_8, 0, sizeof VAR_8);
 VAR_8.direction = VAR_3;
 VAR_8.af = VAR_0;
 VAR_8.proto = VAR_2;
 FUNC_1(&VAR_8.saddr.v6, &VAR_5->sin6_addr.s6_addr, sizeof VAR_8.saddr.v6);
 FUNC_1(&VAR_8.daddr.v6, &VAR_6->sin6_addr.s6_addr, sizeof VAR_8.daddr.v6);
 VAR_8.sport = VAR_5->sin6_port;
 VAR_8.dport = VAR_6->sin6_port;

 if (FUNC_0(VAR_4, VAR_1, &VAR_8) == -1)
  return (-1);

 FUNC_2(VAR_7, 0, sizeof(struct sockaddr_in6));
 VAR_7->sin6_len = sizeof(struct sockaddr_in6);
 VAR_7->sin6_family = VAR_0;
 FUNC_1(&VAR_7->sin6_addr.s6_addr, &VAR_8.rdaddr.v6,
     sizeof VAR_7->sin6_addr);
 VAR_7->sin6_port = VAR_8.rdport;

 return (0);
}
