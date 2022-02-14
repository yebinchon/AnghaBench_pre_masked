
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dquot {int dq_count; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline int FUNC_1(struct dquot *VAR_0)
{
 if (FUNC_0(&VAR_0->dq_count) <= 1)
  return 1;
 return 0;
}
