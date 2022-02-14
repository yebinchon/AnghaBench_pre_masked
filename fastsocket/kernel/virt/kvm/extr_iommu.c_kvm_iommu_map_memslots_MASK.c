
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_memslots {int nmemslots; int * memslots; } ;
struct kvm {int memslots; } ;


 int FUNC_0 (struct kvm*,int *) ;
 struct kvm_memslots* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct kvm *VAR_0)
{
 int VAR_1, VAR_2 = 0;
 struct kvm_memslots *VAR_3;

 VAR_3 = FUNC_1(VAR_0->memslots);

 for (VAR_1 = 0; VAR_1 < VAR_3->nmemslots; VAR_1++) {
  VAR_2 = FUNC_0(VAR_0, &VAR_3->memslots[VAR_1]);
  if (VAR_2)
   break;
 }

 return VAR_2;
}
