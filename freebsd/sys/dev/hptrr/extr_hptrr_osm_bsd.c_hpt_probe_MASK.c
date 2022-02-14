
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int device_t ;
struct TYPE_3__ {int name; } ;
typedef TYPE_1__ HIM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(device_t VAR_2)
{
 HIM *VAR_3;

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3 != ((void*)0)) {
  FUNC_0(("hpt_probe: adapter at PCI %d:%d:%d, IRQ %d",
   FUNC_3(VAR_2), FUNC_6(VAR_2), FUNC_4(VAR_2), FUNC_5(VAR_2)
       ));
  FUNC_1(VAR_2, VAR_3->name);
  return (VAR_0);
 }

 return (VAR_1);
}
