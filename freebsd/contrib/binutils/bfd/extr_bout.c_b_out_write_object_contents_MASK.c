
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct external_exec {int dummy; } ;
typedef int file_ptr ;
typedef scalar_t__ bfd_size_type ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_13__ {int flags; } ;
typedef TYPE_1__ asymbol ;
struct TYPE_16__ {int a_syms; int a_trsize; int a_drsize; int a_dload; int a_tload; int a_balign; int a_dalign; int a_talign; int a_entry; int a_bss; int a_data; int a_text; int a_info; } ;
struct TYPE_15__ {int alignment_power; int size; } ;
struct TYPE_14__ {int reloc_count; int vma; int alignment_power; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_6__) ;
 scalar_t__ FUNC_1 (TYPE_6__) ;
 scalar_t__ FUNC_2 (TYPE_6__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_3__*) ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (void*,scalar_t__,int *) ;
 TYPE_1__** FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (int *,TYPE_6__*,struct external_exec*) ;
 TYPE_6__* FUNC_12 (int *) ;
 TYPE_5__* FUNC_13 (int *) ;
 TYPE_3__* FUNC_14 (int *) ;
 TYPE_3__* FUNC_15 (int *) ;
 int FUNC_16 (TYPE_1__**,size_t,int,int ) ;

__attribute__((used)) static bfd_boolean
FUNC_17 (bfd *VAR_7)
{
  struct external_exec VAR_8;
  bfd_size_type VAR_9;

  if (! FUNC_3 (VAR_7))
    return VAR_3;

  FUNC_12 (VAR_7)->a_info = VAR_0;

  FUNC_12 (VAR_7)->a_text = FUNC_15 (VAR_7)->size;
  FUNC_12 (VAR_7)->a_data = FUNC_14 (VAR_7)->size;
  FUNC_12 (VAR_7)->a_bss = FUNC_13 (VAR_7)->size;
  FUNC_12 (VAR_7)->a_syms = FUNC_9 (VAR_7) * 12;
  FUNC_12 (VAR_7)->a_entry = FUNC_8 (VAR_7);
  FUNC_12 (VAR_7)->a_trsize = (FUNC_15 (VAR_7)->reloc_count) * 8;
  FUNC_12 (VAR_7)->a_drsize = (FUNC_14 (VAR_7)->reloc_count) * 8;

  FUNC_12 (VAR_7)->a_talign = FUNC_15 (VAR_7)->alignment_power;
  FUNC_12 (VAR_7)->a_dalign = FUNC_14 (VAR_7)->alignment_power;
  FUNC_12 (VAR_7)->a_balign = FUNC_13 (VAR_7)->alignment_power;

  FUNC_12 (VAR_7)->a_tload = FUNC_15 (VAR_7)->vma;
  FUNC_12 (VAR_7)->a_dload = FUNC_14 (VAR_7)->vma;

  FUNC_11 (VAR_7, FUNC_12 (VAR_7), &VAR_8);

  VAR_9 = VAR_2;
  if (FUNC_10 (VAR_7, (file_ptr) 0, VAR_4) != 0
      || FUNC_6 ((void *) &VAR_8, VAR_9, VAR_7) != VAR_9)
    return VAR_3;


  if (FUNC_9 (VAR_7) != 0)
    {





      asymbol **VAR_10, **VAR_11, **VAR_12;

      VAR_10 = FUNC_7 (VAR_7);
      VAR_11 = VAR_10 + FUNC_9 (VAR_7);

      for (VAR_12 = VAR_11--; VAR_11 >= VAR_10; VAR_11--)
 {
   if ((*VAR_11)->flags & VAR_1)
     {
       asymbol *VAR_13 = *--VAR_12;
       *VAR_12 = *VAR_11;
       *VAR_11 = VAR_13;
     }
 }

      if (VAR_12 > VAR_10)
 FUNC_16 (VAR_10, (size_t) (VAR_12 - VAR_10), sizeof (asymbol*),
        VAR_6);


      if (FUNC_10 (VAR_7, (file_ptr) (FUNC_1 (*FUNC_12 (VAR_7))), VAR_4)
   != 0)
 return VAR_3;

      if (! FUNC_4 (VAR_7))
 return VAR_3;

      if (FUNC_10 (VAR_7, (file_ptr) (FUNC_2 (*FUNC_12 (VAR_7))), VAR_4)
   != 0)
 return VAR_3;

      if (!FUNC_5 (VAR_7, FUNC_15 (VAR_7)))
 return VAR_3;
      if (FUNC_10 (VAR_7, (file_ptr) (FUNC_0 (*FUNC_12 (VAR_7))), VAR_4)
   != 0)
 return VAR_3;

      if (!FUNC_5 (VAR_7, FUNC_14 (VAR_7)))
 return VAR_3;
    }
  return VAR_5;
}
