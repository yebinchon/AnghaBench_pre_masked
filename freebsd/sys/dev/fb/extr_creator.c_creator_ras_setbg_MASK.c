
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct creator_softc {int sc_bg_cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct creator_softc*,int ,int ,int) ;
 int FUNC_1 (struct creator_softc*,int) ;
 int FUNC_2 (struct creator_softc*) ;

__attribute__((used)) static inline void
FUNC_3(struct creator_softc *VAR_2, int VAR_3)
{

 if (VAR_3 == VAR_2->sc_bg_cache)
  return;
 VAR_2->sc_bg_cache = VAR_3;
 FUNC_1(VAR_2, 1);
 FUNC_0(VAR_2, VAR_0, VAR_1, VAR_3);
 FUNC_2(VAR_2);
}
