
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z_candidate {int viable; struct z_candidate* next; } ;



__attribute__((used)) static struct z_candidate*
FUNC_0 (struct z_candidate *VAR_0,
        bool VAR_1,
        bool *VAR_2)
{
  struct z_candidate *VAR_3;
  struct z_candidate **VAR_4;
  struct z_candidate **VAR_5;

  VAR_3 = ((void*)0);
  VAR_4 = &VAR_3;
  *VAR_2 = 0;

  VAR_5 = &VAR_0;
  while (*VAR_5)
    {
      struct z_candidate *VAR_6 = *VAR_5;
      if (VAR_1 ? VAR_6->viable == 1 : VAR_6->viable)
 {
   *VAR_4 = VAR_6;
   *VAR_5 = VAR_6->next;
   VAR_6->next = ((void*)0);
   VAR_4 = &VAR_6->next;
   *VAR_2 = 1;
 }
      else
 VAR_5 = &VAR_6->next;
    }

  return VAR_3 ? VAR_3 : VAR_0;
}
