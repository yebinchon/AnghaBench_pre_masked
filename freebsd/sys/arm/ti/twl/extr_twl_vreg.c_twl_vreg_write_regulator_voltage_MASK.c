
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct twl_vreg_softc {int sc_dev; int sc_sx; } ;
struct twl_regulator_entry {scalar_t__ num_supp_voltages; int fixed_voltage; int name; int * supp_voltages; } ;


 int VAR_0 ;
 int FUNC_0 (struct twl_vreg_softc*) ;
 int FUNC_1 (struct twl_vreg_softc*) ;
 int FUNC_2 (struct twl_vreg_softc*) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*,int ,int,int) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (struct twl_vreg_softc*,struct twl_regulator_entry*) ;
 int FUNC_6 (struct twl_vreg_softc*,struct twl_regulator_entry*) ;
 int FUNC_7 (struct twl_vreg_softc*,struct twl_regulator_entry*,int,int*) ;
 int FUNC_8 (struct twl_vreg_softc*,struct twl_regulator_entry*,int ,int) ;

__attribute__((used)) static int
FUNC_9(struct twl_vreg_softc *VAR_3,
    struct twl_regulator_entry *VAR_4, int VAR_5)
{
 int VAR_6;
 uint8_t VAR_7;
 int VAR_8;

 FUNC_0(VAR_3);


 if (VAR_5 == 0)
  return (FUNC_5(VAR_3, VAR_4));




 if (VAR_4->supp_voltages == ((void*)0) || VAR_4->num_supp_voltages == 0) {
  if (VAR_5 != VAR_4->fixed_voltage)
   return (VAR_0);

  return (FUNC_6(VAR_3, VAR_4));
 }


 VAR_6 = FUNC_7(VAR_3, VAR_4, VAR_5, &VAR_7);
 if (VAR_6)
  return (VAR_6);



 VAR_8 = FUNC_4(&VAR_3->sc_sx);
 if (!VAR_8)
  FUNC_2(VAR_3);



 VAR_6 = FUNC_8(VAR_3, VAR_4, VAR_1, (VAR_7 & 0x1f));
 if (!VAR_6) {
  VAR_6 = FUNC_6(VAR_3, VAR_4);
 }

 if (!VAR_8)
  FUNC_1(VAR_3);

 if ((VAR_2 > 1) && !VAR_6)
  FUNC_3(VAR_3->sc_dev, "%s : setting voltage to %dmV (vsel: 0x%x)\n",
      VAR_4->name, VAR_5, VAR_7);

 return (VAR_6);
}
