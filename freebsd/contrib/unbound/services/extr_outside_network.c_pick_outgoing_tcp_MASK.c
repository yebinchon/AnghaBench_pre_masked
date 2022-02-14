
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct waiting_tcp {TYPE_1__* outnet; int addrlen; int addr; } ;
struct sockaddr_in6 {scalar_t__ sin6_port; } ;
struct sockaddr_in {scalar_t__ sin_port; } ;
struct sockaddr {int dummy; } ;
struct port_if {int addrlen; int addr; } ;
struct TYPE_2__ {int num_ip6; int num_ip4; int rnd; struct port_if* ip4_ifs; struct port_if* ip6_ifs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int,struct sockaddr*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_2 ;
 int FUNC_6 (int ,char*,int *,int ) ;
 int FUNC_7 (struct port_if*) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int ) ;
 size_t FUNC_10 (int ,int) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int
FUNC_12(struct waiting_tcp* VAR_3, int VAR_4)
{
 struct port_if* VAR_5 = ((void*)0);
 int VAR_6;





  VAR_6 = VAR_3->outnet->num_ip4;
 if(VAR_6 == 0) {
  FUNC_8("no TCP outgoing interfaces of family");
  FUNC_6(VAR_1, "for addr", &VAR_3->addr, VAR_3->addrlen);

  FUNC_4(VAR_4);



  return 0;
 }





  VAR_5 = &VAR_3->outnet->ip4_ifs[FUNC_10(VAR_3->outnet->rnd, VAR_6)];
 FUNC_7(VAR_5);
 if(FUNC_1(&VAR_5->addr, VAR_5->addrlen)) {

  return 1;
 }

 if(FUNC_2(&VAR_5->addr, VAR_5->addrlen))
  ((struct sockaddr_in6*)&VAR_5->addr)->sin6_port = 0;
 else ((struct sockaddr_in*)&VAR_5->addr)->sin_port = 0;
 if(FUNC_3(VAR_4, (struct sockaddr*)&VAR_5->addr, VAR_5->addrlen) != 0) {

  FUNC_8("outgoing tcp: bind: %s", FUNC_9(VAR_2));
  FUNC_4(VAR_4);





  return 0;
 }
 FUNC_6(VAR_0, "tcp bound to src", &VAR_5->addr, VAR_5->addrlen);
 return 1;
}
