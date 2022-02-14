
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct action_record {int next; scalar_t__ filter; } ;
typedef scalar_t__ hashval_t ;



__attribute__((used)) static hashval_t
FUNC_0 (const void *VAR_0)
{
  const struct action_record *VAR_1 = (const struct action_record *) VAR_0;
  return VAR_1->next * 1009 + VAR_1->filter;
}
