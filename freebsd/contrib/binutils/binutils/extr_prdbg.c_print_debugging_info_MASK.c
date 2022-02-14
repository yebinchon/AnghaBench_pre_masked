
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pr_handle {void* demangler; int ** syms; int * abfd; int * filename; scalar_t__ parameter; int * stack; scalar_t__ indent; int * f; } ;
typedef scalar_t__ bfd_boolean ;
typedef int bfd ;
typedef int asymbol ;
typedef int FILE ;


 scalar_t__ FUNC_0 (void*,int *,void*) ;
 int FUNC_1 (char*,int *) ;
 int VAR_0 ;
 int VAR_1 ;

bfd_boolean
FUNC_2 (FILE *VAR_2, void *VAR_3, bfd *VAR_4, asymbol **VAR_5,
        void *VAR_6, bfd_boolean VAR_7)
{
  struct pr_handle VAR_8;

  VAR_8.f = VAR_2;
  VAR_8.indent = 0;
  VAR_8.stack = ((void*)0);
  VAR_8.parameter = 0;
  VAR_8.filename = ((void*)0);
  VAR_8.abfd = VAR_4;
  VAR_8.syms = VAR_5;
  VAR_8.demangler = VAR_6;

  if (VAR_7)
    {
      FUNC_1 ("!_TAG_FILE_FORMAT\t2\t/extended format/\n", VAR_2);
      FUNC_1 ("!_TAG_FILE_SORTED\t0\t/0=unsorted, 1=sorted/\n", VAR_2);
      FUNC_1 ("!_TAG_PROGRAM_AUTHOR\tIan Lance Taylor, Salvador E. Tropea and others\t//\n", VAR_2);
      FUNC_1 ("!_TAG_PROGRAM_NAME\tobjdump\t/From GNU binutils/\n", VAR_2);
    }

  return VAR_7 ? FUNC_0 (VAR_3, &VAR_1, (void *) & VAR_8)
    : FUNC_0 (VAR_3, &VAR_0, (void *) & VAR_8);
}
