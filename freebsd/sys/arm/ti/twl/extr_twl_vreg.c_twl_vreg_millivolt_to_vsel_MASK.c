
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint8_t ;
struct twl_vreg_softc {int dummy; } ;
struct twl_regulator_entry {scalar_t__* supp_voltages; unsigned int num_supp_voltages; } ;


 int VAR_0 ;
 int FUNC_0 (struct twl_vreg_softc*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(struct twl_vreg_softc *VAR_2,
 struct twl_regulator_entry *VAR_3, int VAR_4, uint8_t *VAR_5)
{
 int VAR_6, VAR_7;
 unsigned VAR_8, VAR_9;

 FUNC_0(VAR_2);

 if (VAR_3->supp_voltages == ((void*)0))
  return (VAR_0);


 VAR_9 = 0;
 VAR_7 = 0x7fffffff;
 for (VAR_8 = 0; VAR_8 < VAR_3->num_supp_voltages; VAR_8++) {


  if (VAR_3->supp_voltages[VAR_8] == VAR_1)
   continue;


  VAR_6 = VAR_4 - (int)VAR_3->supp_voltages[VAR_8];
  if (FUNC_1(VAR_6) < VAR_7) {
   VAR_7 = FUNC_1(VAR_6);
   VAR_9 = VAR_8;
  }
 }




 if ((VAR_7 > 100) && (VAR_9 < 0x100))
  return (VAR_0);

 *VAR_5 = VAR_9;
 return (0);
}
