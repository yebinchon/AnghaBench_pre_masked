
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event {struct event* next; } ;


 struct event* VAR_0 ;

__attribute__((used)) static void
FUNC_0 (struct event *VAR_1)
{
  struct event **VAR_2 = &VAR_0;
  while ((*VAR_2) != ((void*)0))
    VAR_2 = &((*VAR_2)->next);
  (*VAR_2) = VAR_1;
  (*VAR_2)->next = ((void*)0);
}
