
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macro_source_file {int included_at_line; struct macro_source_file* next_included; struct macro_source_file* included_by; int table; int filename; struct macro_source_file* includes; } ;


 int FUNC_0 (int *,char*,char const*,int ,int ,int) ;
 struct macro_source_file* FUNC_1 (int ,char const*) ;
 int VAR_0 ;

struct macro_source_file *
FUNC_2 (struct macro_source_file *VAR_1,
               int VAR_2,
               const char *VAR_3)
{
  struct macro_source_file *VAR_4;
  struct macro_source_file **VAR_5;




  for (VAR_5 = &VAR_1->includes;
       *VAR_5 && (*VAR_5)->included_at_line < VAR_2;
       VAR_5 = &(*VAR_5)->next_included)
    ;



  if (*VAR_5 && VAR_2 == (*VAR_5)->included_at_line)
    {







      FUNC_0 (&VAR_0,
   "both `%s' and `%s' allegedly #included at %s:%d", VAR_3,
   (*VAR_5)->filename, VAR_1->filename, VAR_2);



      while (*VAR_5 && VAR_2 == (*VAR_5)->included_at_line)
        {

          VAR_2++;
          VAR_5 = &(*VAR_5)->next_included;
        }
    }




  VAR_4 = FUNC_1 (VAR_1->table, VAR_3);
  VAR_4->included_by = VAR_1;
  VAR_4->included_at_line = VAR_2;
  VAR_4->next_included = *VAR_5;
  *VAR_5 = VAR_4;

  return VAR_4;
}
