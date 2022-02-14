
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u_int ;
typedef int u_char ;
struct trapframe {scalar_t__ tf_eip; } ;
struct TYPE_2__ {int cpuc_dtrace_flags; int cpuc_dtrace_illval; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int VAR_3 ;


 TYPE_1__* VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;

int
FUNC_6(struct trapframe *VAR_6, u_int VAR_7)
{
 uint16_t VAR_8;
 FUNC_4();
 VAR_8 = VAR_4[VAR_5].cpuc_dtrace_flags & VAR_2;
 FUNC_5();
 if (VAR_8) {
  FUNC_0((FUNC_3() & VAR_3) == 0, ("interrupts enabled"));





  switch (VAR_7) {

  case 128:

   VAR_4[VAR_5].cpuc_dtrace_flags |= VAR_1;





   VAR_6->tf_eip += FUNC_1((u_char *) VAR_6->tf_eip);
   return (1);

  case 129:

   VAR_4[VAR_5].cpuc_dtrace_flags |= VAR_0;
   VAR_4[VAR_5].cpuc_dtrace_illval = FUNC_2();





   VAR_6->tf_eip += FUNC_1((u_char *) VAR_6->tf_eip);
   return (1);
  default:

   break;
  }
 }


 return (0);
}
