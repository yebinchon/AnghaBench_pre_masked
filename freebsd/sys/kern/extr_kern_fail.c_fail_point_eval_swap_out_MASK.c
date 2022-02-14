
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fail_point_setting {int dummy; } ;
struct fail_point {struct fail_point_setting* fp_setting; } ;


 int FUNC_0 (struct fail_point*,int *) ;

__attribute__((used)) static inline void
FUNC_1(struct fail_point *VAR_0,
        struct fail_point_setting *VAR_1)
{


 if (VAR_0->fp_setting == VAR_1)
  FUNC_0(VAR_0, ((void*)0));
}
