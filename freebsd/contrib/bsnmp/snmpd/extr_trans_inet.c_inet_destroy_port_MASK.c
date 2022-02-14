
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tport {int dummy; } ;
struct inet_port {struct inet_port* dns_addr; } ;


 int FUNC_0 (struct inet_port*) ;
 int FUNC_1 (struct inet_port*) ;
 int FUNC_2 (struct tport*) ;

__attribute__((used)) static void
FUNC_3(struct tport *VAR_0)
{
 struct inet_port *VAR_1 = (struct inet_port *)VAR_0;

 FUNC_0(VAR_1);

 FUNC_2(VAR_0);

 FUNC_1(VAR_1->dns_addr);
 FUNC_1(VAR_1);
}
