
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ubsec_softc {int sc_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ubsec_softc*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct ubsec_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct ubsec_softc *VAR_10)
{
 u_int32_t VAR_11;

 VAR_11 = FUNC_0(VAR_10, VAR_0);
 VAR_11 &= ~(VAR_1 | VAR_2);
 VAR_11 |= VAR_3 | VAR_4;

 if (VAR_10->sc_flags & (VAR_8|VAR_9))
  VAR_11 |= VAR_5;
 else
  VAR_11 &= ~VAR_5;

 if (VAR_10->sc_flags & VAR_7)
  VAR_11 &= ~VAR_6;

 FUNC_1(VAR_10, VAR_0, VAR_11);
}
