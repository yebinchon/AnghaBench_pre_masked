
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int u_long ;
struct proc_handle {int dummy; } ;


 int FUNC_0 (int,int ,char*,int ) ;
 int FUNC_1 (struct proc_handle*,uintptr_t,int *) ;

__attribute__((used)) static void
FUNC_2(struct proc_handle *VAR_0, uintptr_t VAR_1, u_long *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 FUNC_0(VAR_3, 0, "failed to set breakpoint at 0x%jx",
     (uintmax_t)VAR_1);
}
