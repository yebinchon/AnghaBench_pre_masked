
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct linux_ptrace_args {int req; int data; scalar_t__ addr; scalar_t__ pid; } ;
typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct thread*,int ,scalar_t__,void*,int) ;
 int FUNC_1 (struct thread*,char*,int) ;
 int FUNC_2 (struct thread*,scalar_t__,void*) ;
 int FUNC_3 (struct thread*,scalar_t__,scalar_t__,int) ;
 int FUNC_4 (struct thread*,scalar_t__,int) ;
 int FUNC_5 (struct thread*,scalar_t__,void*,void*) ;
 int FUNC_6 (struct thread*,scalar_t__,void*,void*) ;
 int FUNC_7 (struct thread*,scalar_t__,void*,void*) ;
 int FUNC_8 (struct thread*,scalar_t__,scalar_t__,int) ;
 int FUNC_9 (struct thread*,scalar_t__,int) ;
 int FUNC_10 (struct thread*,scalar_t__,void*) ;
 int FUNC_11 (int,int*) ;

int
FUNC_12(struct thread *VAR_10, struct linux_ptrace_args *VAR_11)
{
 void *VAR_12;
 pid_t VAR_13;
 int VAR_14, VAR_15;

 VAR_13 = (pid_t)VAR_11->pid;
 VAR_12 = (void *)VAR_11->addr;

 switch (VAR_11->req) {
 case 128:
  VAR_14 = FUNC_0(VAR_10, VAR_7, 0, 0, 0);
  break;
 case 138:
 case 139:
  VAR_14 = FUNC_5(VAR_10, VAR_13, VAR_12, (void *)VAR_11->data);
  if (VAR_14 != 0)
   return (VAR_14);



  VAR_14 = FUNC_5(VAR_10, VAR_13,
      (void *)(VAR_11->addr + 4), (void *)(VAR_11->data + 4));
  break;
 case 137:
  VAR_14 = FUNC_6(VAR_10, VAR_13, VAR_12, (void *)VAR_11->data);
  break;
 case 135:
  VAR_14 = FUNC_0(VAR_10, VAR_9, VAR_13, VAR_12, VAR_11->data);
  break;
 case 136:
  VAR_14 = FUNC_0(VAR_10, VAR_8, VAR_13, VAR_12, VAR_11->data);
  break;
 case 134:
  VAR_14 = FUNC_7(VAR_10, VAR_13, VAR_12, (void *)VAR_11->data);
  break;
 case 145:
  VAR_14 = FUNC_11(VAR_11->data, &VAR_15);
  if (VAR_14 != 0)
   break;
  VAR_14 = FUNC_0(VAR_10, VAR_2, VAR_13, (void *)1, VAR_15);
  break;
 case 140:
  VAR_14 = FUNC_0(VAR_10, VAR_4, VAR_13, VAR_12, VAR_11->data);
  break;
 case 130:
  VAR_14 = FUNC_11(VAR_11->data, &VAR_15);
  if (VAR_14 != 0)
   break;
  VAR_14 = FUNC_0(VAR_10, VAR_5, VAR_13, (void *)1, VAR_15);
  break;
 case 143:
  VAR_14 = FUNC_2(VAR_10, VAR_13, (void *)VAR_11->data);
  break;
 case 131:
  VAR_14 = FUNC_10(VAR_10, VAR_13, (void *)VAR_11->data);
  break;
 case 146:
  VAR_14 = FUNC_0(VAR_10, VAR_1, VAR_13, VAR_12, VAR_11->data);
  break;
 case 144:
  VAR_14 = FUNC_11(VAR_11->data, &VAR_15);
  if (VAR_14 != 0)
   break;
  VAR_14 = FUNC_0(VAR_10, VAR_3, VAR_13, (void *)1, VAR_15);
  break;
 case 129:
  VAR_14 = FUNC_11(VAR_11->data, &VAR_15);
  if (VAR_14 != 0)
   break;
  VAR_14 = FUNC_0(VAR_10, VAR_6, VAR_13, (void *)1, VAR_15);
  break;
 case 132:
  VAR_14 = FUNC_9(VAR_10, VAR_13, VAR_11->data);
  break;
 case 141:
  VAR_14 = FUNC_4(VAR_10, VAR_13, VAR_11->data);
  break;
 case 142:
  VAR_14 = FUNC_3(VAR_10, VAR_13, VAR_11->addr, VAR_11->data);
  break;
 case 133:
  VAR_14 = FUNC_8(VAR_10, VAR_13, VAR_11->addr, VAR_11->data);
  break;
 default:
  FUNC_1(VAR_10, "ptrace(%ld, ...) not implemented; "
      "returning EINVAL", VAR_11->req);
  VAR_14 = VAR_0;
  break;
 }

 return (VAR_14);
}
