
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm86_vme_args {int sub_op; char* sub_args; int state; int vmf; int intnum; int int_map; int debug; } ;
struct vm86_kernel {int vm86_has_vme; int vm86_inited; int vm86_intmap; int vm86_debug; } ;
struct vm86_intcall_args {int sub_op; char* sub_args; int state; int vmf; int intnum; int int_map; int debug; } ;
struct vm86_init_args {int sub_op; char* sub_args; int state; int vmf; int intnum; int int_map; int debug; } ;
struct thread {TYPE_2__* td_pcb; } ;
struct i386_vm86_args {int sub_op; char* sub_args; int state; int vmf; int intnum; int int_map; int debug; } ;
typedef int sa ;
struct TYPE_4__ {TYPE_1__* pcb_ext; } ;
struct TYPE_3__ {struct vm86_kernel ext_vm86; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (char*,struct vm86_vme_args*,int) ;
 int FUNC_2 (struct vm86_vme_args*,char*,int) ;
 int VAR_5 ;
 int FUNC_3 (struct thread*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct thread*,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int *) ;

int
FUNC_8(struct thread *VAR_6, char *VAR_7)
{
 int VAR_8 = 0;
 struct i386_vm86_args VAR_9;
 struct vm86_kernel *VAR_10;

 if ((VAR_8 = FUNC_1(VAR_7, &VAR_9, sizeof(struct i386_vm86_args))) != 0)
  return (VAR_8);

 if (VAR_6->td_pcb->pcb_ext == 0)
  if ((VAR_8 = FUNC_3(VAR_6)) != 0)
   return (VAR_8);
 VAR_10 = &VAR_6->td_pcb->pcb_ext->ext_vm86;

 switch (VAR_9.sub_op) {
 case 130: {
  struct vm86_init_args VAR_11;

  if ((VAR_8 = FUNC_1(VAR_9.sub_args, &VAR_11, sizeof(VAR_11))) != 0)
   return (VAR_8);
  if (VAR_5 & VAR_0)
   VAR_10->vm86_has_vme = (FUNC_6() & VAR_1 ? 1 : 0);
  else
   VAR_10->vm86_has_vme = 0;
  VAR_10->vm86_inited = 1;
  VAR_10->vm86_debug = VAR_11.debug;
  FUNC_0(&VAR_11.int_map, VAR_10->vm86_intmap, 32);
  }
  break;
 case 131: {
  struct vm86_vme_args VAR_12;

  VAR_12.state = (FUNC_6() & VAR_1 ? 1 : 0);
         VAR_8 = FUNC_2(&VAR_12, VAR_9.sub_args, sizeof(VAR_12));
  }
  break;

 case 129: {
  struct vm86_intcall_args VAR_13;

  if ((VAR_8 = FUNC_5(VAR_6, VAR_4)))
   return (VAR_8);
  if ((VAR_8 = FUNC_1(VAR_9.sub_args, &VAR_13, sizeof(VAR_13))))
   return (VAR_8);
  if ((VAR_8 = FUNC_7(VAR_13.intnum, &VAR_13.vmf)))
   return (VAR_8);
  VAR_8 = FUNC_2(&VAR_13, VAR_9.sub_args, sizeof(VAR_13));
  }
  break;

 default:
  VAR_8 = VAR_2;
 }
 return (VAR_8);
}
