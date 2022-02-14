
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kern_ipc_perm {char* security; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(struct kern_ipc_perm *VAR_0, u32 *VAR_1)
{
 char *VAR_2 = VAR_0->security;

 *VAR_1 = FUNC_0(VAR_2);
}
