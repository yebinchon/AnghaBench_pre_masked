
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct dlm_lock_resource {struct list_head granted; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline struct list_head *
FUNC_1(struct dlm_lock_resource *VAR_0, int VAR_1)
{
 struct list_head *VAR_2;
 FUNC_0(VAR_1 < 0);
 FUNC_0(VAR_1 > 2);
 VAR_2 = &(VAR_0->granted);
 VAR_2 += VAR_1;
 return VAR_2;
}
