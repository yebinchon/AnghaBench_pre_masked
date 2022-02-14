
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct mips_got_info {int local_gotno; int global_gotno; int tls_gotno; int tls_assigned_gotno; int got_entries; TYPE_1__* global_gotsym; } ;
struct mips_elf_link_hash_table {int function_stub_size; scalar_t__ is_vxworks; int mips16_stubs_seen; } ;
struct mips_elf_count_tls_arg {scalar_t__ needed; struct bfd_link_info* info; } ;
struct bfd_link_info {TYPE_2__* input_bfds; scalar_t__ relocatable; } ;
typedef int bfd_size_type ;
typedef int bfd_boolean ;
struct TYPE_18__ {TYPE_3__* sections; struct TYPE_18__* link_next; } ;
typedef TYPE_2__ bfd ;
struct TYPE_19__ {int flags; int size; struct TYPE_19__* next; } ;
typedef TYPE_3__ asection ;
struct TYPE_20__ {int dynsymcount; TYPE_2__* dynobj; } ;
struct TYPE_17__ {int dynindx; } ;
typedef int Elf32_External_RegInfo ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bfd_link_info*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*,int) ;
 int FUNC_4 (TYPE_2__*,struct bfd_link_info*) ;
 TYPE_8__* FUNC_5 (struct bfd_link_info*) ;
 int FUNC_6 (TYPE_8__*,int ,struct mips_elf_count_tls_arg*) ;
 int FUNC_7 (int ,int ,struct mips_got_info*) ;
 int VAR_5 ;
 int VAR_6 ;
 struct mips_got_info* FUNC_8 (TYPE_2__*,TYPE_3__**) ;
 struct mips_elf_link_hash_table* FUNC_9 (struct bfd_link_info*) ;
 int VAR_7 ;
 int FUNC_10 (struct mips_elf_link_hash_table*,int ,int *) ;
 int FUNC_11 (TYPE_2__*,struct bfd_link_info*,struct mips_got_info*,TYPE_3__*,int) ;
 int FUNC_12 (struct mips_got_info*) ;
 int FUNC_13 (struct bfd_link_info*,int) ;

bfd_boolean
FUNC_14 (bfd *VAR_8,
        struct bfd_link_info *VAR_9)
{
  asection *VAR_10;

  bfd *VAR_11;
  asection *VAR_12;
  struct mips_got_info *VAR_13;
  int VAR_14;
  bfd_size_type VAR_15 = 0;
  bfd_size_type VAR_16;
  bfd_size_type VAR_17;
  bfd *VAR_18;
  struct mips_elf_count_tls_arg VAR_19;
  struct mips_elf_link_hash_table *VAR_20;

  VAR_20 = FUNC_9 (VAR_9);


  VAR_10 = FUNC_2 (VAR_8, ".reginfo");
  if (VAR_10 != ((void*)0))
    FUNC_3 (VAR_8, VAR_10, sizeof (Elf32_External_RegInfo));

  if (! (VAR_9->relocatable
  || ! FUNC_9 (VAR_9)->mips16_stubs_seen))
    FUNC_10 (FUNC_9 (VAR_9),
     VAR_5, ((void*)0));

  VAR_11 = FUNC_5 (VAR_9)->dynobj;
  if (VAR_11 == ((void*)0))

    return VAR_4;

  VAR_13 = FUNC_8 (VAR_11, &VAR_12);
  if (VAR_12 == ((void*)0))
    return VAR_4;




  for (VAR_18 = VAR_9->input_bfds; VAR_18; VAR_18 = VAR_18->link_next)
    {
      asection *VAR_21;

      for (VAR_21 = VAR_18->sections;
    VAR_21;
    VAR_21 = VAR_21->next)
 {
   if ((VAR_21->flags & VAR_3) == 0)
     continue;
   VAR_15 += ((VAR_21->size + 0xf)
       &~ (bfd_size_type) 0xf);
 }
    }






  if (! FUNC_13 (VAR_9, 1))
    return VAR_0;

  if (VAR_13->global_gotsym != ((void*)0))
    VAR_14 = FUNC_5 (VAR_9)->dynsymcount - VAR_13->global_gotsym->dynindx;
  else


    VAR_14 = 0;





  VAR_17 = (FUNC_5 (VAR_9)->dynsymcount
   + FUNC_4 (VAR_8, VAR_9));


  VAR_20->function_stub_size = (VAR_17 > 0x10000
         ? VAR_1
         : VAR_2);




  VAR_15 += VAR_20->function_stub_size * (VAR_14 + 1);

  if (VAR_20->is_vxworks)



    VAR_16 = 0;
  else


    VAR_16 = (VAR_15 >> 16) + 5;

  VAR_13->local_gotno += VAR_16;
  VAR_12->size += VAR_13->local_gotno * FUNC_1 (VAR_8);

  VAR_13->global_gotno = VAR_14;
  VAR_12->size += VAR_14 * FUNC_1 (VAR_8);




  VAR_19.info = VAR_9;
  VAR_19.needed = 0;
  FUNC_6 (FUNC_5 (VAR_9),
     VAR_6,
     &VAR_19);
  VAR_13->tls_gotno += VAR_19.needed;
  VAR_12->size += VAR_13->tls_gotno * FUNC_1 (VAR_8);

  FUNC_12 (VAR_13);




  if (!VAR_20->is_vxworks && VAR_12->size > FUNC_0 (VAR_9))
    {
      if (! FUNC_11 (VAR_8, VAR_9, VAR_13, VAR_12, VAR_16))
 return VAR_0;
    }
  else
    {

      VAR_13->tls_assigned_gotno = VAR_13->global_gotno + VAR_13->local_gotno;
      FUNC_7 (VAR_13->got_entries, VAR_7, VAR_13);
    }

  return VAR_4;
}
