
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u_int ;
struct trapframe {int srr1; int dar; int srr0; } ;
struct TYPE_2__ {int cpuc_dtrace_flags; int cpuc_dtrace_illval; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 () ;

int
FUNC_3(struct trapframe *VAR_5, u_int VAR_6)
{
 uint16_t VAR_7;
 FUNC_1();
 VAR_7 = VAR_3[VAR_4].cpuc_dtrace_flags & VAR_1;
 FUNC_2();
 if (VAR_7) {
  FUNC_0((VAR_5->srr1 & VAR_2) == 0, ("interrupts enabled"));




  switch (VAR_6) {

  case 130:
  case 131:

   VAR_3[VAR_4].cpuc_dtrace_flags |= VAR_0;
   VAR_3[VAR_4].cpuc_dtrace_illval = VAR_5->dar;





   VAR_5->srr0 += sizeof(int);
   return (1);
  case 128:
  case 129:

   VAR_3[VAR_4].cpuc_dtrace_flags |= VAR_0;
   VAR_3[VAR_4].cpuc_dtrace_illval = VAR_5->srr0;





   VAR_5->srr0 += sizeof(int);
   return (1);
  default:

   break;
  }
 }


 return (0);
}
