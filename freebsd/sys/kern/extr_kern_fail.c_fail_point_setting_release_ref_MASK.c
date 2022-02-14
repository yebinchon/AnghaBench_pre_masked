
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fail_point {int fp_ref_cnt; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static inline void
FUNC_2(struct fail_point *VAR_0)
{

 FUNC_0(&VAR_0->fp_ref_cnt > 0, ("Attempting to deref w/no refs"));
 FUNC_1(&VAR_0->fp_ref_cnt, 1);
}
