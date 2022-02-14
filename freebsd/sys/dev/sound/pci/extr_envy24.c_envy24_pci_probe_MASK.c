
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int16_t ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ subvendor; scalar_t__ subdevice; int name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_4)
{
 u_int16_t VAR_5, VAR_6;
 int VAR_7;




 if (FUNC_1(VAR_4) == VAR_1 &&
     FUNC_4(VAR_4) == VAR_2) {
  VAR_5 = FUNC_3(VAR_4);
  VAR_6 = FUNC_2(VAR_4);
  for (VAR_7 = 0; VAR_3[VAR_7].subvendor != 0 || VAR_3[VAR_7].subdevice != 0; VAR_7++) {
   if (VAR_3[VAR_7].subvendor == VAR_5 &&
       VAR_3[VAR_7].subdevice == VAR_6) {
    break;
   }
  }
  FUNC_0(VAR_4, VAR_3[VAR_7].name);



  return 0;
 }
 else {



  return VAR_0;
 }
}
