
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct service_connection {scalar_t__ sc_magic; } ;


 scalar_t__ VAR_0 ;
 struct service_connection* FUNC_0 (struct service_connection*,int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;

struct service_connection *
FUNC_2(struct service_connection *VAR_2)
{

 FUNC_1(VAR_2->sc_magic == VAR_0);

 VAR_2 = FUNC_0(VAR_2, VAR_1);
 FUNC_1(VAR_2 == ((void*)0) ||
     VAR_2->sc_magic == VAR_0);
 return (VAR_2);
}
