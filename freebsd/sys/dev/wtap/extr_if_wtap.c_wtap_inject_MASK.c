
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wtap_softc {int sc_mtx; int sc_rxtask; int sc_tq; int sc_rxbuf; } ;
struct wtap_buf {struct mbuf* m; } ;
struct mbuf {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,struct wtap_buf*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;

void
FUNC_6(struct wtap_softc *VAR_4, struct mbuf *VAR_5)
{
      struct wtap_buf *VAR_6 = (struct wtap_buf *)FUNC_2(sizeof(struct wtap_buf),
          VAR_1, VAR_0 | VAR_2);
      FUNC_0(VAR_6 != ((void*)0), ("could not allocated a new wtap_buf\n"));
      VAR_6->m = VAR_5;

      FUNC_3(&VAR_4->sc_mtx);
      FUNC_1(&VAR_4->sc_rxbuf, VAR_6, VAR_3);
      FUNC_5(VAR_4->sc_tq, &VAR_4->sc_rxtask);
      FUNC_4(&VAR_4->sc_mtx);
}
