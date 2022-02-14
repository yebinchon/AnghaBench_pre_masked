
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int* td_retval; } ;
struct modfnext_args {int modid; } ;
typedef int * module_t ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int * FUNC_1 (int ) ;

int
FUNC_2(struct thread *VAR_4, struct modfnext_args *VAR_5)
{
 module_t VAR_6;
 int VAR_7;

 VAR_4->td_retval[0] = -1;

 VAR_1;
 VAR_6 = FUNC_1(VAR_5->modid);
 if (VAR_6 == ((void*)0)) {
  VAR_7 = VAR_0;
 } else {
  VAR_7 = 0;
  if (FUNC_0(VAR_6, VAR_3))
   VAR_4->td_retval[0] = FUNC_0(VAR_6, VAR_3)->id;
  else
   VAR_4->td_retval[0] = 0;
 }
 VAR_2;
 return (VAR_7);
}
