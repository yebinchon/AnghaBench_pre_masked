
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dlm_ctxt {int dlm_join_events; int joining_node; int spinlock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct dlm_ctxt *VAR_0,
       u8 VAR_1)
{
 FUNC_0(&VAR_0->spinlock);

 VAR_0->joining_node = VAR_1;
 FUNC_1(&VAR_0->dlm_join_events);
}
