
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm {int maxcpus; int rendezvous_mtx; int (* rendezvous_func ) (struct vm*,int,int ) ;int rendezvous_done_cpus; int rendezvous_req_cpus; int rendezvous_arg; int active_cpus; } ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int,int *) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (struct vm*,int,char*) ;
 int FUNC_6 (struct vm*,int,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int (*) (struct vm*,int,int ),int *,int ,char*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct vm*,int,int ) ;
 int FUNC_11 (int (*) (struct vm*,int,int )) ;

__attribute__((used)) static void
FUNC_12(struct vm *VAR_0, int VAR_1)
{

 FUNC_4(VAR_1 == -1 || (VAR_1 >= 0 && VAR_1 < VAR_0->maxcpus),
     ("vm_handle_rendezvous: invalid vcpuid %d", VAR_1));

 FUNC_7(&VAR_0->rendezvous_mtx);
 while (VAR_0->rendezvous_func != ((void*)0)) {

  FUNC_0(&VAR_0->rendezvous_req_cpus, &VAR_0->active_cpus);

  if (VAR_1 != -1 &&
      FUNC_2(VAR_1, &VAR_0->rendezvous_req_cpus) &&
      !FUNC_2(VAR_1, &VAR_0->rendezvous_done_cpus)) {
   FUNC_6(VAR_0, VAR_1, "Calling rendezvous func");
   (*VAR_0->rendezvous_func)(VAR_0, VAR_1, VAR_0->rendezvous_arg);
   FUNC_3(VAR_1, &VAR_0->rendezvous_done_cpus);
  }
  if (FUNC_1(&VAR_0->rendezvous_req_cpus,
      &VAR_0->rendezvous_done_cpus) == 0) {
   FUNC_6(VAR_0, VAR_1, "Rendezvous completed");
   VAR_0->rendezvous_func = ((void*)0);
   FUNC_11(VAR_0->rendezvous_func);
   break;
  }
  FUNC_5(VAR_0, VAR_1, "Wait for rendezvous completion");
  FUNC_8(VAR_0->rendezvous_func, &VAR_0->rendezvous_mtx, 0,
      "vmrndv", 0);
 }
 FUNC_9(&VAR_0->rendezvous_mtx);
}
