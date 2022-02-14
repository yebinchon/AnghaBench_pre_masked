
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {size_t val; int * flag; int has_arg; int name; } ;
struct ibdiag_opt {size_t letter; int has_arg; int name; } ;



__attribute__((used)) static void FUNC_0(struct option *VAR_0, const struct ibdiag_opt *VAR_1,
       const struct ibdiag_opt *VAR_2[])
{
 VAR_0->name = VAR_1->name;
 VAR_0->has_arg = VAR_1->has_arg;
 VAR_0->flag = ((void*)0);
 VAR_0->val = VAR_1->letter;
 if (!VAR_2[VAR_0->val])
  VAR_2[VAR_0->val] = VAR_1;
}
