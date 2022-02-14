
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct service_connection {scalar_t__ sc_magic; int * sc_limits; } ;
typedef int nvlist_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct service_connection *VAR_1,
    nvlist_t *VAR_2)
{

 FUNC_0(VAR_1->sc_magic == VAR_0);

 FUNC_1(VAR_1->sc_limits);
 VAR_1->sc_limits = VAR_2;
}
