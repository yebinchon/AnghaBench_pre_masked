
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mv_pcib_softc {scalar_t__ sc_skip_enable_procedure; scalar_t__ sc_mode; int sc_bsh; int sc_bst; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void
FUNC_6(struct mv_pcib_softc *VAR_10, uint32_t VAR_11)
{
 uint32_t VAR_12;
 int VAR_13;

 if (VAR_10->sc_skip_enable_procedure)
  goto pcib_enable_root_mode;




 if ((VAR_10->sc_skip_enable_procedure == 0) &&
     (FUNC_4(VAR_0) & FUNC_0(VAR_11))) {
  FUNC_5(VAR_0, FUNC_4(VAR_0) &
      ~(FUNC_0(VAR_11)));

  VAR_13 = VAR_2;
  VAR_12 = FUNC_2(VAR_10->sc_bst, VAR_10->sc_bsh,
      VAR_3);
  while (((VAR_12 & VAR_4) == 1) && (VAR_13 > 0)) {
   FUNC_1(1000);
   VAR_13 -= 1000;
   VAR_12 = FUNC_2(VAR_10->sc_bst, VAR_10->sc_bsh,
       VAR_3);
  }
 }

pcib_enable_root_mode:
 if (VAR_10->sc_mode == VAR_1) {



  VAR_12 = FUNC_2(VAR_10->sc_bst, VAR_10->sc_bsh, VAR_9);
  VAR_12 |= VAR_8 | VAR_5 |
      VAR_6 | VAR_7;
  FUNC_3(VAR_10->sc_bst, VAR_10->sc_bsh, VAR_9, VAR_12);
 }
}
