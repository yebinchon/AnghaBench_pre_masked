
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kallsym_iter {int exported; int module_name; int name; int type; int value; scalar_t__ pos; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int *,int *,int ,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct kallsym_iter *VAR_1)
{
 if (FUNC_0(VAR_1->pos - VAR_0, &VAR_1->value,
    &VAR_1->type, VAR_1->name, VAR_1->module_name,
    &VAR_1->exported) < 0)
  return 0;
 return 1;
}
