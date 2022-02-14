
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 size_t FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int
FUNC_5(device_t VAR_4)
{
 uint16_t VAR_5;
 size_t VAR_6;

 if (FUNC_4(VAR_4) != VAR_2)
  return (VAR_1);

 VAR_5 = FUNC_3(VAR_4);
 for (VAR_6 = 0; VAR_6 < FUNC_2(VAR_3); VAR_6++) {
  if (VAR_5 == VAR_3[VAR_6].device) {
   FUNC_1(VAR_4, VAR_3[VAR_6].desc);
   FUNC_0(VAR_4);
   return (VAR_0);
  }
 }
 return (VAR_1);
}
