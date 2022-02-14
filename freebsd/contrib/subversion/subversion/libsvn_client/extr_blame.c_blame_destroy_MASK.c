
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blame_chain {struct blame* avail; } ;
struct blame {struct blame* next; } ;



__attribute__((used)) static void
FUNC_0(struct blame_chain *VAR_0,
              struct blame *VAR_1)
{
  VAR_1->next = VAR_0->avail;
  VAR_0->avail = VAR_1;
}
