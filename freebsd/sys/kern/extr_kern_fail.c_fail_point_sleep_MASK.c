
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fail_point {int fp_flags; int fp_post_sleep_arg; int (* fp_post_sleep_fn ) (int ) ;int fp_pre_sleep_arg; int (* fp_pre_sleep_fn ) (int ) ;} ;
typedef int int64_t ;
typedef enum fail_point_return_code { ____Placeholder_fail_point_return_code } fail_point_return_code ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fail_point*) ;
 int VAR_2 ;
 int FUNC_1 (int,long) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int (*) (int ),int ,int) ;
 int FUNC_6 (int ,int ,char*,int) ;

__attribute__((used)) static inline void
FUNC_7(struct fail_point *VAR_4, int VAR_5,
        enum fail_point_return_code *VAR_6)
{
 int VAR_7;


 VAR_7 = FUNC_1((int64_t)VAR_5 * VAR_3, 1000L);

 if (VAR_7 > 0) {
  if (!(VAR_4->fp_flags & VAR_1)) {
   if (VAR_4->fp_pre_sleep_fn)
    VAR_4->fp_pre_sleep_fn(VAR_4->fp_pre_sleep_arg);

   FUNC_6(FUNC_0(VAR_4), VAR_2, "failpt", VAR_7);

   if (VAR_4->fp_post_sleep_fn)
    VAR_4->fp_post_sleep_fn(VAR_4->fp_post_sleep_arg);
  } else {
   if (VAR_4->fp_pre_sleep_fn)
    VAR_4->fp_pre_sleep_fn(VAR_4->fp_pre_sleep_arg);

   FUNC_5(VAR_4->fp_post_sleep_fn, VAR_4->fp_post_sleep_arg,
       VAR_7);
   *VAR_6 = VAR_0;
  }
 }
}
