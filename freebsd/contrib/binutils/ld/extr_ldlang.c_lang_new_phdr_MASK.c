
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lang_phdr {char const* name; struct lang_phdr* next; int * flags; int * at; void* phdrs; void* filehdr; int type; } ;
typedef int etree_type ;
typedef void* bfd_boolean ;


 int FUNC_0 (int *,int ,char*) ;
 struct lang_phdr* VAR_0 ;
 struct lang_phdr* FUNC_1 (int) ;

void
FUNC_2 (const char *VAR_1,
        etree_type *VAR_2,
        bfd_boolean VAR_3,
        bfd_boolean VAR_4,
        etree_type *VAR_5,
        etree_type *VAR_6)
{
  struct lang_phdr *VAR_7, **VAR_8;

  VAR_7 = FUNC_1 (sizeof (struct lang_phdr));
  VAR_7->next = ((void*)0);
  VAR_7->name = VAR_1;
  VAR_7->type = FUNC_0 (VAR_2, 0, "program header type");
  VAR_7->filehdr = VAR_3;
  VAR_7->phdrs = VAR_4;
  VAR_7->at = VAR_5;
  VAR_7->flags = VAR_6;

  for (VAR_8 = &VAR_0; *VAR_8 != ((void*)0); VAR_8 = &(*VAR_8)->next)
    ;
  *VAR_8 = VAR_7;
}
