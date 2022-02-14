
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_section_list {struct stab_section_list* next; int * section; } ;
struct coff_symfile_info {struct stab_section_list* stabsects; int * stabstrsect; int textsize; int textaddr; } ;
typedef int bfd ;
typedef int asection ;


 scalar_t__ FUNC_0 (char const*,char*) ;
 char* FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (char const) ;
 int FUNC_5 (int ,struct stab_section_list*) ;
 scalar_t__ FUNC_6 (char const*,char*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void
FUNC_8 (bfd *VAR_1, asection *VAR_2, void *VAR_3)
{
  struct coff_symfile_info *VAR_4;
  const char *VAR_5;

  VAR_4 = (struct coff_symfile_info *) VAR_3;
  VAR_5 = FUNC_1 (VAR_1, VAR_2);
  if (FUNC_0 (VAR_5, ".text"))
    {
      VAR_4->textaddr = FUNC_3 (VAR_1, VAR_2);
      VAR_4->textsize += FUNC_2 (VAR_1, VAR_2);
    }
  else if (FUNC_6 (VAR_5, ".text", sizeof ".text" - 1) == 0)
    {
      VAR_4->textsize += FUNC_2 (VAR_1, VAR_2);
    }
  else if (FUNC_0 (VAR_5, ".stabstr"))
    {
      VAR_4->stabstrsect = VAR_2;
    }
  else if (FUNC_6 (VAR_5, ".stab", sizeof ".stab" - 1) == 0)
    {
      const char *VAR_6;



      for (VAR_6 = VAR_5 + sizeof ".stab" - 1; *VAR_6 != '\0'; VAR_6++)
 if (!FUNC_4 (*VAR_6))
   break;
      if (*VAR_6 == '\0')
 {
   struct stab_section_list *VAR_7, **VAR_8;

   VAR_7 = ((struct stab_section_list *)
        FUNC_7 (sizeof (struct stab_section_list)));
   VAR_7->section = VAR_2;
   VAR_7->next = ((void*)0);
   for (VAR_8 = &VAR_4->stabsects; *VAR_8 != ((void*)0); VAR_8 = &(*VAR_8)->next)
     ;
   *VAR_8 = VAR_7;




   FUNC_5 (VAR_0, VAR_7);
 }
    }
}
