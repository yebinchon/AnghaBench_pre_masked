
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct varinfo {scalar_t__ tag; int stack; scalar_t__ line; int addr; void* file; int * name; struct varinfo* prev_var; } ;
struct funcinfo {scalar_t__ tag; scalar_t__ caller_line; scalar_t__ line; int arange; void* file; int * name; void* caller_file; struct funcinfo* caller_func; struct funcinfo* prev_func; } ;
struct comp_unit {int addr_size; int * abfd; int line_table; struct varinfo* variable_table; struct funcinfo* function_table; int abbrevs; int * first_child_die_ptr; } ;
struct TYPE_3__ {scalar_t__ val; TYPE_2__* blk; int * str; } ;
struct attribute {int name; TYPE_1__ u; int form; } ;
struct abbrev_info {scalar_t__ tag; unsigned int num_attrs; scalar_t__ has_children; int * attrs; } ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_size_type ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_4__ {int * data; int size; } ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int *,int *,scalar_t__,scalar_t__) ;
 int VAR_7 ;
 int FUNC_3 (int,int *,int ) ;
 struct funcinfo** FUNC_4 (int) ;
 struct funcinfo** FUNC_5 (struct funcinfo**,int) ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (int *,int) ;
 void* FUNC_8 (int ,scalar_t__) ;
 int * FUNC_9 (struct comp_unit*,scalar_t__) ;
 int FUNC_10 (struct funcinfo**) ;
 struct abbrev_info* FUNC_11 (unsigned int,int ) ;
 int * FUNC_12 (struct attribute*,int *,struct comp_unit*,int *) ;
 int FUNC_13 (struct comp_unit*,int *,scalar_t__) ;
 unsigned int FUNC_14 (int *,int *,unsigned int*) ;
 int FUNC_15 (int ,unsigned int) ;

