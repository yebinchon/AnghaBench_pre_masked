
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ subsegT ;
struct line_subseg {scalar_t__ subseg; int * head; int ** ptail; struct line_subseg* next; } ;
struct line_seg {scalar_t__ seg; struct line_subseg* head; struct line_seg* next; } ;
typedef scalar_t__ segT ;


 struct line_seg* VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static struct line_subseg *
FUNC_1 (segT VAR_1, subsegT VAR_2)
{
  static segT VAR_3;
  static subsegT VAR_4;
  static struct line_subseg *VAR_5;

  struct line_seg **VAR_6, *VAR_7;
  struct line_subseg **VAR_8, *VAR_9;

  if (VAR_1 == VAR_3 && VAR_2 == VAR_4)
    return VAR_5;

  for (VAR_6 = &VAR_0; (VAR_7 = *VAR_6) != ((void*)0); VAR_6 = &VAR_7->next)
    if (VAR_7->seg == VAR_1)
      goto found_seg;

  VAR_7 = (struct line_seg *) FUNC_0 (sizeof (*VAR_7));
  VAR_7->next = ((void*)0);
  VAR_7->seg = VAR_1;
  VAR_7->head = ((void*)0);
  *VAR_6 = VAR_7;

 found_seg:
  for (VAR_8 = &VAR_7->head; (VAR_9 = *VAR_8) != ((void*)0) ; VAR_8 = &VAR_9->next)
    {
      if (VAR_9->subseg == VAR_2)
 goto found_subseg;
      if (VAR_9->subseg > VAR_2)
 break;
    }

  VAR_9 = (struct line_subseg *) FUNC_0 (sizeof (*VAR_9));
  VAR_9->next = *VAR_8;
  VAR_9->subseg = VAR_2;
  VAR_9->head = ((void*)0);
  VAR_9->ptail = &VAR_9->head;
  *VAR_8 = VAR_9;

 found_subseg:
  VAR_3 = VAR_1;
  VAR_4 = VAR_2;
  VAR_5 = VAR_9;

  return VAR_9;
}
