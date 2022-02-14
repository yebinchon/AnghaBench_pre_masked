
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* ubt_softc_p ;
struct mbuf {int dummy; } ;
typedef int * hook_p ;
struct TYPE_6__ {int * sc_hook; } ;


 int VAR_0 ;
 int FUNC_0 (struct mbuf*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int *,struct mbuf*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_7(ubt_softc_p VAR_1, struct mbuf **VAR_2)
{
 hook_p VAR_3;
 int VAR_4;
 FUNC_4(VAR_1);
 if ((VAR_3 = VAR_1->sc_hook) != ((void*)0))
  FUNC_1(VAR_3);
 FUNC_5(VAR_1);

 if (VAR_3 == ((void*)0)) {
  FUNC_0(*VAR_2);
  return (VAR_0);
 }

 FUNC_3(VAR_4, VAR_3, *VAR_2);
 FUNC_2(VAR_3);

 if (VAR_4 != 0)
  FUNC_6(VAR_1);

 return (VAR_4);
}
