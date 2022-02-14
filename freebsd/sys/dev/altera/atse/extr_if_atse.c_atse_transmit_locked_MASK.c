
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct ifnet {struct atse_softc* if_softc; } ;
struct buf_ring {int dummy; } ;
struct atse_softc {int xchan_tx; int txcount; struct buf_ring* br; } ;


 int FUNC_0 (struct ifnet*,struct mbuf*) ;
 int VAR_0 ;
 int FUNC_1 (struct ifnet*,struct buf_ring*) ;
 struct mbuf* FUNC_2 (struct ifnet*,struct buf_ring*) ;
 int FUNC_3 (struct ifnet*,struct buf_ring*,struct mbuf*) ;
 int FUNC_4 (int ,struct mbuf**,int ,int,int,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct ifnet *VAR_1)
{
 struct atse_softc *VAR_2;
 struct mbuf *VAR_3;
 struct buf_ring *VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_2 = VAR_1->if_softc;
 VAR_4 = VAR_2->br;

 VAR_6 = 0;

 while ((VAR_3 = FUNC_2(VAR_1, VAR_4)) != ((void*)0)) {
  VAR_5 = FUNC_4(VAR_2->xchan_tx, &VAR_3, 0, 4, 4, VAR_0);
  if (VAR_5 != 0) {

   FUNC_3(VAR_1, VAR_4, VAR_3);
   break;
  }

  FUNC_1(VAR_1, VAR_4);

  VAR_2->txcount++;
  VAR_6++;


  FUNC_0(VAR_1, VAR_3);
        }

 if (VAR_6 > 0)
  FUNC_5(VAR_2->xchan_tx);

 return (0);
}
