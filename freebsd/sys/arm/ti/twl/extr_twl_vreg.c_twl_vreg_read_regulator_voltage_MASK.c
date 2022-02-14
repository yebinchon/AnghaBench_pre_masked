
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct twl_vreg_softc {int sc_dev; int sc_sx; } ;
struct twl_regulator_entry {int* supp_voltages; int num_supp_voltages; int fixed_voltage; int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct twl_vreg_softc*) ;
 int FUNC_1 (struct twl_vreg_softc*) ;
 int FUNC_2 (struct twl_vreg_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,int ,int,int) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int FUNC_5 (struct twl_vreg_softc*,struct twl_regulator_entry*,int*) ;
 int FUNC_6 (struct twl_vreg_softc*,struct twl_regulator_entry*,int ,int*) ;

__attribute__((used)) static int
FUNC_7(struct twl_vreg_softc *VAR_4,
    struct twl_regulator_entry *VAR_5, int *VAR_6)
{
 int VAR_7;
 int VAR_8 = 0;
 int VAR_9;
 uint8_t VAR_10;

 FUNC_0(VAR_4);




 VAR_9 = FUNC_4(&VAR_4->sc_sx);
 if (!VAR_9)
  FUNC_2(VAR_4);



 VAR_7 = FUNC_5(VAR_4, VAR_5, &VAR_8);
 if (VAR_7)
  goto done;

 *VAR_6 = 0;
 if (!VAR_8)
  goto done;



 if (VAR_5->supp_voltages == ((void*)0) || !VAR_5->num_supp_voltages) {
  *VAR_6 = VAR_5->fixed_voltage;
  goto done;
 }


 VAR_7 = FUNC_6(VAR_4, VAR_5, VAR_1, &VAR_10);
 if (VAR_7)
  goto done;

 VAR_10 &= (VAR_5->num_supp_voltages - 1);
 if (VAR_5->supp_voltages[VAR_10] == VAR_2) {
  VAR_7 = VAR_0;
  goto done;
 }

 *VAR_6 = VAR_5->supp_voltages[VAR_10];

done:
 if (!VAR_9)
  FUNC_1(VAR_4);

 if ((VAR_3 > 1) && !VAR_7)
  FUNC_3(VAR_4->sc_dev, "%s : reading voltage is %dmV (vsel: 0x%x)\n",
      VAR_5->name, *VAR_6, VAR_10);

 return (VAR_7);
}
