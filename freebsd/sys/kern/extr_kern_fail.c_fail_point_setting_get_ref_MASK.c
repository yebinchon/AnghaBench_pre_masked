
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fail_point_setting {int dummy; } ;
struct fail_point {struct fail_point_setting* fp_setting; int fp_ref_cnt; } ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static inline struct fail_point_setting *
FUNC_1(struct fail_point *VAR_0)
{
 struct fail_point_setting *VAR_1;


 FUNC_0(&VAR_0->fp_ref_cnt, 1);
 VAR_1 = VAR_0->fp_setting;

 return (VAR_1);
}
