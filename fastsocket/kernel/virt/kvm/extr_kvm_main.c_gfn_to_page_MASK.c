
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct kvm {int dummy; } ;
typedef int pfn_t ;
typedef int gfn_t ;


 int FUNC_0 (int ) ;
 struct page* VAR_0 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct kvm*,int ) ;
 int FUNC_3 (int ) ;
 struct page* FUNC_4 (int ) ;

struct page *FUNC_5(struct kvm *VAR_1, gfn_t VAR_2)
{
 pfn_t VAR_3;

 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (!FUNC_3(VAR_3))
  return FUNC_4(VAR_3);

 FUNC_0(FUNC_3(VAR_3));

 FUNC_1(VAR_0);
 return VAR_0;
}
