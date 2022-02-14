
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mv_pcib_softc {scalar_t__ sc_type; int sc_bsh; int sc_bst; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static inline void
FUNC_1(struct mv_pcib_softc *VAR_2, uint32_t VAR_3)
{

 if (VAR_2->sc_type != VAR_0)
  return;

 FUNC_0(VAR_2->sc_bst, VAR_2->sc_bsh, VAR_1, VAR_3);
}
