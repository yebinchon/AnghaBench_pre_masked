
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proc {int dummy; } ;
struct cuse_data_chunk {int length; int local_ptr; int peer_ptr; } ;
struct cuse_client_command {scalar_t__ proc_refs; int cv; struct proc* proc_curr; } ;
struct TYPE_2__ {struct proc* td_proc; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (struct proc*,int ,struct proc*,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct cuse_client_command *VAR_3,
    struct cuse_data_chunk *VAR_4, int VAR_5)
{
 struct proc *VAR_6;
 int VAR_7;

 VAR_6 = VAR_3->proc_curr;
 if (VAR_6 == ((void*)0))
  return (VAR_1);

 if (VAR_3->proc_refs < 0)
  return (VAR_0);

 VAR_3->proc_refs++;

 FUNC_2();

 if (VAR_5 == 0) {
  VAR_7 = FUNC_1(
      VAR_2->td_proc, VAR_4->local_ptr,
      VAR_6, VAR_4->peer_ptr,
      VAR_4->length);
 } else {
  VAR_7 = FUNC_1(
      VAR_6, VAR_4->peer_ptr,
      VAR_2->td_proc, VAR_4->local_ptr,
      VAR_4->length);
 }

 FUNC_0();

 VAR_3->proc_refs--;

 if (VAR_3->proc_curr == ((void*)0))
  FUNC_3(&VAR_3->cv);

 return (VAR_7);
}
