
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct pending_abstract_type {scalar_t__ type; } ;



__attribute__((used)) static int
FUNC_0 (const void* VAR_0, const void* VAR_1)
{
  const struct pending_abstract_type *VAR_2 =
     (const struct pending_abstract_type *) VAR_0;
  tree VAR_3 = (tree)VAR_1;

  return (VAR_2->type == VAR_3);
}