__attribute__((used)) static bfd_boolean
FUNC_16 (struct comp_unit *VAR_8)
{
  bfd *VAR_9 = VAR_8->abfd;
  bfd_byte *VAR_10 = VAR_8->first_child_die_ptr;
  int VAR_11 = 1;
  struct funcinfo **VAR_12;
  int VAR_13;



  VAR_13 = 32;
  VAR_12 = FUNC_4 (VAR_13 * sizeof (struct funcinfo *));
  if (VAR_12 == ((void*)0))
    return VAR_5;
  VAR_12[VAR_11] = 0;

  while (VAR_11)
    {
      unsigned int VAR_14, VAR_15, VAR_16;
      struct abbrev_info *VAR_17;
      struct attribute VAR_18;
      struct funcinfo *VAR_19;
      struct varinfo *VAR_20;
      bfd_vma VAR_21 = 0;
      bfd_vma VAR_22 = 0;

      VAR_14 = FUNC_14 (VAR_9, VAR_10, &VAR_15);
      VAR_10 += VAR_15;

      if (! VAR_14)
 {
   VAR_11--;
   continue;
 }

      VAR_17 = FUNC_11 (VAR_14,VAR_8->abbrevs);
      if (! VAR_17)
 {
   FUNC_1) (FUNC_0("Dwarf Error: Could not find abbrev number %u."),
        VAR_14);
   FUNC_6 (VAR_7);
   FUNC_10 (VAR_12);
   return VAR_5;
 }

      VAR_20 = ((void*)0);
      if (VAR_17->tag == VAR_3
   || VAR_17->tag == VAR_1
   || VAR_17->tag == VAR_2)
 {
   bfd_size_type VAR_23 = sizeof (struct funcinfo);
   VAR_19 = FUNC_7 (VAR_9, VAR_23);
   VAR_19->tag = VAR_17->tag;
   VAR_19->prev_func = VAR_8->function_table;
   VAR_8->function_table = VAR_19;

   if (VAR_19->tag == VAR_2)
     for (VAR_16 = VAR_11 - 1; VAR_16 >= 1; VAR_16--)
       if (VAR_12[VAR_16])
  {
    VAR_19->caller_func = VAR_12[VAR_16];
    break;
  }
   VAR_12[VAR_11] = VAR_19;
 }
      else
 {
   VAR_19 = ((void*)0);
   if (VAR_17->tag == VAR_4)
     {
       bfd_size_type VAR_24 = sizeof (struct varinfo);
       VAR_20 = FUNC_7 (VAR_9, VAR_24);
       VAR_20->tag = VAR_17->tag;
       VAR_20->stack = 1;
       VAR_20->prev_var = VAR_8->variable_table;
       VAR_8->variable_table = VAR_20;
     }


   VAR_12[VAR_11] = 0;
 }

      for (VAR_16 = 0; VAR_16 < VAR_17->num_attrs; ++VAR_16)
 {
   VAR_10 = FUNC_12 (&VAR_18, &VAR_17->attrs[VAR_16], VAR_8, VAR_10);

   if (VAR_19)
     {
       switch (VAR_18.name)
  {
  case 141:
    VAR_19->caller_file = FUNC_8 (VAR_8->line_table, VAR_18.u.val);
    break;

  case 140:
    VAR_19->caller_line = VAR_18.u.val;
    break;

  case 142:
    VAR_19->name = FUNC_9 (VAR_8, VAR_18.u.val);
    break;

  case 133:

    if (VAR_19->name == ((void*)0))
      VAR_19->name = VAR_18.u.str;
    break;

  case 143:
    VAR_19->name = VAR_18.u.str;
    break;

  case 134:
    VAR_21 = VAR_18.u.val;
    break;

  case 136:
    VAR_22 = VAR_18.u.val;
    break;

  case 132:
    FUNC_13 (VAR_8, &VAR_19->arange, VAR_18.u.val);
    break;

  case 139:
    VAR_19->file = FUNC_8 (VAR_8->line_table,
      VAR_18.u.val);
    break;

  case 138:
    VAR_19->line = VAR_18.u.val;
    break;

  default:
    break;
  }
     }
   else if (VAR_20)
     {
       switch (VAR_18.name)
  {
  case 133:
    VAR_20->name = VAR_18.u.str;
    break;

  case 139:
    VAR_20->file = FUNC_8 (VAR_8->line_table,
            VAR_18.u.val);
    break;

  case 138:
    VAR_20->line = VAR_18.u.val;
    break;

  case 137:
    if (VAR_18.u.val != 0)
      VAR_20->stack = 0;
    break;

  case 135:
    switch (VAR_18.form)
      {
      case 131:
      case 130:
      case 129:
      case 128:
        if (*VAR_18.u.blk->data == VAR_0)
   {
     VAR_20->stack = 0;







     if (VAR_18.u.blk->size == VAR_8->addr_size + 1U)
       VAR_20->addr = FUNC_3 (VAR_8->addr_size * 8,
       VAR_8->abfd,
       *(VAR_18.u.blk->data + 1));
   }
        break;

      default:
        break;
      }
    break;

  default:
    break;
  }
     }
 }

      if (VAR_19 && VAR_22 != 0)
 {
   FUNC_2 (VAR_8->abfd, &VAR_19->arange, VAR_21, VAR_22);
 }

      if (VAR_17->has_children)
 {
   VAR_11++;

   if (VAR_11 >= VAR_13)
     {
       struct funcinfo **VAR_25;

       VAR_13 *= 2;
       VAR_25 = FUNC_5 (VAR_12,
     (VAR_13
      * sizeof (struct funcinfo *)));
       if (VAR_25 == ((void*)0))
  {
    FUNC_10 (VAR_12);
    return VAR_5;
  }
       VAR_12 = VAR_25;
     }
   VAR_12[VAR_11] = 0;
 }
    }

  FUNC_10 (VAR_12);
  return VAR_6;
}
