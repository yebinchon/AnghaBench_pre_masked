
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int u_long ;
struct proc_handle {int dummy; } ;


 int FUNC_0 (int,int ,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (struct proc_handle*,uintptr_t,int ) ;
 int FUNC_2 (struct proc_handle*,int ,uintptr_t) ;

__attribute__((used)) static void
FUNC_3(struct proc_handle *VAR_1, uintptr_t VAR_2, u_long VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
 FUNC_0(VAR_4, 0,
     "failed to delete breakpoint at 0x%jx", (uintmax_t)VAR_2);

 VAR_4 = FUNC_2(VAR_1, VAR_0, VAR_2);
 FUNC_0(VAR_4, 0, "failed to reset program counter");
}
