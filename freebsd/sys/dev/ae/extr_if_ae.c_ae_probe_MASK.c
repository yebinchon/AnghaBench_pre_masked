
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ vendorid; scalar_t__ deviceid; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_4)
{
 uint16_t VAR_5, VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(VAR_4);
 VAR_5 = FUNC_1(VAR_4);




 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  if (VAR_6 == VAR_3[VAR_7].vendorid &&
      VAR_5 == VAR_3[VAR_7].deviceid) {
   FUNC_0(VAR_4, VAR_3[VAR_7].name);
   return (VAR_1);
  }
 }
 return (VAR_2);
}
