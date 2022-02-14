
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blame {struct blame* next; int start; } ;
typedef scalar_t__ apr_off_t ;



__attribute__((used)) static void
FUNC_0(struct blame *VAR_0, apr_off_t VAR_1)
{
  while (VAR_0)
    {
      VAR_0->start += VAR_1;
      VAR_0 = VAR_0->next;
    }
}
