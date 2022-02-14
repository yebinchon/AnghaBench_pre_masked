
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hn_softc {int hn_flags; scalar_t__ hn_rxbuf_gpadl; int hn_ifp; int hn_prichan; } ;
struct hn_nvs_rxbuf_disconn {int nvs_sig; int nvs_type; } ;
typedef int disconn ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct hn_softc*,struct hn_nvs_rxbuf_disconn*,int) ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct hn_nvs_rxbuf_disconn*,int ,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void
FUNC_7(struct hn_softc *VAR_7)
{
 int VAR_8;

 if (VAR_7->hn_flags & VAR_0) {
  struct hn_nvs_rxbuf_disconn VAR_9;




  FUNC_2(&VAR_9, 0, sizeof(VAR_9));
  VAR_9.nvs_type = VAR_3;
  VAR_9.nvs_sig = VAR_2;


  VAR_8 = FUNC_0(VAR_7, &VAR_9, sizeof(VAR_9));
  if (VAR_8) {
   FUNC_1(VAR_7->hn_ifp,
       "send nvs rxbuf disconn failed: %d\n", VAR_8);




   if (!FUNC_5(VAR_7->hn_prichan))
    VAR_7->hn_flags |= VAR_1;
  }
  VAR_7->hn_flags &= ~VAR_0;
  while (!FUNC_6(VAR_7->hn_prichan) &&
      !FUNC_5(VAR_7->hn_prichan))
   FUNC_3("waittx", 1);



  FUNC_3("lingtx", (200 * VAR_5) / 1000);
 }

 if (VAR_6 < VAR_4 && VAR_7->hn_rxbuf_gpadl != 0) {



  VAR_8 = FUNC_4(VAR_7->hn_prichan,
      VAR_7->hn_rxbuf_gpadl);
  if (VAR_8) {
   FUNC_1(VAR_7->hn_ifp,
       "rxbuf gpadl disconn failed: %d\n", VAR_8);
   VAR_7->hn_flags |= VAR_1;
  }
  VAR_7->hn_rxbuf_gpadl = 0;
 }
}
