
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int driver_t ;
typedef int device_t ;
struct TYPE_2__ {int SciInterrupt; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_0(driver_t *VAR_3, device_t VAR_4)
{
 if (VAR_0.SciInterrupt < VAR_1)
  VAR_2 |= (1 << VAR_0.SciInterrupt);
}
