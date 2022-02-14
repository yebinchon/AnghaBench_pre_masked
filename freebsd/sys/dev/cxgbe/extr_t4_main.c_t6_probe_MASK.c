
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int device_t ;
struct TYPE_3__ {scalar_t__ device; int desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int
FUNC_4(device_t VAR_4)
{
 int VAR_5;
 uint16_t VAR_6 = FUNC_3(VAR_4);
 uint16_t VAR_7 = FUNC_2(VAR_4);

 if (VAR_6 != VAR_2)
  return (VAR_1);

 for (VAR_5 = 0; VAR_5 < FUNC_1(VAR_3); VAR_5++) {
  if (VAR_7 == VAR_3[VAR_5].device) {
   FUNC_0(VAR_4, VAR_3[VAR_5].desc);
   return (VAR_0);
  }
 }

 return (VAR_1);
}
