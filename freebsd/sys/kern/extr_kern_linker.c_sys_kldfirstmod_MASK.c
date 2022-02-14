
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct thread {int * td_retval; int td_ucred; } ;
struct kldfirstmod_args {int fileid; } ;
typedef int * module_t ;
typedef TYPE_1__* linker_file_t ;
struct TYPE_3__ {int modules; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *) ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int
FUNC_6(struct thread *VAR_4, struct kldfirstmod_args *VAR_5)
{
 linker_file_t VAR_6;
 module_t VAR_7;
 int VAR_8 = 0;







 FUNC_4(&VAR_3);
 VAR_6 = FUNC_1(VAR_5->fileid);
 if (VAR_6) {
  VAR_1;
  VAR_7 = FUNC_0(&VAR_6->modules);
  if (VAR_7 != ((void*)0))
   VAR_4->td_retval[0] = FUNC_3(VAR_7);
  else
   VAR_4->td_retval[0] = 0;
  VAR_2;
 } else
  VAR_8 = VAR_0;
 FUNC_5(&VAR_3);
 return (VAR_8);
}
