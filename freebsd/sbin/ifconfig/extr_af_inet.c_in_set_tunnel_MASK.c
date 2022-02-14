
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct in_aliasreq {int ifra_dstaddr; int ifra_addr; int ifra_name; } ;
struct addrinfo {TYPE_1__* ai_addr; } ;
typedef int addreq ;
struct TYPE_2__ {int sa_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int ,struct in_aliasreq*) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int FUNC_2 (struct in_aliasreq*,int ,int) ;
 int VAR_2 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(int VAR_3, struct addrinfo *VAR_4, struct addrinfo *VAR_5)
{
 struct in_aliasreq VAR_6;

 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 FUNC_3(VAR_6.ifra_name, VAR_2, VAR_0);
 FUNC_1(&VAR_6.ifra_addr, VAR_4->ai_addr, VAR_4->ai_addr->sa_len);
 FUNC_1(&VAR_6.ifra_dstaddr, VAR_5->ai_addr, VAR_5->ai_addr->sa_len);

 if (FUNC_0(VAR_3, VAR_1, &VAR_6) < 0)
  FUNC_4("SIOCSIFPHYADDR");
}
