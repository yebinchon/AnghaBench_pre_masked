
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mbuf {int dummy; } ;
struct bge_softc {int bge_txcnt; int bge_tx_prodidx; int bge_link; } ;
typedef int if_t ;


 int FUNC_0 (struct bge_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct bge_softc*,struct mbuf**,int *) ;
 int FUNC_2 (struct bge_softc*,int ) ;
 int FUNC_3 (int ,struct mbuf*) ;
 struct mbuf* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct bge_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,struct mbuf*) ;
 int FUNC_9 (int ,int,int ) ;

__attribute__((used)) static void
FUNC_10(if_t VAR_3)
{
 struct bge_softc *VAR_4;
 struct mbuf *VAR_5;
 uint32_t VAR_6;
 int VAR_7;

 VAR_4 = FUNC_6(VAR_3);
 FUNC_0(VAR_4);

 if (!VAR_4->bge_link ||
     (FUNC_5(VAR_3) & (VAR_2 | VAR_1)) !=
     VAR_2)
  return;

 VAR_6 = VAR_4->bge_tx_prodidx;

 for (VAR_7 = 0; !FUNC_7(VAR_3);) {
  if (VAR_4->bge_txcnt > VAR_0 - 16) {
   FUNC_9(VAR_3, VAR_1, 0);
   break;
  }
  VAR_5 = FUNC_4(VAR_3);
  if (VAR_5 == ((void*)0))
   break;






  if (FUNC_1(VAR_4, &VAR_5, &VAR_6)) {
   if (VAR_5 == ((void*)0))
    break;
   FUNC_8(VAR_3, VAR_5);
   FUNC_9(VAR_3, VAR_1, 0);
   break;
  }
  ++VAR_7;





  FUNC_3(VAR_3, VAR_5);
 }

 if (VAR_7 > 0)
  FUNC_2(VAR_4, VAR_6);
}
