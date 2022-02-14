
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blame {scalar_t__ start; struct blame* next; } ;
typedef scalar_t__ apr_off_t ;



__attribute__((used)) static struct blame *
FUNC_0(struct blame *VAR_0, apr_off_t VAR_1)
{
  struct blame *VAR_2 = ((void*)0);
  while (VAR_0)
    {
      if (VAR_0->start > VAR_1) break;
      VAR_2 = VAR_0;
      VAR_0 = VAR_0->next;
    }
  return VAR_2;
}
