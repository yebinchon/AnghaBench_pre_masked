
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_gate_version {void* gv_error; void* gv_version; } ;


 void* FUNC_0 (void*) ;

__attribute__((used)) static __inline void
FUNC_1(struct g_gate_version *VAR_0)
{

 VAR_0->gv_version = FUNC_0(VAR_0->gv_version);
 VAR_0->gv_error = FUNC_0(VAR_0->gv_error);
}
