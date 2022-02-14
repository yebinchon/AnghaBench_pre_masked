
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct auxio_softc {int sc_flags; int * sc_regh; int * sc_regt; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static __inline u_int32_t
FUNC_2(struct auxio_softc *VAR_2)
{
 u_int32_t VAR_3;

 if (VAR_2->sc_flags & VAR_0)
  VAR_3 = FUNC_1(VAR_2->sc_regt[VAR_1],
      VAR_2->sc_regh[VAR_1], 0);
 else
  VAR_3 = FUNC_0(VAR_2->sc_regt[VAR_1],
      VAR_2->sc_regh[VAR_1], 0);

 return (VAR_3);
}
