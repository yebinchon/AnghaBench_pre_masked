
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct mv_pcib_softc {scalar_t__ sc_type; int sc_bsh; int sc_bst; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ,int,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_6 ;

__attribute__((used)) static uint32_t
FUNC_12(struct mv_pcib_softc *VAR_7, u_int VAR_8, u_int VAR_9,
    u_int VAR_10, u_int VAR_11, int VAR_12)
{
 uint32_t VAR_13, VAR_14, VAR_15, VAR_16;

 VAR_15 = (VAR_7->sc_type != VAR_0) ?
     VAR_1 : VAR_4;
 VAR_16 = (VAR_7->sc_type != VAR_0) ?
     VAR_2 : VAR_5;
 VAR_13 = VAR_3 | FUNC_0(VAR_8) | FUNC_1(VAR_9) |
     FUNC_2(VAR_10) | FUNC_3(VAR_11);

 FUNC_10(&VAR_6);
 FUNC_7(VAR_7->sc_bst, VAR_7->sc_bsh, VAR_15, VAR_13);

 VAR_14 = ~0;
 switch (VAR_12) {
 case 1:
  VAR_14 = FUNC_4(VAR_7->sc_bst, VAR_7->sc_bsh,
      VAR_16 + (VAR_11 & 3));
  break;
 case 2:
  VAR_14 = FUNC_8(FUNC_5(VAR_7->sc_bst, VAR_7->sc_bsh,
      VAR_16 + (VAR_11 & 2)));
  break;
 case 4:
  VAR_14 = FUNC_9(FUNC_6(VAR_7->sc_bst, VAR_7->sc_bsh,
      VAR_16));
  break;
 }
 FUNC_11(&VAR_6);
 return (VAR_14);
}
