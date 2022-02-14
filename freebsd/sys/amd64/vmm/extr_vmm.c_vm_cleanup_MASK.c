
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm {int maxcpus; int * vmspace; struct mem_map* mem_maps; int cookie; int vioapic; int vatpic; int vhpet; int vatpit; int vpmtmr; int vrtc; int * iommu; } ;
struct mem_map {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vm*) ;
 int FUNC_4 (struct vm*,struct mem_map*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct vm*,int,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct vm*,int) ;
 int FUNC_11 (struct vm*,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static void
FUNC_15(struct vm *VAR_2, bool VAR_3)
{
 struct mem_map *VAR_4;
 int VAR_5;

 FUNC_3(VAR_2);

 if (VAR_2->iommu != ((void*)0))
  FUNC_2(VAR_2->iommu);

 if (VAR_3)
  FUNC_13(VAR_2->vrtc);
 else
  FUNC_14(VAR_2->vrtc);
 FUNC_12(VAR_2->vpmtmr);
 FUNC_6(VAR_2->vatpit);
 FUNC_8(VAR_2->vhpet);
 FUNC_5(VAR_2->vatpic);
 FUNC_9(VAR_2->vioapic);

 for (VAR_5 = 0; VAR_5 < VAR_2->maxcpus; VAR_5++)
  FUNC_7(VAR_2, VAR_5, VAR_3);

 FUNC_0(VAR_2->cookie);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_4 = &VAR_2->mem_maps[VAR_5];
  if (VAR_3 || !FUNC_4(VAR_2, VAR_4))
   FUNC_10(VAR_2, VAR_5);
 }

 if (VAR_3) {
  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
   FUNC_11(VAR_2, VAR_5);

  FUNC_1(VAR_2->vmspace);
  VAR_2->vmspace = ((void*)0);
 }
}
