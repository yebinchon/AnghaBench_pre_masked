
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct in6_aliasreq {int ifra_dstaddr; int ifra_addr; int ifra_name; } ;
struct addrinfo {TYPE_1__* ai_addr; } ;
typedef int in6_addreq ;
struct TYPE_2__ {int sa_len; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ,struct in6_aliasreq*) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int FUNC_2 (struct in6_aliasreq*,int ,int) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(int VAR_2, struct addrinfo *VAR_3, struct addrinfo *VAR_4)
{
 struct in6_aliasreq VAR_5;

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 FUNC_3(VAR_5.ifra_name, VAR_1, sizeof(VAR_5.ifra_name));
 FUNC_1(&VAR_5.ifra_addr, VAR_3->ai_addr, VAR_3->ai_addr->sa_len);
 FUNC_1(&VAR_5.ifra_dstaddr, VAR_4->ai_addr,
     VAR_4->ai_addr->sa_len);

 if (FUNC_0(VAR_2, VAR_0, &VAR_5) < 0)
  FUNC_4("SIOCSIFPHYADDR_IN6");
}
