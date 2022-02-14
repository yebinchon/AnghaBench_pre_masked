
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pending_abstract_type {int type; } ;
typedef int hashval_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static hashval_t
FUNC_1 (const void* VAR_0)
{
  const struct pending_abstract_type *VAR_1 =
     (const struct pending_abstract_type *) VAR_0;
  return (hashval_t) FUNC_0 (VAR_1->type);
}
