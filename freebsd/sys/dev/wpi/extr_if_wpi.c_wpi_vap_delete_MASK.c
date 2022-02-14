
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpi_buf {int * m; } ;
struct wpi_vap {struct wpi_buf wv_bcbuf; } ;
struct ieee80211vap {int iv_opmode; } ;
typedef enum ieee80211_opmode { ____Placeholder_ieee80211_opmode } ieee80211_opmode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct wpi_vap* FUNC_0 (struct ieee80211vap*) ;
 int FUNC_1 (struct wpi_vap*) ;
 int FUNC_2 (struct wpi_vap*,int ) ;
 int FUNC_3 (struct ieee80211vap*) ;
 int FUNC_4 (struct ieee80211vap*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct ieee80211vap *VAR_3)
{
 struct wpi_vap *VAR_4 = FUNC_0(VAR_3);
 struct wpi_buf *VAR_5 = &VAR_4->wv_bcbuf;
 enum ieee80211_opmode VAR_6 = VAR_3->iv_opmode;

 FUNC_3(VAR_3);
 FUNC_4(VAR_3);

 if (VAR_6 == VAR_1 || VAR_6 == VAR_0) {
  if (VAR_5->m != ((void*)0))
   FUNC_5(VAR_5->m);

  FUNC_1(VAR_4);
 }

 FUNC_2(VAR_4, VAR_2);
}
