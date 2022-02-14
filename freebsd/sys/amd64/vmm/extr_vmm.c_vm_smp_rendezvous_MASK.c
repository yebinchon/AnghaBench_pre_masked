
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * vm_rendezvous_func_t ;
struct vm {int maxcpus; int rendezvous_mtx; int * rendezvous_func; void* rendezvous_arg; int rendezvous_done_cpus; int rendezvous_req_cpus; } ;
typedef int cpuset_t ;


 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct vm*,int,char*) ;
 int VAR_0 ;
 int FUNC_4 (int ,int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct vm*,int,int) ;
 int FUNC_8 (struct vm*,int) ;

void
FUNC_9(struct vm *VAR_1, int VAR_2, cpuset_t VAR_3,
    vm_rendezvous_func_t VAR_4, void *VAR_5)
{
 int VAR_6;




 FUNC_4(VAR_0, ((void*)0), "vm_smp_rendezvous");
 FUNC_2(VAR_2 == -1 || (VAR_2 >= 0 && VAR_2 < VAR_1->maxcpus),
     ("vm_smp_rendezvous: invalid vcpuid %d", VAR_2));

restart:
 FUNC_5(&VAR_1->rendezvous_mtx);
 if (VAR_1->rendezvous_func != ((void*)0)) {





  FUNC_3(VAR_1, VAR_2, "Rendezvous already in progress");
  FUNC_6(&VAR_1->rendezvous_mtx);
  FUNC_8(VAR_1, VAR_2);
  goto restart;
 }
 FUNC_2(VAR_1->rendezvous_func == ((void*)0), ("vm_smp_rendezvous: previous "
     "rendezvous is still in progress"));

 FUNC_3(VAR_1, VAR_2, "Initiating rendezvous");
 VAR_1->rendezvous_req_cpus = VAR_3;
 FUNC_1(&VAR_1->rendezvous_done_cpus);
 VAR_1->rendezvous_arg = VAR_5;
 VAR_1->rendezvous_func = VAR_4;
 FUNC_6(&VAR_1->rendezvous_mtx);





 for (VAR_6 = 0; VAR_6 < VAR_1->maxcpus; VAR_6++) {
  if (FUNC_0(VAR_6, &VAR_3))
   FUNC_7(VAR_1, VAR_6, 0);
 }

 FUNC_8(VAR_1, VAR_2);
}
