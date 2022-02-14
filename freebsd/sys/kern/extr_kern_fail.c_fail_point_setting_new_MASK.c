
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fail_point_setting {int feq_mtx; int fp_entry_queue; struct fail_point* fs_parent; } ;
struct fail_point {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct fail_point_setting*) ;
 struct fail_point_setting* FUNC_2 () ;
 int FUNC_3 (int *,char*,int *,int ) ;

__attribute__((used)) static struct fail_point_setting *
FUNC_4(struct fail_point *VAR_1)
{
 struct fail_point_setting *VAR_2;

 VAR_2 = FUNC_2();
 VAR_2->fs_parent = VAR_1;
 FUNC_0(&VAR_2->fp_entry_queue);
 FUNC_3(&VAR_2->feq_mtx, "fail point entries", ((void*)0), VAR_0);

 FUNC_1(VAR_2);

 return (VAR_2);
}
