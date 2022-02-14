
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isa_device {void* id_config_arg; int * id_config_cb; } ;
typedef int isa_config_cb ;
typedef int device_t ;


 struct isa_device* FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(device_t VAR_0, device_t VAR_1, isa_config_cb *VAR_2,
    void *VAR_3)
{
 struct isa_device* VAR_4 = FUNC_0(VAR_1);

 VAR_4->id_config_cb = VAR_2;
 VAR_4->id_config_arg = VAR_3;
}
