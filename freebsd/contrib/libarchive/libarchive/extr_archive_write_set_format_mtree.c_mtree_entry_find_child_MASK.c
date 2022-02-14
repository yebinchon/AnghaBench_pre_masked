
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtree_entry {TYPE_1__* dir_info; } ;
struct TYPE_2__ {int rbtree; } ;


 scalar_t__ FUNC_0 (int *,char const*) ;

__attribute__((used)) static struct mtree_entry *
FUNC_1(struct mtree_entry *VAR_0, const char *VAR_1)
{
 struct mtree_entry *VAR_2;

 if (VAR_0 == ((void*)0))
  return (((void*)0));
 VAR_2 = (struct mtree_entry *)FUNC_0(
     &(VAR_0->dir_info->rbtree), VAR_1);
 return (VAR_2);
}
