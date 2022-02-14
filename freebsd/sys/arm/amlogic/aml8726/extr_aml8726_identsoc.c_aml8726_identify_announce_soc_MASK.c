
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* desc; int metal_rev; } ;
struct TYPE_3__ {char* desc; scalar_t__ hw_rev; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(void *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_2[VAR_6].desc; VAR_6++)
  if (VAR_2[VAR_6].hw_rev == VAR_3)
   break;

 if (VAR_2[VAR_6].desc == ((void*)0))
  FUNC_0("Amlogic unknown aml8726 SoC %#x\n", VAR_3);

 FUNC_1("Amlogic %s SoC", VAR_2[VAR_6].desc);

 if (VAR_3 == VAR_0) {
  for (VAR_6 = 0; VAR_1[VAR_6].desc; VAR_6++)
   if (VAR_1[VAR_6].metal_rev ==
       VAR_4)
    break;

  if (VAR_1[VAR_6].desc == ((void*)0))
   FUNC_1(", unknown rev %#x", VAR_4);
  else
   FUNC_1(", rev %s", VAR_1[VAR_6].desc);
 }

 FUNC_1("\n");
}
