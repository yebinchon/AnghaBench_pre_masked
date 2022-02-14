
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct ifnet {int if_flags; int if_drv_flags; int if_snd; int if_softc; } ;
typedef TYPE_1__* priv_p ;
typedef int node_p ;
typedef int hook_p ;
struct TYPE_2__ {int ether; } ;


 int FUNC_0 (struct ifnet*,struct mbuf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,struct mbuf*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int,int ,struct mbuf*) ;
 int FUNC_5 (struct ifnet*,int ,int) ;
 int FUNC_6 (struct mbuf*) ;
 int FUNC_7 (struct mbuf*,int *) ;

__attribute__((used)) static void
FUNC_8(node_p VAR_7, hook_p VAR_8, void *VAR_9, int VAR_10)
{
 struct ifnet *VAR_11 = VAR_9;
 const priv_p VAR_12 = (priv_p)VAR_11->if_softc;
 int VAR_13 = 0;
 struct mbuf *VAR_14;



 if (!((VAR_11->if_flags & VAR_6) &&
     (VAR_11->if_drv_flags & VAR_4)))
  return;

 for (;;) {



  FUNC_1(&VAR_11->if_snd, VAR_14);


  if (VAR_14 == ((void*)0))
   break;


  FUNC_7(VAR_14, ((void*)0));






  FUNC_0(VAR_11, VAR_14);

  if (VAR_11->if_flags & VAR_5) {
   FUNC_5(VAR_11, VAR_0, 1);
   FUNC_6(VAR_14);
   continue;
  }





  FUNC_2();
  FUNC_4(VAR_13, VAR_12->ether, VAR_14);
  FUNC_3();


  if (VAR_13 == 0)
   FUNC_5(VAR_11, VAR_2, 1);
  else
   FUNC_5(VAR_11, VAR_1, 1);
 }

 VAR_11->if_drv_flags &= ~VAR_3;

 return;
}
