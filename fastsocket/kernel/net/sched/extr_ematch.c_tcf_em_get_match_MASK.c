
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_ematch_tree {struct tcf_ematch* matches; } ;
struct tcf_ematch {int dummy; } ;



__attribute__((used)) static inline struct tcf_ematch * FUNC_0(struct tcf_ematch_tree *VAR_0,
         int VAR_1)
{
 return &VAR_0->matches[VAR_1];
}
