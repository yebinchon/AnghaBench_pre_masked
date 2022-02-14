
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
 int FUNC_0 (struct twl_vreg_softc*) ;
 int VAR_3 ;
 int FUNC_1 (struct twl_vreg_softc*) ;
 int FUNC_2 (struct twl_vreg_softc*) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct twl_vreg_softc*,struct twl_regulator_entry*,int ,int*) ;

__attribute__((used)) static int
FUNC_8(struct twl_vreg_softc *VAR_5,
 struct twl_regulator_entry *VAR_6, int *VAR_7)
{
 int VAR_8;
 uint8_t VAR_9;
 uint8_t VAR_10;
 int VAR_11;

 if (VAR_7 == ((void*)0))
  return (VAR_0);

 FUNC_0(VAR_5);

 VAR_11 = FUNC_3(&VAR_5->sc_sx);
 if (!VAR_11)
  FUNC_2(VAR_5);


 if (FUNC_4(VAR_5->sc_pdev)) {

  VAR_8 = FUNC_7(VAR_5, VAR_6, VAR_3, &VAR_10);
  if (VAR_8)
   goto done;

  *VAR_7 = (VAR_10 & VAR_1);

 } else if (FUNC_6(VAR_5->sc_pdev) || FUNC_5(VAR_5->sc_pdev)) {


  if (FUNC_6(VAR_5->sc_pdev)) {
   VAR_8 = FUNC_7(VAR_5, VAR_6, VAR_3, &VAR_9);
   if (VAR_8)
    goto done;

   if (!(VAR_9 & VAR_2)) {
    *VAR_7 = 0;
    goto done;
   }
  }


  VAR_8 = FUNC_7(VAR_5, VAR_6, VAR_4, &VAR_10);
  if (VAR_8)
   goto done;

  *VAR_7 = ((VAR_10 & 0x0C) == 0x04);

 } else {
  VAR_8 = VAR_0;
 }

done:
 if (!VAR_11)
  FUNC_1(VAR_5);

 return (VAR_8);
}
