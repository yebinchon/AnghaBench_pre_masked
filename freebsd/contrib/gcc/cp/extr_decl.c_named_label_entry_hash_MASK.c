
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct named_label_entry {int label_decl; } ;
typedef int hashval_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static hashval_t
FUNC_1 (const void *VAR_0)
{
  const struct named_label_entry *VAR_1 = (const struct named_label_entry *) VAR_0;
  return FUNC_0 (VAR_1->label_decl);
}
