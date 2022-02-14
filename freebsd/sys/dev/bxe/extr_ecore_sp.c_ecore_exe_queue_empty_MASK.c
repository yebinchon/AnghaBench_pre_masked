
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_exe_queue_obj {int pending_comp; int exe_queue; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;

__attribute__((used)) static inline bool FUNC_2(struct ecore_exe_queue_obj *VAR_0)
{
 bool VAR_1 = FUNC_0(&VAR_0->exe_queue);


 FUNC_1();

 return VAR_1 && FUNC_0(&VAR_0->pending_comp);
}
