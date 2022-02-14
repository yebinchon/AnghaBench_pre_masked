
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct internal_filehdr {int f_symptr; } ;
struct internal_aouthdr {scalar_t__ magic; int fprmask; int * cprmask; int gprmask; int gp_value; scalar_t__ tsize; scalar_t__ text_start; } ;
struct TYPE_7__ {int gp_size; int fprmask; int * cprmask; int gprmask; int gp; scalar_t__ text_end; scalar_t__ text_start; int sym_filepos; } ;
typedef TYPE_1__ ecoff_data_type ;
struct TYPE_8__ {int flags; } ;
typedef TYPE_2__ bfd ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;

void *
FUNC_2 (bfd *VAR_2, void * VAR_3, void * VAR_4)
{
  struct internal_filehdr *VAR_5 = (struct internal_filehdr *) VAR_3;
  struct internal_aouthdr *VAR_6 = (struct internal_aouthdr *) VAR_4;
  ecoff_data_type *VAR_7;

  if (! FUNC_0 (VAR_2))
    return ((void*)0);

  VAR_7 = FUNC_1 (VAR_2);
  VAR_7->gp_size = 8;
  VAR_7->sym_filepos = VAR_5->f_symptr;

  if (VAR_6 != ((void*)0))
    {
      int VAR_8;

      VAR_7->text_start = VAR_6->text_start;
      VAR_7->text_end = VAR_6->text_start + VAR_6->tsize;
      VAR_7->gp = VAR_6->gp_value;
      VAR_7->gprmask = VAR_6->gprmask;
      for (VAR_8 = 0; VAR_8 < 4; VAR_8++)
 VAR_7->cprmask[VAR_8] = VAR_6->cprmask[VAR_8];
      VAR_7->fprmask = VAR_6->fprmask;
      if (VAR_6->magic == VAR_1)
 VAR_2->flags |= VAR_0;
      else
 VAR_2->flags &=~ VAR_0;
    }







  return (void *) VAR_7;
}
