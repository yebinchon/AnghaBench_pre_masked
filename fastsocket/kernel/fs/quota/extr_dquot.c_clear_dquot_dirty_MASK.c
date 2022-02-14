
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dquot {int dq_dirty; int dq_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static inline int FUNC_2(struct dquot *VAR_1)
{
 if (!FUNC_1(VAR_0, &VAR_1->dq_flags))
  return 0;
 FUNC_0(&VAR_1->dq_dirty);
 return 1;
}
