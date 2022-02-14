
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vary {char* arg; struct vary* next; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int) ;

struct vary *
FUNC_2(struct vary *VAR_0, char *VAR_1)
{
  struct vary *VAR_2, **VAR_3;

  if (VAR_0) {
    VAR_2 = VAR_0;
    while (VAR_0->next)
      VAR_0 = VAR_0->next;
    VAR_3 = &VAR_0->next;
  } else
    VAR_3 = &VAR_2;

  if ((*VAR_3 = (struct vary *)FUNC_1(sizeof(struct vary))) == ((void*)0))
    FUNC_0(1, "malloc");
  (*VAR_3)->arg = VAR_1;
  (*VAR_3)->next = ((void*)0);
  return VAR_2;
}
