
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isa_device {int id_configs; } ;
typedef int device_t ;


 struct isa_device* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_0, device_t VAR_1)
{
 struct isa_device* VAR_2 = FUNC_0(VAR_1);

 if (FUNC_1(&VAR_2->id_configs))
  FUNC_2(VAR_0, VAR_1);
}
