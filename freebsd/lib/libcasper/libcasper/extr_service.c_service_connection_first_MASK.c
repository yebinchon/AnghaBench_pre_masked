
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct service_connection {scalar_t__ sc_magic; } ;
struct service {scalar_t__ s_magic; int s_connections; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct service_connection* FUNC_0 (int *) ;
 int FUNC_1 (int) ;

struct service_connection *
FUNC_2(struct service *VAR_2)
{
 struct service_connection *VAR_3;

 FUNC_1(VAR_2->s_magic == VAR_1);

 VAR_3 = FUNC_0(&VAR_2->s_connections);
 FUNC_1(VAR_3 == ((void*)0) ||
     VAR_3->sc_magic == VAR_0);
 return (VAR_3);
}
