
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int sy_call_t ;
struct thread {struct proc* td_proc; } ;
struct proc {TYPE_2__* p_sysent; } ;
typedef scalar_t__ db_expr_t ;
typedef int db_addr_t ;
typedef scalar_t__ c_db_sym_t ;
struct TYPE_4__ {int sv_size; int sv_name; TYPE_1__* sv_table; } ;
struct TYPE_3__ {int * sy_call; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__*) ;
 int FUNC_2 (scalar_t__,char const**,int *) ;

__attribute__((used)) static void
FUNC_3(int VAR_2, struct thread *VAR_3)
{
 struct proc *VAR_4;
 c_db_sym_t VAR_5;
 db_expr_t VAR_6;
 sy_call_t *VAR_7;
 const char *VAR_8;

 FUNC_0(" (%d", VAR_2);
 VAR_4 = (VAR_3 != ((void*)0)) ? VAR_3->td_proc : ((void*)0);
 if (VAR_4 != ((void*)0) && 0 <= VAR_2 && VAR_2 < VAR_4->p_sysent->sv_size) {
  VAR_7 = VAR_4->p_sysent->sv_table[VAR_2].sy_call;
  VAR_5 = FUNC_1((db_addr_t)VAR_7, VAR_0, &VAR_6);
  if (VAR_5 != VAR_1 && VAR_6 == 0) {
   FUNC_2(VAR_5, &VAR_8, ((void*)0));
   FUNC_0(", %s, %s", VAR_4->p_sysent->sv_name, VAR_8);
  }
 }
 FUNC_0(")");
}
