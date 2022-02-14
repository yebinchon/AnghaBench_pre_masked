
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm {int dummy; } ;


 scalar_t__ FUNC_0 (struct kvm*) ;
 int FUNC_1 (struct kvm*) ;
 int FUNC_2 (char*,int *,struct kvm*,int ) ;
 struct kvm* FUNC_3 () ;
 int FUNC_4 (struct kvm*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(void)
{
 int VAR_1;
 struct kvm *VAR_2;

 VAR_2 = FUNC_3();
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);
 VAR_1 = FUNC_2("kvm-vm", &VAR_0, VAR_2, 0);
 if (VAR_1 < 0)
  FUNC_4(VAR_2);

 return VAR_1;
}
