
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {void* _n_offset; scalar_t__ _n_zeroes; } ;
struct TYPE_18__ {int _n_name; TYPE_1__ _n_n; } ;
struct internal_syment {int n_value; scalar_t__ n_scnum; scalar_t__ n_sclass; int n_name; void* n_numaux; void* n_type; TYPE_3__ _n; } ;
typedef int flagword ;
typedef scalar_t__ bfd_size_type ;
struct TYPE_20__ {TYPE_6__* sections; } ;
typedef TYPE_5__ bfd ;
struct TYPE_21__ {int target_index; int alignment_power; struct TYPE_21__* next; int * userdata; scalar_t__ lineno_count; scalar_t__ line_filepos; scalar_t__ reloc_count; scalar_t__ rel_filepos; scalar_t__ filepos; scalar_t__ size; scalar_t__ lma; scalar_t__ vma; int name; } ;
typedef TYPE_6__ asection ;
struct TYPE_17__ {int e_offset; } ;
struct TYPE_19__ {scalar_t__* e_name; TYPE_2__ e; } ;
struct TYPE_22__ {int e_numaux; int e_sclass; int e_type; int e_scnum; int e_value; TYPE_4__ e; } ;
typedef TYPE_7__ SYMENT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (TYPE_5__*,int ) ;
 void* FUNC_1 (TYPE_5__*,int ) ;
 void* FUNC_2 (TYPE_5__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_3 (TYPE_5__*,scalar_t__) ;
 TYPE_6__* FUNC_4 (TYPE_5__*,char*,int) ;
 int FUNC_5 (TYPE_5__*,void*,void*) ;
 int FUNC_6 (int ,scalar_t__*,int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (char*,int ) ;
 scalar_t__ FUNC_9 (int ) ;

void
FUNC_10 (bfd * VAR_7, void * VAR_8, void * VAR_9)
{
  SYMENT *VAR_10 = (SYMENT *) VAR_8;
  struct internal_syment *VAR_11 = (struct internal_syment *) VAR_9;

  if (VAR_10->e.e_name[0] == 0)
    {
      VAR_11->_n._n_n._n_zeroes = 0;
      VAR_11->_n._n_n._n_offset = FUNC_1 (VAR_7, VAR_10->e.e.e_offset);
    }
  else
    FUNC_6 (VAR_11->_n._n_name, VAR_10->e.e_name, VAR_6);

  VAR_11->n_value = FUNC_1 (VAR_7, VAR_10->e_value);
  VAR_11->n_scnum = FUNC_0 (VAR_7, VAR_10->e_scnum);

  if (sizeof (VAR_10->e_type) == 2)
    VAR_11->n_type = FUNC_0 (VAR_7, VAR_10->e_type);
  else
    VAR_11->n_type = FUNC_1 (VAR_7, VAR_10->e_type);

  VAR_11->n_sclass = FUNC_2 (VAR_7, VAR_10->e_sclass);
  VAR_11->n_numaux = FUNC_2 (VAR_7, VAR_10->e_numaux);
  if (VAR_11->n_sclass == VAR_0)
    {
      VAR_11->n_value = 0x0;


      if (VAR_11->n_scnum == 0)
 {
   asection *VAR_12;

   for (VAR_12 = VAR_7->sections; VAR_12; VAR_12 = VAR_12->next)
     {
       if (FUNC_7 (VAR_12->name, VAR_11->n_name) == 0)
  {
    VAR_11->n_scnum = VAR_12->target_index;
    break;
  }
     }
 }

      if (VAR_11->n_scnum == 0)
 {
   int VAR_13 = 0;
   asection *VAR_14;
   char *VAR_15;
   flagword VAR_16;

   for (VAR_14 = VAR_7->sections; VAR_14; VAR_14 = VAR_14->next)
     if (VAR_13 <= VAR_14->target_index)
       VAR_13 = VAR_14->target_index + 1;

   VAR_15 = FUNC_3 (VAR_7, (bfd_size_type) FUNC_9 (VAR_11->n_name) + 10);
   if (VAR_15 == ((void*)0))
     return;
   FUNC_8 (VAR_15, VAR_11->n_name);
   VAR_16 = VAR_4 | VAR_2 | VAR_3 | VAR_5;
   VAR_14 = FUNC_4 (VAR_7, VAR_15, VAR_16);

   VAR_14->vma = 0;
   VAR_14->lma = 0;
   VAR_14->size = 0;
   VAR_14->filepos = 0;
   VAR_14->rel_filepos = 0;
   VAR_14->reloc_count = 0;
   VAR_14->line_filepos = 0;
   VAR_14->lineno_count = 0;
   VAR_14->userdata = ((void*)0);
   VAR_14->next = ((void*)0);
   VAR_14->alignment_power = 2;

   VAR_14->target_index = VAR_13;

   VAR_11->n_scnum = VAR_13;
 }
      VAR_11->n_sclass = VAR_1;
    }







}
