
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_cache_softc {int sc_nent; int sc_zone; int sc_mtx; } ;
struct g_cache_desc {int d_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct g_cache_desc*,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct g_cache_softc *VAR_2, struct g_cache_desc *VAR_3)
{

 FUNC_1(&VAR_2->sc_mtx, VAR_0);

 FUNC_2(VAR_2->sc_zone, VAR_3->d_data);
 FUNC_0(VAR_3, VAR_1);
 VAR_2->sc_nent--;
}
