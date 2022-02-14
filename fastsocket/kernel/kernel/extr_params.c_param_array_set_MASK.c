
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kparam_array {scalar_t__ num; int set; int elemsize; int elem; int max; } ;
struct kernel_param {int flags; int name; struct kparam_array* arr; } ;


 int FUNC_0 (int ,char const*,int,int ,int ,int ,int ,int ,unsigned int*) ;

int FUNC_1(const char *VAR_0, struct kernel_param *VAR_1)
{
 const struct kparam_array *VAR_2 = VAR_1->arr;
 unsigned int VAR_3;

 return FUNC_0(VAR_1->name, VAR_0, 1, VAR_2->max, VAR_2->elem,
      VAR_2->elemsize, VAR_2->set, VAR_1->flags,
      VAR_2->num ?: &VAR_3);
}
