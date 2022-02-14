
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct named_label_entry {scalar_t__ label_decl; } ;



__attribute__((used)) static int
FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  const struct named_label_entry *VAR_2 = (const struct named_label_entry *) VAR_0;
  const struct named_label_entry *VAR_3 = (const struct named_label_entry *) VAR_1;
  return VAR_2->label_decl == VAR_3->label_decl;
}
