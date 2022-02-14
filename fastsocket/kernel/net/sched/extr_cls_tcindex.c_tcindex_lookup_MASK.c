
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct tcindex_filter_result {int dummy; } ;
struct tcindex_filter {size_t key; struct tcindex_filter_result result; struct tcindex_filter* next; } ;
struct tcindex_data {size_t hash; struct tcindex_filter** h; struct tcindex_filter_result* perfect; } ;


 scalar_t__ FUNC_0 (struct tcindex_filter_result*) ;

__attribute__((used)) static struct tcindex_filter_result *
FUNC_1(struct tcindex_data *VAR_0, u16 VAR_1)
{
 struct tcindex_filter *VAR_2;

 if (VAR_0->perfect)
  return FUNC_0(VAR_0->perfect + VAR_1) ?
   VAR_0->perfect + VAR_1 : ((void*)0);
 else if (VAR_0->h) {
  for (VAR_2 = VAR_0->h[VAR_1 % VAR_0->hash]; VAR_2; VAR_2 = VAR_2->next)
   if (VAR_2->key == VAR_1)
    return &VAR_2->result;
 }

 return ((void*)0);
}
