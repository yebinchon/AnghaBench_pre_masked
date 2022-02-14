
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int device_t ;
struct TYPE_3__ {scalar_t__ chip_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*) ;
 TYPE_1__* VAR_5 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_6)
{
 int VAR_7;
 uint16_t VAR_8;

 if (FUNC_5(VAR_6) != VAR_4)
  return (VAR_1);
 if (FUNC_4(VAR_6) != VAR_3)
  return (VAR_1);





 if (FUNC_3(VAR_6) != VAR_2)
  return (VAR_1);

 VAR_8 = FUNC_2(VAR_6);
 for (VAR_7 = 0; VAR_7 < FUNC_1(VAR_5); VAR_7++) {
  if (VAR_8 == VAR_5[VAR_7].chip_id) {
   FUNC_0(VAR_6, "Nuvoton GPIO controller");
   return (VAR_0);
  }
 }
 return (VAR_1);
}
