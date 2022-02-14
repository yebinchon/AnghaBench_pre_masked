
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct ifnet {int if_drv_flags; int if_snd; struct are_softc* if_softc; } ;
struct TYPE_2__ {int are_tx_cnt; } ;
struct are_softc {scalar_t__ are_link_status; TYPE_1__ are_cdata; } ;


 int FUNC_0 (struct are_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct are_softc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct are_softc*,int ,int ) ;
 int FUNC_3 (struct ifnet*,struct mbuf*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *,struct mbuf*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,struct mbuf*) ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (struct are_softc*,struct mbuf**) ;

__attribute__((used)) static void
FUNC_8(struct ifnet *VAR_6)
{
 struct are_softc *VAR_7;
 struct mbuf *VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_7 = VAR_6->if_softc;

 FUNC_0(VAR_7);

 if ((VAR_6->if_drv_flags & (VAR_4 | VAR_3)) !=
     VAR_4 || VAR_7->are_link_status == 0 )
  return;

 for (VAR_9 = 0; !FUNC_5(&VAR_6->if_snd) &&
     VAR_7->are_cdata.are_tx_cnt < VAR_0 - 2; ) {
  FUNC_4(&VAR_6->if_snd, VAR_8);
  if (VAR_8 == ((void*)0))
   break;





  if (FUNC_7(VAR_7, &VAR_8)) {
   if (VAR_8 == ((void*)0))
    break;
   FUNC_6(&VAR_6->if_snd, VAR_8);
   VAR_6->if_drv_flags |= VAR_3;
   break;
  }

  VAR_9++;




  FUNC_3(VAR_6, VAR_8);
 }

 if (VAR_9 > 0) {
  VAR_10 = (FUNC_1(VAR_7, VAR_1) >> 20) & 7;
  if (VAR_10 == 0 || VAR_10 == 6) {

   FUNC_2(VAR_7, VAR_2, VAR_5);
  }
 }
}
