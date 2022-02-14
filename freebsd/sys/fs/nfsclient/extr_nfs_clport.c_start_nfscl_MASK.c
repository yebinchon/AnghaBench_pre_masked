
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct nfsclclient {TYPE_1__* nfsc_renewthread; } ;
struct TYPE_2__ {int p_threads; } ;


 struct thread* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nfsclclient*,struct thread*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0)
{
 struct nfsclclient *VAR_1;
 struct thread *VAR_2;

 VAR_1 = (struct nfsclclient *)VAR_0;
 VAR_2 = FUNC_0(&VAR_1->nfsc_renewthread->p_threads);
 FUNC_2(VAR_1, VAR_2);
 FUNC_1(0);
}
