
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct action_record {scalar_t__ filter; scalar_t__ next; } ;



__attribute__((used)) static int
FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  const struct action_record *VAR_2 = (const struct action_record *) VAR_0;
  const struct action_record *VAR_3 = (const struct action_record *) VAR_1;
  return VAR_2->filter == VAR_3->filter && VAR_2->next == VAR_3->next;
}
