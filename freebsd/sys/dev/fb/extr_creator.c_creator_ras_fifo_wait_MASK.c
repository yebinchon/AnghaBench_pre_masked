
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct creator_softc {int sc_fifo_cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct creator_softc*,int ,int ) ;

__attribute__((used)) static inline void
FUNC_1(struct creator_softc *VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = VAR_3->sc_fifo_cache;
 while (VAR_5 < VAR_4)
  VAR_5 = (FUNC_0(VAR_3, VAR_1, VAR_2) &
      VAR_0) - 8;
 VAR_3->sc_fifo_cache = VAR_5 - VAR_4;
}
