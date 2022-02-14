
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
 int FUNC_0 (int ,int ) ;
 size_t FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3)
{
 uint16_t VAR_4;
 size_t VAR_5;

 VAR_4 = FUNC_2(VAR_3);
 for (VAR_5 = 0; VAR_5 < FUNC_1(VAR_2); VAR_5++) {
  if (VAR_4 == VAR_2[VAR_5].device) {
   FUNC_0(VAR_3, VAR_2[VAR_5].desc);
   return (VAR_0);
  }
 }
 return (VAR_1);
}
