
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ quirk; int product; int maker; int bios_vendor; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(void)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_0[VAR_1].quirk != 0; ++VAR_1) {
  if (FUNC_0(VAR_0[VAR_1].bios_vendor, VAR_0[VAR_1].maker,
      VAR_0[VAR_1].product))
   return (VAR_0[VAR_1].quirk);
 }

 return (0);
}
