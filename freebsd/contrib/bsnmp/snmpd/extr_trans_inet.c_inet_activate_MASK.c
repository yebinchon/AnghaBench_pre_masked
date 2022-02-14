
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tport {int dummy; } ;
struct inet_port {int (* activate ) (struct inet_port*) ;} ;


 int FUNC_0 (struct inet_port*) ;

__attribute__((used)) static int
FUNC_1(struct tport *VAR_0)
{
 struct inet_port *VAR_1 = (struct inet_port *)VAR_0;

 return (VAR_1->activate(VAR_1));
}
