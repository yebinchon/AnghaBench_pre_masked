
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct internal_scnhdr {char* s_name; scalar_t__ s_scnptr; scalar_t__ s_nreloc; scalar_t__ s_nlnno; int s_lnnoptr; int s_relptr; int s_size; int s_paddr; int s_vaddr; } ;
typedef int flagword ;
typedef scalar_t__ bfd_size_type ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_5__ {scalar_t__ filepos; scalar_t__ reloc_count; unsigned int target_index; int flags; scalar_t__ lineno_count; int * next; int * userdata; int line_filepos; int rel_filepos; int size; int lma; int vma; } ;
typedef TYPE_1__ asection ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (int *) ;
 char* FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_1__*,struct internal_scnhdr*) ;
 int FUNC_4 (int *,struct internal_scnhdr*,char*,TYPE_1__*,int*) ;
 TYPE_1__* FUNC_5 (int *,char*) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*,char const*) ;
 scalar_t__ FUNC_8 (char const*) ;
 int FUNC_9 (char*,char*,int) ;
 long FUNC_10 (char*,char**,int) ;

__attribute__((used)) static bfd_boolean
FUNC_11 (bfd *VAR_6,
     struct internal_scnhdr *VAR_7,
     unsigned int VAR_8)
{
  asection *VAR_9;
  char *VAR_10;
  bfd_boolean VAR_11 = VAR_5;
  flagword VAR_12;

  VAR_10 = ((void*)0);


  if (FUNC_2 (VAR_6)
      && VAR_7->s_name[0] == '/')
    {
      char VAR_13[VAR_1];
      long VAR_14;
      char *VAR_15;
      const char *VAR_16;

      FUNC_6 (VAR_13, VAR_7->s_name + 1, VAR_1 - 1);
      VAR_13[VAR_1 - 1] = '\0';
      VAR_14 = FUNC_10 (VAR_13, &VAR_15, 10);
      if (*VAR_15 == '\0' && VAR_14 >= 0)
 {
   VAR_16 = FUNC_0 (VAR_6);
   if (VAR_16 == ((void*)0))
     return VAR_0;



   VAR_16 += VAR_14;
   VAR_10 = FUNC_1 (VAR_6, (bfd_size_type) FUNC_8 (VAR_16) + 1);
   if (VAR_10 == ((void*)0))
     return VAR_0;
   FUNC_7 (VAR_10, VAR_16);
 }
    }

  if (VAR_10 == ((void*)0))
    {

      VAR_10 = FUNC_1 (VAR_6, (bfd_size_type) sizeof (VAR_7->s_name) + 1);
      if (VAR_10 == ((void*)0))
 return VAR_0;
      FUNC_9 (VAR_10, (char *) &VAR_7->s_name[0], sizeof (VAR_7->s_name));
      VAR_10[sizeof (VAR_7->s_name)] = 0;
    }

  VAR_9 = FUNC_5 (VAR_6, VAR_10);
  if (VAR_9 == ((void*)0))
    return VAR_0;

  VAR_9->vma = VAR_7->s_vaddr;
  VAR_9->lma = VAR_7->s_paddr;
  VAR_9->size = VAR_7->s_size;
  VAR_9->filepos = VAR_7->s_scnptr;
  VAR_9->rel_filepos = VAR_7->s_relptr;
  VAR_9->reloc_count = VAR_7->s_nreloc;

  FUNC_3 (VAR_6, VAR_9, VAR_7);

  VAR_9->line_filepos = VAR_7->s_lnnoptr;

  VAR_9->lineno_count = VAR_7->s_nlnno;
  VAR_9->userdata = ((void*)0);
  VAR_9->next = ((void*)0);
  VAR_9->target_index = VAR_8;

  if (! FUNC_4 (VAR_6, VAR_7, VAR_10, VAR_9,
      & VAR_12))
    VAR_11 = VAR_0;

  VAR_9->flags = VAR_12;



  if ((VAR_9->flags & VAR_2) != 0)
    VAR_9->lineno_count = 0;

  if (VAR_7->s_nreloc != 0)
    VAR_9->flags |= VAR_4;

  if (VAR_7->s_scnptr != 0)
    VAR_9->flags |= VAR_3;

  return VAR_11;
}
