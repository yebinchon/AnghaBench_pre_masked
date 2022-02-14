
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hn_softc {int hn_flags; scalar_t__ hn_chim_gpadl; scalar_t__ hn_chim_bmap_cnt; int * hn_chim_bmap; int hn_ifp; int hn_prichan; } ;
struct hn_nvs_chim_disconn {int nvs_sig; int nvs_type; } ;
typedef int disconn ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct hn_softc*,struct hn_nvs_chim_disconn*,int) ;
 int VAR_6 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct hn_nvs_chim_disconn*,int ,int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void
FUNC_8(struct hn_softc *VAR_8)
{
 int VAR_9;

 if (VAR_8->hn_flags & VAR_0) {
  struct hn_nvs_chim_disconn VAR_10;




  FUNC_3(&VAR_10, 0, sizeof(VAR_10));
  VAR_10.nvs_type = VAR_3;
  VAR_10.nvs_sig = VAR_2;


  VAR_9 = FUNC_1(VAR_8, &VAR_10, sizeof(VAR_10));
  if (VAR_9) {
   FUNC_2(VAR_8->hn_ifp,
       "send nvs chim disconn failed: %d\n", VAR_9);




   if (!FUNC_6(VAR_8->hn_prichan))
    VAR_8->hn_flags |= VAR_1;
  }
  VAR_8->hn_flags &= ~VAR_0;
  while (!FUNC_7(VAR_8->hn_prichan) &&
      !FUNC_6(VAR_8->hn_prichan))
   FUNC_4("waittx", 1);




  FUNC_4("lingtx", (200 * VAR_6) / 1000);
 }

 if (VAR_7 < VAR_5 && VAR_8->hn_chim_gpadl != 0) {



  VAR_9 = FUNC_5(VAR_8->hn_prichan,
      VAR_8->hn_chim_gpadl);
  if (VAR_9) {
   FUNC_2(VAR_8->hn_ifp,
       "chim gpadl disconn failed: %d\n", VAR_9);
   VAR_8->hn_flags |= VAR_1;
  }
  VAR_8->hn_chim_gpadl = 0;
 }

 if (VAR_8->hn_chim_bmap != ((void*)0)) {
  FUNC_0(VAR_8->hn_chim_bmap, VAR_4);
  VAR_8->hn_chim_bmap = ((void*)0);
  VAR_8->hn_chim_bmap_cnt = 0;
 }
}
