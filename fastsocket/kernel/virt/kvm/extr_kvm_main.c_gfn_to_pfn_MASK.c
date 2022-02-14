
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm {int dummy; } ;
typedef int pfn_t ;
typedef int gfn_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned long FUNC_1 (struct kvm*,int ) ;
 int FUNC_2 (struct kvm*,unsigned long) ;
 scalar_t__ FUNC_3 (unsigned long) ;
 int FUNC_4 (int ) ;

pfn_t FUNC_5(struct kvm *VAR_1, gfn_t VAR_2)
{
 unsigned long VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (FUNC_3(VAR_3)) {
  FUNC_0(VAR_0);
  return FUNC_4(VAR_0);
 }

 return FUNC_2(VAR_1, VAR_3);
}
