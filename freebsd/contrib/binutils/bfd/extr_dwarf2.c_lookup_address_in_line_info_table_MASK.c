
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_info_table {struct line_info* last_line; } ;
struct line_info {scalar_t__ address; char* filename; unsigned int line; struct line_info* prev_line; int end_sequence; } ;
struct arange {scalar_t__ low; struct arange* next; } ;
struct funcinfo {struct arange arange; } ;
typedef scalar_t__ bfd_vma ;
typedef scalar_t__ bfd_boolean ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bfd_boolean
FUNC_0 (struct line_info_table *VAR_2,
       bfd_vma VAR_3,
       struct funcinfo *VAR_4,
       const char **VAR_5,
       unsigned int *VAR_6)
{

  struct line_info* VAR_7 = VAR_2->last_line;
  struct line_info* VAR_8 = ((void*)0);
  *VAR_5 = ((void*)0);

  if (!VAR_7)
    return VAR_0;

  VAR_8 = VAR_7->prev_line;


  if (VAR_3 > VAR_7->address)
    VAR_8 = ((void*)0);


  while (VAR_8 && VAR_7)
    {



      bfd_boolean VAR_9 = VAR_0;
      if (VAR_8->address <= VAR_3 && VAR_3 < VAR_7->address)
 {
   VAR_9 = VAR_1;






   if (VAR_4 != ((void*)0))
     {
       bfd_vma VAR_10;
       struct arange *VAR_11;


       VAR_10 = VAR_4->arange.low;
       for (VAR_11 = &VAR_4->arange;
     VAR_11;
     VAR_11 = VAR_11->next)
  {
    if (VAR_4->arange.low < VAR_10)
      VAR_10 = VAR_4->arange.low;
  }

       if (VAR_3 >= VAR_10
    && VAR_8->address < VAR_10
    && VAR_7->address > VAR_10)
  {
    *VAR_5 = VAR_7->filename;
    *VAR_6 = VAR_7->line;
  }
       else
  {
    *VAR_5 = VAR_8->filename;
    *VAR_6 = VAR_8->line;
  }
     }
   else
     {
       *VAR_5 = VAR_8->filename;
       *VAR_6 = VAR_8->line;
     }
 }

      if (VAR_9 && !VAR_8->end_sequence)
 return VAR_1;

      VAR_7 = VAR_8;
      VAR_8 = VAR_8->prev_line;
    }







  if (*VAR_5 == ((void*)0) && VAR_4 != ((void*)0))
    {
      *VAR_5 = VAR_7->filename;
      *VAR_6 = VAR_7->line;
      return VAR_1;
    }

  return VAR_0;
}
