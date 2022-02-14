
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct service_connection {scalar_t__ sc_magic; int sc_chan; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

int
FUNC_2(const struct service_connection *VAR_1)
{

 FUNC_0(VAR_1->sc_magic == VAR_0);

 return (FUNC_1(VAR_1->sc_chan));
}
