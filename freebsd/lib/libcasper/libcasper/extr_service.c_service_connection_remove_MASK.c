
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct service_connection {scalar_t__ sc_magic; int sc_chan; int sc_limits; } ;
struct service {scalar_t__ s_magic; int s_connections; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,struct service_connection*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct service_connection*) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;

void
FUNC_5(struct service *VAR_3,
    struct service_connection *VAR_4)
{

 FUNC_1(VAR_3->s_magic == VAR_1);
 FUNC_1(VAR_4->sc_magic == VAR_0);

 FUNC_0(&VAR_3->s_connections, VAR_4, VAR_2);
 VAR_4->sc_magic = 0;
 FUNC_4(VAR_4->sc_limits);
 FUNC_2(VAR_4->sc_chan);
 FUNC_3(VAR_4);
}
