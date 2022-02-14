
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int device_t ;
struct TYPE_4__ {scalar_t__ device; scalar_t__ subdevice; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,int ,int) ;

__attribute__((used)) static unsigned int
FUNC_2(device_t VAR_4)
{
 uint16_t VAR_5;
 uint16_t VAR_6;
 unsigned int VAR_7;
 int VAR_8;

 VAR_5 = FUNC_1(VAR_4, VAR_0, 2);
 VAR_6 = FUNC_1(VAR_4, VAR_1, 2);

 VAR_7 = 0;
 for (VAR_8 = 1; VAR_8 < FUNC_0(VAR_3); VAR_8++) {
  if (VAR_5 == VAR_3[VAR_8].device) {
   if (VAR_6 == VAR_3[VAR_8].subdevice) {
    VAR_7 = VAR_8;
    break;
   }
   if (0x0000 == VAR_3[VAR_8].subdevice) {
    VAR_7 = VAR_8;




   }
  }
 }

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_2); VAR_8++) {
  if (VAR_5 == VAR_2[VAR_8].device) {
   if (VAR_6 == VAR_2[VAR_8].subdevice) {
    VAR_7 = 0;
    break;
   }
   if (0x0000 == VAR_2[VAR_8].subdevice) {
    VAR_7 = 0;
    break;
   }
  }
 }
 return (VAR_7);
}
