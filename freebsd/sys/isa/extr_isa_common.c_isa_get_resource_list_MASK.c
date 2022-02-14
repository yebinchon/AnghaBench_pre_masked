
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list {int dummy; } ;
struct isa_device {struct resource_list id_resources; } ;
typedef int device_t ;


 struct isa_device* FUNC_0 (int ) ;

__attribute__((used)) static struct resource_list *
FUNC_1 (device_t VAR_0, device_t VAR_1)
{
 struct isa_device* VAR_2 = FUNC_0(VAR_1);
 struct resource_list *VAR_3 = &VAR_2->id_resources;

 if (!VAR_3)
  return (((void*)0));

 return (VAR_3);
}
