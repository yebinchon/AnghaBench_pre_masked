
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fail_point_setting {int dummy; } ;
struct fail_point {int fp_ref_cnt; } ;


 int FUNC_0 (struct fail_point*) ;
 int VAR_0 ;
 struct fail_point_setting* FUNC_1 (struct fail_point*,struct fail_point_setting*) ;
 int VAR_1 ;
 int FUNC_2 (struct fail_point**,int ,char*,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static inline void
FUNC_4(struct fail_point *VAR_2, int VAR_3)
{
 struct fail_point_setting *VAR_4;

 VAR_4 = FUNC_1(VAR_2, ((void*)0));





 while (VAR_2->fp_ref_cnt > VAR_3) {
  FUNC_3(FUNC_0(VAR_2));
  FUNC_2(&VAR_2, VAR_0, "fail_point_drain", VAR_1 / 100);
 }
 FUNC_1(VAR_2, VAR_4);
}
