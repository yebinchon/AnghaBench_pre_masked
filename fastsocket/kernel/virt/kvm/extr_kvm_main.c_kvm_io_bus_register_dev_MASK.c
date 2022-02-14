
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_io_device {int dummy; } ;
struct kvm_io_bus {int dev_count; struct kvm_io_device** devs; } ;
struct kvm {int srcu; struct kvm_io_bus** buses; } ;
typedef enum kvm_bus { ____Placeholder_kvm_bus } kvm_bus ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kvm_io_bus*) ;
 struct kvm_io_bus* FUNC_1 (int,int ) ;
 int FUNC_2 (struct kvm_io_bus*,struct kvm_io_bus*,int) ;
 int FUNC_3 (struct kvm_io_bus*,struct kvm_io_bus*) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct kvm *VAR_4, enum kvm_bus VAR_5,
       struct kvm_io_device *VAR_6)
{
 struct kvm_io_bus *VAR_7, *VAR_8;

 VAR_8 = VAR_4->buses[VAR_5];
 if (VAR_8->dev_count > VAR_3-1)
  return -VAR_1;

 VAR_7 = FUNC_1(sizeof(struct kvm_io_bus), VAR_2);
 if (!VAR_7)
  return -VAR_0;
 FUNC_2(VAR_7, VAR_8, sizeof(struct kvm_io_bus));
 VAR_7->devs[VAR_7->dev_count++] = VAR_6;
 FUNC_3(VAR_4->buses[VAR_5], VAR_7);
 FUNC_4(&VAR_4->srcu);
 FUNC_0(VAR_8);

 return 0;
}
