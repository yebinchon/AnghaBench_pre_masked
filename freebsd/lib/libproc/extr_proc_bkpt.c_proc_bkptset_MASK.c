
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct ptrace_io_desc {unsigned long* piod_addr; void* piod_len; void* piod_offs; int piod_op; } ;
struct proc_handle {scalar_t__ status; } ;
typedef unsigned long instr_t ;
typedef int caddr_t ;


 unsigned long VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,uintptr_t) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct proc_handle*) ;
 int FUNC_3 (struct proc_handle*) ;
 scalar_t__ FUNC_4 (struct proc_handle*) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int ) ;

int
FUNC_6(struct proc_handle *VAR_11, uintptr_t VAR_12,
    unsigned long *VAR_13)
{
 struct ptrace_io_desc VAR_14;
 int VAR_15 = 0, VAR_16;
 instr_t VAR_17;

 *VAR_13 = 0;
 if (VAR_11->status == VAR_5 || VAR_11->status == VAR_8 ||
     VAR_11->status == VAR_6) {
  VAR_10 = VAR_2;
  return (-1);
 }

 FUNC_1("adding breakpoint at 0x%lx", VAR_12);

 VAR_16 = 0;
 if (VAR_11->status != VAR_7) {
  if (FUNC_4(VAR_11) != 0)
   return (-1);
  VAR_16 = 1;
 }




 VAR_17 = 0;
 VAR_14.piod_op = VAR_3;
 VAR_14.piod_offs = (void *)VAR_12;
 VAR_14.piod_addr = &VAR_17;
 VAR_14.piod_len = VAR_1;
 if (FUNC_5(VAR_9, FUNC_3(VAR_11), (caddr_t)&VAR_14, 0) < 0) {
  FUNC_0("ERROR: couldn't read instruction at address 0x%jx",
      (uintmax_t)VAR_12);
  VAR_15 = -1;
  goto done;
 }
 *VAR_13 = VAR_17;



 VAR_17 = VAR_0;
 VAR_14.piod_op = VAR_4;
 VAR_14.piod_offs = (void *)VAR_12;
 VAR_14.piod_addr = &VAR_17;
 VAR_14.piod_len = VAR_1;
 if (FUNC_5(VAR_9, FUNC_3(VAR_11), (caddr_t)&VAR_14, 0) < 0) {
  FUNC_0("ERROR: couldn't write instruction at address 0x%jx",
      (uintmax_t)VAR_12);
  VAR_15 = -1;
  goto done;
 }

done:
 if (VAR_16)

  FUNC_2(VAR_11);

 return (VAR_15);
}
