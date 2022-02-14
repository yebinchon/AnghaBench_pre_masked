
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct twl_vreg_softc {int sc_pdev; int sc_sx; } ;
struct twl_regulator_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct twl_vreg_softc*) ;
 int VAR_2 ;
 int FUNC_1 (struct twl_vreg_softc*) ;
 int FUNC_2 (struct twl_vreg_softc*) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct twl_vreg_softc*,struct twl_regulator_entry*,int ,int*) ;
 int FUNC_8 (struct twl_vreg_softc*,struct twl_regulator_entry*,int ,int) ;

__attribute__((used)) static int
FUNC_9(struct twl_vreg_softc *VAR_4,
    struct twl_regulator_entry *VAR_5)
{
 int VAR_6;
 uint8_t VAR_7;
 int VAR_8;

 FUNC_0(VAR_4);

 VAR_8 = FUNC_3(&VAR_4->sc_sx);
 if (!VAR_8)
  FUNC_2(VAR_4);


 VAR_6 = FUNC_7(VAR_4, VAR_5, VAR_2, &VAR_7);
 if (VAR_6)
  goto done;




 if (FUNC_4(VAR_4->sc_pdev)) {




  VAR_7 |= VAR_0;
  VAR_6 = FUNC_8(VAR_4, VAR_5, VAR_2, VAR_7);

 } else if (FUNC_6(VAR_4->sc_pdev) || FUNC_5(VAR_4->sc_pdev)) {

  if (FUNC_6(VAR_4->sc_pdev) && !(VAR_7 & VAR_1)) {
   VAR_7 |= VAR_1;
   VAR_6 = FUNC_8(VAR_4, VAR_5, VAR_2, VAR_7);
   if (VAR_6)
    goto done;
  }


  VAR_6 = FUNC_8(VAR_4, VAR_5, VAR_3, (VAR_7 << 5) | 0x01);
 }

done:
 if (!VAR_8)
  FUNC_1(VAR_4);

 return (VAR_6);
}
