
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct thread {int* td_retval; } ;
struct modnext_args {scalar_t__ modid; } ;
typedef TYPE_1__* module_t ;
struct TYPE_7__ {int id; } ;
struct TYPE_6__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int *) ;
 TYPE_3__* FUNC_1 (TYPE_1__*,int ) ;
 int VAR_3 ;
 TYPE_1__* FUNC_2 (scalar_t__) ;
 int VAR_4 ;

int
FUNC_3(struct thread *VAR_5, struct modnext_args *VAR_6)
{
 module_t VAR_7;
 int VAR_8 = 0;

 VAR_5->td_retval[0] = -1;

 VAR_1;
 if (VAR_6->modid == 0) {
  VAR_7 = FUNC_0(&VAR_4);
  if (VAR_7)
   VAR_5->td_retval[0] = VAR_7->id;
  else
   VAR_8 = VAR_0;
  goto done2;
 }
 VAR_7 = FUNC_2(VAR_6->modid);
 if (VAR_7 == ((void*)0)) {
  VAR_8 = VAR_0;
  goto done2;
 }
 if (FUNC_1(VAR_7, VAR_3))
  VAR_5->td_retval[0] = FUNC_1(VAR_7, VAR_3)->id;
 else
  VAR_5->td_retval[0] = 0;
done2:
 VAR_2;
 return (VAR_8);
}
