
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_io_bus {int dev_count; int * devs; } ;
struct kvm {int * buses; } ;
typedef int gpa_t ;
typedef enum kvm_bus { ____Placeholder_kvm_bus } kvm_bus ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,void*) ;
 struct kvm_io_bus* FUNC_1 (int ) ;

int FUNC_2(struct kvm *VAR_1, enum kvm_bus VAR_2, gpa_t VAR_3,
      int VAR_4, void *VAR_5)
{
 int VAR_6;
 struct kvm_io_bus *VAR_7 = FUNC_1(VAR_1->buses[VAR_2]);

 for (VAR_6 = 0; VAR_6 < VAR_7->dev_count; VAR_6++)
  if (!FUNC_0(VAR_7->devs[VAR_6], VAR_3, VAR_4, VAR_5))
   return 0;
 return -VAR_0;
}
