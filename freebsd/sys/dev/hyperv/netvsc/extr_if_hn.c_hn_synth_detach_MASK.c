
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hn_softc {int hn_flags; scalar_t__ hn_rxbuf_gpadl; scalar_t__ hn_chim_gpadl; int hn_ifp; int hn_prichan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct hn_softc*) ;
 int FUNC_2 (struct hn_softc*) ;
 int FUNC_3 (struct hn_softc*) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,scalar_t__) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_6(struct hn_softc *VAR_5)
{

 FUNC_0(VAR_5->hn_flags & VAR_2,
     ("synthetic parts were not attached"));


 FUNC_3(VAR_5);


 FUNC_2(VAR_5);


 FUNC_1(VAR_5);

 if (VAR_4 >= VAR_3 && VAR_5->hn_rxbuf_gpadl != 0) {



  int VAR_6;

  VAR_6 = FUNC_5(VAR_5->hn_prichan,
      VAR_5->hn_rxbuf_gpadl);
  if (VAR_6) {
   FUNC_4(VAR_5->hn_ifp,
       "rxbuf gpadl disconn failed: %d\n", VAR_6);
   VAR_5->hn_flags |= VAR_1;
  }
  VAR_5->hn_rxbuf_gpadl = 0;
 }

 if (VAR_4 >= VAR_3 && VAR_5->hn_chim_gpadl != 0) {




  int VAR_7;

  VAR_7 = FUNC_5(VAR_5->hn_prichan,
      VAR_5->hn_chim_gpadl);
  if (VAR_7) {
   FUNC_4(VAR_5->hn_ifp,
       "chim gpadl disconn failed: %d\n", VAR_7);
   VAR_5->hn_flags |= VAR_0;
  }
  VAR_5->hn_chim_gpadl = 0;
 }
 VAR_5->hn_flags &= ~VAR_2;
}
