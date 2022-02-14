
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct leaf_info {struct list_head falh; } ;
struct leaf {int dummy; } ;


 struct leaf_info* FUNC_0 (struct leaf*,int) ;

__attribute__((used)) static inline struct list_head *FUNC_1(struct leaf *VAR_0, int VAR_1)
{
 struct leaf_info *VAR_2 = FUNC_0(VAR_0, VAR_1);

 if (!VAR_2)
  return ((void*)0);

 return &VAR_2->falh;
}
