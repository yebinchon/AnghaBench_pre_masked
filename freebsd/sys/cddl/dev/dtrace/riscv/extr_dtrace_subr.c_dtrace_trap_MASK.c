
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct trapframe {int tf_sepc; } ;
struct TYPE_2__ {int cpuc_dtrace_flags; int cpuc_dtrace_illval; } ;


 int VAR_0 ;
 int VAR_1 ;



 TYPE_1__* VAR_2 ;
 size_t VAR_3 ;

int
FUNC_0(struct trapframe *VAR_4, u_int VAR_5)
{
 if ((VAR_2[VAR_3].cpuc_dtrace_flags & VAR_1) != 0) {




  switch (VAR_5) {
  case 129:
  case 128:
  case 130:

   VAR_2[VAR_3].cpuc_dtrace_flags |= VAR_0;
   VAR_2[VAR_3].cpuc_dtrace_illval = 0;





   VAR_4->tf_sepc += 4;

   return (1);
  default:

   break;
  }
 }


 return (0);
}
