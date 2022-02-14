
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int uint16_t ;
struct octeon_device {size_t octeon_id; int chip_id; } ;
struct TYPE_2__ {int conf_type; } ;



 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void *
FUNC_0(struct octeon_device *VAR_3, uint16_t VAR_4)
{
 void *VAR_5 = ((void*)0);
 uint32_t VAR_6 = VAR_3->octeon_id;

 switch (VAR_2[VAR_6].conf_type) {
 case 128:
  if (VAR_3->chip_id == VAR_0) {
   VAR_5 = &VAR_1;
  }

  break;
 default:
  break;
 }
 return (VAR_5);
}
