
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int kvm; } ;
struct inode {int dummy; } ;
struct file {struct kvm_vcpu* private_data; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_0, struct file *VAR_1)
{
 struct kvm_vcpu *VAR_2 = VAR_1->private_data;

 FUNC_0(VAR_2->kvm);
 return 0;
}
