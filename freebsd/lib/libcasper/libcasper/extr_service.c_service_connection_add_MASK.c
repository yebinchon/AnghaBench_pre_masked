
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct service_connection {int sc_magic; int * sc_chan; int * sc_limits; } ;
struct service {scalar_t__ s_magic; int s_connections; } ;
typedef int nvlist_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,struct service_connection*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int,int ) ;
 int VAR_2 ;
 int FUNC_4 (struct service_connection*) ;
 struct service_connection* FUNC_5 (int) ;
 int * FUNC_6 (int const*) ;
 int VAR_3 ;
 int FUNC_7 (struct service*) ;

struct service_connection *
FUNC_8(struct service *VAR_4, int VAR_5,
    const nvlist_t *VAR_6)
{
 struct service_connection *VAR_7;
 int VAR_8;

 FUNC_1(VAR_4->s_magic == VAR_1);

 VAR_7 = FUNC_5(sizeof(*VAR_7));
 if (VAR_7 == ((void*)0))
  return (((void*)0));
 VAR_7->sc_chan = FUNC_3(VAR_5,
     FUNC_7(VAR_4));
 if (VAR_7->sc_chan == ((void*)0)) {
  VAR_8 = VAR_2;
  FUNC_4(VAR_7);
  VAR_2 = VAR_8;
  return (((void*)0));
 }
 if (VAR_6 == ((void*)0)) {
  VAR_7->sc_limits = ((void*)0);
 } else {
  VAR_7->sc_limits = FUNC_6(VAR_6);
  if (VAR_7->sc_limits == ((void*)0)) {
   VAR_8 = VAR_2;
   (void)FUNC_2(VAR_7->sc_chan, ((void*)0));
   FUNC_4(VAR_7);
   VAR_2 = VAR_8;
   return (((void*)0));
  }
 }
 VAR_7->sc_magic = VAR_0;
 FUNC_0(&VAR_4->s_connections, VAR_7, VAR_3);
 return (VAR_7);
}
