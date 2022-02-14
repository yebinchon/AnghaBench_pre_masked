
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptrace_io_desc {size_t piod_len; void* piod_offs; void* piod_addr; int piod_op; } ;
struct proc_handle {int dummy; } ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct proc_handle*) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ) ;

int
FUNC_2(struct proc_handle *VAR_2, void *VAR_3, size_t VAR_4, size_t VAR_5)
{
 struct ptrace_io_desc VAR_6;

 if (VAR_2 == ((void*)0))
  return (-1);
 VAR_6.piod_op = VAR_0;
 VAR_6.piod_len = VAR_4;
 VAR_6.piod_addr = (void *)VAR_3;
 VAR_6.piod_offs = (void *)VAR_5;

 if (FUNC_1(VAR_1, FUNC_0(VAR_2), (caddr_t)&VAR_6, 0) < 0)
  return (-1);
 return (VAR_6.piod_len);
}
