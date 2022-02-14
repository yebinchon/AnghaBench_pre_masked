
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee_range {scalar_t__ low; scalar_t__ high; struct ieee_range* next; } ;
struct ieee_handle {struct ieee_range* ranges; struct ieee_range* global_ranges; } ;
typedef scalar_t__ bfd_vma ;
typedef scalar_t__ bfd_boolean ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ieee_range*) ;
 int FUNC_1 (struct ieee_range*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (struct ieee_handle *VAR_1, bfd_boolean VAR_2, bfd_vma VAR_3,
  bfd_vma VAR_4)
{
  struct ieee_range **VAR_5, *VAR_6, **VAR_7;

  if (VAR_3 == (bfd_vma) -1 || VAR_4 == (bfd_vma) -1 || VAR_3 == VAR_4)
    return VAR_0;

  if (VAR_2)
    VAR_5 = &VAR_1->global_ranges;
  else
    VAR_5 = &VAR_1->ranges;

  for (VAR_6 = *VAR_5; VAR_6 != ((void*)0); VAR_6 = VAR_6->next)
    {
      if (VAR_4 >= VAR_6->low && VAR_3 <= VAR_6->high)
 {

   if (VAR_3 < VAR_6->low)
     VAR_6->low = VAR_3;
   if (VAR_4 > VAR_6->high)
     VAR_6->high = VAR_4;
   VAR_7 = &VAR_6->next;
   while (*VAR_7 != ((void*)0) && (*VAR_7)->low <= VAR_6->high)
     {
       struct ieee_range *VAR_8;

       if ((*VAR_7)->high > VAR_6->high)
  VAR_6->high = (*VAR_7)->high;
       VAR_8 = (*VAR_7)->next;
       FUNC_0 (*VAR_7);
       *VAR_7 = VAR_8;
     }
   return VAR_0;
 }
    }

  VAR_6 = (struct ieee_range *) FUNC_2 (sizeof *VAR_6);
  FUNC_1 (VAR_6, 0, sizeof *VAR_6);

  VAR_6->low = VAR_3;
  VAR_6->high = VAR_4;


  for (VAR_7 = VAR_5; *VAR_7 != ((void*)0); VAR_7 = &(*VAR_7)->next)
    if ((*VAR_7)->low > VAR_4)
      break;
  VAR_6->next = *VAR_7;
  *VAR_7 = VAR_6;

  return VAR_0;
}
