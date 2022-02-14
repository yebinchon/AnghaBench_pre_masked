
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct g_cache_softc {int sc_maxent; int sc_nused; int sc_usedlist; int sc_mtx; } ;
struct g_cache_desc {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct g_cache_desc*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 struct g_cache_desc* FUNC_3 (int *) ;
 int FUNC_4 (int *,struct g_cache_desc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct g_cache_softc*,struct g_cache_desc*) ;
 int VAR_3 ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static void
FUNC_7(struct g_cache_softc *VAR_4)
{
 struct g_cache_desc *VAR_5;
 u_int VAR_6;

 FUNC_6(&VAR_4->sc_mtx, VAR_0);

 VAR_6 = VAR_3 * VAR_4->sc_maxent / 100;
 while (VAR_4->sc_nused > VAR_6) {
  FUNC_0(!FUNC_2(&VAR_4->sc_usedlist), ("used list empty"));
  VAR_5 = FUNC_3(&VAR_4->sc_usedlist);
  FUNC_4(&VAR_4->sc_usedlist, VAR_5, VAR_2);
  VAR_4->sc_nused--;
  FUNC_1(VAR_5, VAR_1);
  FUNC_5(VAR_4, VAR_5);
 }
}
