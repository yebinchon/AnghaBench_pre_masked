
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm {int maxcpus; int suspended_cpus; int * rendezvous_func; int active_cpus; struct vcpu* vcpu; } ;
struct vcpu {int mtx; } ;


 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int,int *) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (struct vm*,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct vcpu*,int *,char*,int ) ;
 int FUNC_5 (struct vcpu*) ;
 int FUNC_6 (struct vm*,int,int) ;
 int FUNC_7 (struct vm*,int,int ) ;
 int FUNC_8 (struct vcpu*) ;
 int FUNC_9 (struct vm*,int) ;

__attribute__((used)) static int
FUNC_10(struct vm *VAR_3, int VAR_4, bool *VAR_5)
{
 int VAR_6, VAR_7;
 struct vcpu *VAR_8;

 VAR_7 = 0;
 VAR_8 = &VAR_3->vcpu[VAR_4];

 FUNC_2(VAR_4, &VAR_3->suspended_cpus);
 FUNC_5(VAR_8);
 while (1) {
  if (FUNC_0(&VAR_3->suspended_cpus, &VAR_3->active_cpus) == 0) {
   FUNC_3(VAR_3, VAR_4, "All vcpus suspended");
   break;
  }

  if (VAR_3->rendezvous_func == ((void*)0)) {
   FUNC_3(VAR_3, VAR_4, "Sleeping during suspend");
   FUNC_7(VAR_3, VAR_4, VAR_1);
   FUNC_4(VAR_8, &VAR_8->mtx, "vmsusp", VAR_2);
   FUNC_7(VAR_3, VAR_4, VAR_0);
  } else {
   FUNC_3(VAR_3, VAR_4, "Rendezvous during suspend");
   FUNC_8(VAR_8);
   FUNC_9(VAR_3, VAR_4);
   FUNC_5(VAR_8);
  }
 }
 FUNC_8(VAR_8);




 for (VAR_6 = 0; VAR_6 < VAR_3->maxcpus; VAR_6++) {
  if (FUNC_1(VAR_6, &VAR_3->suspended_cpus)) {
   FUNC_6(VAR_3, VAR_6, 0);
  }
 }

 *VAR_5 = 1;
 return (0);
}
