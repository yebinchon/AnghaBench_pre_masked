
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_ctxt {int spinlock; int dirty_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct dlm_ctxt *VAR_0)
{
 int VAR_1;

 FUNC_1(&VAR_0->spinlock);
 VAR_1 = FUNC_0(&VAR_0->dirty_list);
 FUNC_2(&VAR_0->spinlock);

 return VAR_1;
}
