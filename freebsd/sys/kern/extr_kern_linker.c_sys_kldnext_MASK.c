
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct thread {int * td_retval; int td_ucred; } ;
struct kldnext_args {scalar_t__ fileid; } ;
typedef TYPE_1__* linker_file_t ;
struct TYPE_6__ {int flags; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int
FUNC_6(struct thread *VAR_5, struct kldnext_args *VAR_6)
{
 linker_file_t VAR_7;
 int VAR_8 = 0;







 FUNC_4(&VAR_2);
 if (VAR_6->fileid == 0)
  VAR_7 = FUNC_0(&VAR_4);
 else {
  VAR_7 = FUNC_2(VAR_6->fileid);
  if (VAR_7 == ((void*)0)) {
   VAR_8 = VAR_0;
   goto out;
  }
  VAR_7 = FUNC_1(VAR_7, VAR_3);
 }


 while (VAR_7 != ((void*)0) && !(VAR_7->flags & VAR_1))
  VAR_7 = FUNC_1(VAR_7, VAR_3);

 if (VAR_7)
  VAR_5->td_retval[0] = VAR_7->id;
 else
  VAR_5->td_retval[0] = 0;
out:
 FUNC_5(&VAR_2);
 return (VAR_8);
}
