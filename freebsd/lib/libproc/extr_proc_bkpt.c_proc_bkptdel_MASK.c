
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct ptrace_io_desc {unsigned long* piod_addr; int piod_len; void* piod_offs; int piod_op; } ;
struct proc_handle {scalar_t__ status; } ;
typedef unsigned long instr_t ;
typedef int caddr_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,uintptr_t) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct proc_handle*) ;
 int FUNC_3 (struct proc_handle*) ;
 scalar_t__ FUNC_4 (struct proc_handle*) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int ) ;

int
FUNC_6(struct proc_handle *VAR_9, uintptr_t VAR_10,
    unsigned long VAR_11)
{
 struct ptrace_io_desc VAR_12;
 int VAR_13 = 0, VAR_14;
 instr_t VAR_15;

 if (VAR_9->status == VAR_3 || VAR_9->status == VAR_6 ||
     VAR_9->status == VAR_4) {
  VAR_8 = VAR_1;
  return (-1);
 }

 FUNC_1("removing breakpoint at 0x%lx", VAR_10);

 VAR_14 = 0;
 if (VAR_9->status != VAR_5) {
  if (FUNC_4(VAR_9) != 0)
   return (-1);
  VAR_14 = 1;
 }




 VAR_15 = VAR_11;
 VAR_12.piod_op = VAR_2;
 VAR_12.piod_offs = (void *)VAR_10;
 VAR_12.piod_addr = &VAR_15;
 VAR_12.piod_len = VAR_0;
 if (FUNC_5(VAR_7, FUNC_3(VAR_9), (caddr_t)&VAR_12, 0) < 0) {
  FUNC_0("ERROR: couldn't write instruction at address 0x%jx",
      (uintmax_t)VAR_10);
  VAR_13 = -1;
 }

 if (VAR_14)

  FUNC_2(VAR_9);

 return (VAR_13);
}
