
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm {int maxcpus; int suspended_cpus; scalar_t__ suspend; int debug_cpus; int active_cpus; int vrtc; int vpmtmr; int vatpit; int vatpic; int vhpet; int vioapic; int * iommu; int vmspace; int cookie; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct vm*,int ) ;
 int FUNC_2 (struct vm*) ;
 int FUNC_3 (struct vm*) ;
 int FUNC_4 (struct vm*,int,int) ;
 int FUNC_5 (struct vm*) ;
 int FUNC_6 (struct vm*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct vm*) ;
 int FUNC_9 (struct vm*) ;

__attribute__((used)) static void
FUNC_10(struct vm *VAR_0, bool VAR_1)
{
 int VAR_2;

 VAR_0->cookie = FUNC_1(VAR_0, FUNC_7(VAR_0->vmspace));
 VAR_0->iommu = ((void*)0);
 VAR_0->vioapic = FUNC_6(VAR_0);
 VAR_0->vhpet = FUNC_5(VAR_0);
 VAR_0->vatpic = FUNC_2(VAR_0);
 VAR_0->vatpit = FUNC_3(VAR_0);
 VAR_0->vpmtmr = FUNC_8(VAR_0);
 if (VAR_1)
  VAR_0->vrtc = FUNC_9(VAR_0);

 FUNC_0(&VAR_0->active_cpus);
 FUNC_0(&VAR_0->debug_cpus);

 VAR_0->suspend = 0;
 FUNC_0(&VAR_0->suspended_cpus);

 for (VAR_2 = 0; VAR_2 < VAR_0->maxcpus; VAR_2++)
  FUNC_4(VAR_0, VAR_2, VAR_1);
}
