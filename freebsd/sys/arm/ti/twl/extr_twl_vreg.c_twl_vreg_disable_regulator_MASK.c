
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct twl_vreg_softc {int sc_pdev; int sc_sx; } ;
struct twl_regulator_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct twl_vreg_softc*) ;
 int VAR_6 ;
 int FUNC_1 (struct twl_vreg_softc*) ;
 int FUNC_2 (struct twl_vreg_softc*) ;
 int VAR_7 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct twl_vreg_softc*,struct twl_regulator_entry*,int ,int*) ;
 int FUNC_8 (struct twl_vreg_softc*,struct twl_regulator_entry*,int ,int) ;

__attribute__((used)) static int
FUNC_9(struct twl_vreg_softc *VAR_8,
 struct twl_regulator_entry *VAR_9)
{
 int VAR_10 = 0;
 uint8_t VAR_11;
 int VAR_12;

 FUNC_0(VAR_8);

 VAR_12 = FUNC_3(&VAR_8->sc_sx);
 if (!VAR_12)
  FUNC_2(VAR_8);

 if (FUNC_4(VAR_8->sc_pdev)) {


  VAR_10 = FUNC_7(VAR_8, VAR_9, VAR_6, &VAR_11);
  if (VAR_10)
   goto done;




  VAR_11 &= ~(VAR_0 | VAR_1 | VAR_2);
  VAR_10 = FUNC_8(VAR_8, VAR_9, VAR_6, VAR_11);

 } else if (FUNC_6(VAR_8->sc_pdev) || FUNC_5(VAR_8->sc_pdev)) {


  if (FUNC_6(VAR_8->sc_pdev))
   VAR_11 = VAR_3 | VAR_4 | VAR_5;
  else
   VAR_11 = 0x00;


  VAR_10 = FUNC_8(VAR_8, VAR_9, VAR_7, (VAR_11 << 5));
 }

done:
 if (!VAR_12)
  FUNC_1(VAR_8);

 return (VAR_10);
}
