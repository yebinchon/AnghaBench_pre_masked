
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
 int FUNC_0 (struct kvm_io_bus*) ;
 struct kvm_io_bus* FUNC_1 (int,int ) ;
 int FUNC_2 (struct kvm_io_bus*,struct kvm_io_bus*,int) ;
 int FUNC_3 (struct kvm_io_bus*,struct kvm_io_bus*) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct kvm *VAR_3, enum kvm_bus VAR_4,
         struct kvm_io_device *VAR_5)
{
 int VAR_6, VAR_7;
 struct kvm_io_bus *VAR_8, *VAR_9;

 VAR_8 = FUNC_1(sizeof(struct kvm_io_bus), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_9 = VAR_3->buses[VAR_4];
 FUNC_2(VAR_8, VAR_9, sizeof(struct kvm_io_bus));

 VAR_7 = -VAR_0;
 for (VAR_6 = 0; VAR_6 < VAR_8->dev_count; VAR_6++)
  if (VAR_8->devs[VAR_6] == VAR_5) {
   VAR_7 = 0;
   VAR_8->devs[VAR_6] = VAR_8->devs[--VAR_8->dev_count];
   break;
  }

 if (VAR_7) {
  FUNC_0(VAR_8);
  return VAR_7;
 }

 FUNC_3(VAR_3->buses[VAR_4], VAR_8);
 FUNC_4(&VAR_3->srcu);
 FUNC_0(VAR_9);
 return VAR_7;
}
