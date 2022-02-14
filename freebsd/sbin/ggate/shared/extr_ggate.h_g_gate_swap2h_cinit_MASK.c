
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_gate_cinit {int gc_token; int gc_nconn; int gc_flags; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static __inline void
FUNC_3(struct g_gate_cinit *VAR_0)
{

 VAR_0->gc_flags = FUNC_2(VAR_0->gc_flags);
 VAR_0->gc_nconn = FUNC_0(VAR_0->gc_nconn);
 VAR_0->gc_token = FUNC_1(VAR_0->gc_token);
}
