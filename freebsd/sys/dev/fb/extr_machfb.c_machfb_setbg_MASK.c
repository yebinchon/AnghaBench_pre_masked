
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct machfb_softc {int sc_bg_cache; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct machfb_softc*,int ,scalar_t__) ;
 int FUNC_1 (struct machfb_softc*,int) ;

__attribute__((used)) static inline void
FUNC_2(struct machfb_softc *VAR_2, int VAR_3)
{

 if (VAR_3 == VAR_2->sc_bg_cache)
  return;
 VAR_2->sc_bg_cache = VAR_3;
 FUNC_1(VAR_2, 1);
 FUNC_0(VAR_2, VAR_0, VAR_3 + VAR_1);
}
