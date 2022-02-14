
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_cache_softc {scalar_t__ sc_nent; scalar_t__ sc_maxent; int sc_zone; int sc_cachefull; int sc_nused; int sc_usedlist; int sc_mtx; } ;
struct g_cache_desc {int * d_data; scalar_t__ d_flags; } ;


 int FUNC_0 (struct g_cache_desc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 struct g_cache_desc* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct g_cache_desc*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct g_cache_desc*,int ) ;
 struct g_cache_desc* FUNC_5 (int,int ,int) ;
 int FUNC_6 (int *,int ) ;
 int * FUNC_7 (int ,int) ;

__attribute__((used)) static struct g_cache_desc *
FUNC_8(struct g_cache_softc *VAR_6)
{
 struct g_cache_desc *VAR_7;

 FUNC_6(&VAR_6->sc_mtx, VAR_0);

 if (!FUNC_1(&VAR_6->sc_usedlist)) {
  VAR_7 = FUNC_2(&VAR_6->sc_usedlist);
  FUNC_3(&VAR_6->sc_usedlist, VAR_7, VAR_5);
  VAR_6->sc_nused--;
  VAR_7->d_flags = 0;
  FUNC_0(VAR_7, VAR_4);
  return (VAR_7);
 }
 if (VAR_6->sc_nent > VAR_6->sc_maxent) {
  VAR_6->sc_cachefull++;
  return (((void*)0));
 }
 VAR_7 = FUNC_5(sizeof(*VAR_7), VAR_1, VAR_2 | VAR_3);
 if (VAR_7 == ((void*)0))
  return (((void*)0));
 VAR_7->d_data = FUNC_7(VAR_6->sc_zone, VAR_2);
 if (VAR_7->d_data == ((void*)0)) {
  FUNC_4(VAR_7, VAR_1);
  return (((void*)0));
 }
 VAR_6->sc_nent++;
 return (VAR_7);
}
