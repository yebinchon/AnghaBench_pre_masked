
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbuf {int dummy; } ;
typedef int node_p ;
typedef int hook_p ;
typedef TYPE_1__* bt3c_softc_p ;
struct TYPE_2__ {int inq; int stat; int * hook; } ;


 int FUNC_0 (int *,struct mbuf*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mbuf*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int *,struct mbuf*) ;
 int FUNC_8 (int *,struct mbuf*) ;

__attribute__((used)) static void
FUNC_9(node_p VAR_0, hook_p VAR_1, void *VAR_2, int VAR_3)
{
 bt3c_softc_p VAR_4 = (bt3c_softc_p) FUNC_6(VAR_0);
 struct mbuf *VAR_5 = ((void*)0);
 int VAR_6;

 if (VAR_4 == ((void*)0))
  return;

 if (VAR_4->hook != ((void*)0) && FUNC_5(VAR_4->hook)) {
  for (;;) {
   FUNC_0(&VAR_4->inq, VAR_5);
   if (VAR_5 == ((void*)0))
    break;

   FUNC_7(VAR_6, VAR_4->hook, VAR_5);
   if (VAR_6 != 0)
    FUNC_3(VAR_4->stat);
  }
 } else {
  FUNC_1(&VAR_4->inq);
  for (;;) {
   FUNC_8(&VAR_4->inq, VAR_5);
   if (VAR_5 == ((void*)0))
    break;

   FUNC_3(VAR_4->stat);
   FUNC_4(VAR_5);
  }
  FUNC_2(&VAR_4->inq);
 }
}
