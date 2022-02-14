
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct ifnet {int if_drv_flags; struct atse_softc* if_softc; } ;
struct buf_ring {int dummy; } ;
struct atse_softc {int atse_flags; int br_mtx; struct buf_ring* br; } ;


 int VAR_0 ;
 int FUNC_0 (struct atse_softc*) ;
 int FUNC_1 (struct atse_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct ifnet*) ;
 int FUNC_3 (struct ifnet*,struct buf_ring*,struct mbuf*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct ifnet *VAR_3, struct mbuf *VAR_4)
{
 struct atse_softc *VAR_5;
 struct buf_ring *VAR_6;
 int VAR_7;

 VAR_5 = VAR_3->if_softc;
 VAR_6 = VAR_5->br;

 FUNC_0(VAR_5);

 FUNC_4(&VAR_5->br_mtx);

 if ((VAR_3->if_drv_flags & (VAR_2 | VAR_1)) != VAR_2) {
  VAR_7 = FUNC_3(VAR_3, VAR_5->br, VAR_4);
  FUNC_5(&VAR_5->br_mtx);
  FUNC_1(VAR_5);
  return (VAR_7);
 }

 if ((VAR_5->atse_flags & VAR_0) == 0) {
  VAR_7 = FUNC_3(VAR_3, VAR_5->br, VAR_4);
  FUNC_5(&VAR_5->br_mtx);
  FUNC_1(VAR_5);
  return (VAR_7);
 }

 VAR_7 = FUNC_3(VAR_3, VAR_6, VAR_4);
 if (VAR_7) {
  FUNC_5(&VAR_5->br_mtx);
  FUNC_1(VAR_5);
  return (VAR_7);
 }
 VAR_7 = FUNC_2(VAR_3);

 FUNC_5(&VAR_5->br_mtx);
 FUNC_1(VAR_5);

 return (VAR_7);
}
