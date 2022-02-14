
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtx {int dummy; } ;
struct fail_point {int fp_post_sleep_arg; int (* fp_post_sleep_fn ) (int ) ;int fp_pre_sleep_arg; int (* fp_pre_sleep_fn ) (int ) ;} ;
typedef enum fail_point_return_code { ____Placeholder_fail_point_return_code } fail_point_return_code ;


 int FUNC_0 (struct fail_point*) ;
 int FUNC_1 (int ,struct mtx*,char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static inline void
FUNC_4(struct fail_point *VAR_0, enum fail_point_return_code *VAR_1,
        struct mtx *VAR_2)
{

 if (VAR_0->fp_pre_sleep_fn)
  VAR_0->fp_pre_sleep_fn(VAR_0->fp_pre_sleep_arg);

 FUNC_1(FUNC_0(VAR_0), VAR_2, "failpt", 0);

 if (VAR_0->fp_post_sleep_fn)
  VAR_0->fp_post_sleep_fn(VAR_0->fp_post_sleep_arg);
}
