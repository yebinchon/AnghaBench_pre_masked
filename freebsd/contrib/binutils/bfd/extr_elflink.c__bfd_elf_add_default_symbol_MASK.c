
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {struct bfd_link_hash_entry* link; } ;
struct TYPE_12__ {TYPE_1__ i; } ;
struct bfd_link_hash_entry {scalar_t__ type; TYPE_2__ u; } ;
struct elf_link_hash_entry {int ref_dynamic; scalar_t__ ref_regular; struct bfd_link_hash_entry root; scalar_t__ def_regular; scalar_t__ def_dynamic; } ;
struct elf_backend_data {int collect; int (* elf_backend_copy_indirect_symbol ) (struct bfd_link_info*,struct elf_link_hash_entry*,struct elf_link_hash_entry*) ;} ;
struct bfd_link_info {scalar_t__ shared; TYPE_3__* hash; } ;
typedef int bfd_vma ;
typedef int bfd_boolean ;
struct TYPE_14__ {int flags; } ;
typedef TYPE_4__ bfd ;
typedef int asection ;
struct TYPE_13__ {int table; } ;
typedef int Elf_Internal_Sym ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_4__*,struct bfd_link_info*,char*,int *,int **,int *,int *,struct elf_link_hash_entry**,int*,int*,int*,int*) ;
 int FUNC_3 (int ,TYPE_4__*,char*) ;
 int FUNC_4 (struct bfd_link_info*,TYPE_4__*,char*,int ,int ,int ,char const*,int,int,struct bfd_link_hash_entry**) ;
 int FUNC_5 (struct bfd_link_info*,struct elf_link_hash_entry*) ;
 char* FUNC_6 (int *,size_t) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_7 (struct bfd_link_info*) ;
 struct elf_link_hash_entry* FUNC_8 (int ,char const*,int,int,int) ;
 struct elf_backend_data* FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (char*,char const*,size_t) ;
 char* FUNC_11 (char const*,char) ;
 size_t FUNC_12 (char const*) ;
 int FUNC_13 (struct bfd_link_info*,struct elf_link_hash_entry*,struct elf_link_hash_entry*) ;
 int FUNC_14 (int ,TYPE_4__*,char*) ;
 int FUNC_15 (struct bfd_link_info*,struct elf_link_hash_entry*,struct elf_link_hash_entry*) ;

bfd_boolean
FUNC_16 (bfd *VAR_10,
        struct bfd_link_info *VAR_11,
        struct elf_link_hash_entry *VAR_12,
        const char *VAR_13,
        Elf_Internal_Sym *VAR_14,
        asection **VAR_15,
        bfd_vma *VAR_16,
        bfd_boolean *VAR_17,
        bfd_boolean VAR_18)
{
  bfd_boolean VAR_19;
  bfd_boolean VAR_20;
  bfd_boolean VAR_21;
  char *VAR_22;
  struct elf_link_hash_entry *VAR_23;
  struct bfd_link_hash_entry *VAR_24;
  const struct elf_backend_data *VAR_25;
  bfd_boolean VAR_26;
  bfd_boolean VAR_27;
  char *VAR_28;
  size_t VAR_29, VAR_30;
  asection *VAR_31;





  VAR_28 = FUNC_11 (VAR_13, VAR_2);
  if (VAR_28 == ((void*)0) || VAR_28[1] != VAR_2)
    return VAR_4;

  if (VAR_18)
    {


      VAR_23 = FUNC_8 (FUNC_7 (VAR_11), VAR_13, VAR_4,
     VAR_3, VAR_3);
      FUNC_0 (VAR_23 != ((void*)0));
      if (VAR_23 == VAR_12)
 return VAR_4;
      while (VAR_23->root.type == VAR_8
      || VAR_23->root.type == VAR_9)
 {
   VAR_23 = (struct elf_link_hash_entry *) VAR_23->root.u.i.link;
   if (VAR_23 == VAR_12)
     return VAR_4;
 }
    }

  VAR_25 = FUNC_9 (VAR_10);
  VAR_26 = VAR_25->collect;
  VAR_27 = (VAR_10->flags & VAR_1) != 0;

  VAR_30 = VAR_28 - VAR_13;
  VAR_22 = FUNC_6 (&VAR_11->hash->table, VAR_30 + 1);
  if (VAR_22 == ((void*)0))
    return VAR_3;
  FUNC_10 (VAR_22, VAR_13, VAR_30);
  VAR_22[VAR_30] = '\0';





  VAR_19 = VAR_3;
  VAR_20 = VAR_3;
  VAR_31 = *VAR_15;
  if (!FUNC_2 (VAR_10, VAR_11, VAR_22, VAR_14, &VAR_31, VAR_16,
         ((void*)0), &VAR_23, &VAR_21, &VAR_18,
         &VAR_19, &VAR_20))
    return VAR_3;

  if (VAR_21)
    goto nondefault;

  if (! VAR_18)
    {
      VAR_24 = &VAR_23->root;
      if (! (FUNC_4
      (VAR_11, VAR_10, VAR_22, VAR_0, VAR_5,
       0, VAR_13, VAR_3, VAR_26, &VAR_24)))
 return VAR_3;
      VAR_23 = (struct elf_link_hash_entry *) VAR_24;
    }
  else
    {
      while (VAR_23->root.type == VAR_8
      || VAR_23->root.type == VAR_9)
 VAR_23 = (struct elf_link_hash_entry *) VAR_23->root.u.i.link;

      VAR_12->root.type = VAR_8;
      VAR_12->root.u.i.link = (struct bfd_link_hash_entry *) VAR_23;
      if (VAR_12->def_dynamic)
 {
   VAR_12->def_dynamic = 0;
   VAR_23->ref_dynamic = 1;
   if (VAR_23->ref_regular
       || VAR_23->def_regular)
     {
       if (! FUNC_5 (VAR_11, VAR_23))
  return VAR_3;
     }
 }



      VAR_23 = VAR_12;
    }


  if (VAR_23->root.type == VAR_9)
    VAR_23 = (struct elf_link_hash_entry *) VAR_23->root.u.i.link;





  if (VAR_23->root.type == VAR_8)
    {
      struct elf_link_hash_entry *VAR_32;

      VAR_32 = (struct elf_link_hash_entry *) VAR_23->root.u.i.link;
      (*VAR_25->elf_backend_copy_indirect_symbol) (VAR_11, VAR_32, VAR_23);



      if (! *VAR_17)
 {
   if (! VAR_27)
     {
       if (VAR_11->shared
    || VAR_23->ref_dynamic)
  *VAR_17 = VAR_4;
     }
   else
     {
       if (VAR_23->ref_regular)
  *VAR_17 = VAR_4;
     }
 }
    }




nondefault:
  VAR_29 = FUNC_12 (VAR_13);
  VAR_22 = FUNC_6 (&VAR_11->hash->table, VAR_29);
  if (VAR_22 == ((void*)0))
    return VAR_3;
  FUNC_10 (VAR_22, VAR_13, VAR_30);
  FUNC_10 (VAR_22 + VAR_30, VAR_28 + 1, VAR_29 - VAR_30);


  VAR_19 = VAR_3;
  VAR_20 = VAR_3;
  VAR_31 = *VAR_15;
  if (!FUNC_2 (VAR_10, VAR_11, VAR_22, VAR_14, &VAR_31, VAR_16,
         ((void*)0), &VAR_23, &VAR_21, &VAR_18,
         &VAR_19, &VAR_20))
    return VAR_3;

  if (VAR_21)
    return VAR_4;

  if (VAR_18)
    {



      if (VAR_23->root.type != VAR_6
   && VAR_23->root.type != VAR_7)
 FUNC_3)
   (FUNC_1("%B: unexpected redefinition of indirect versioned symbol `%s'"),
    VAR_10, VAR_22);
    }
  else
    {
      VAR_24 = &VAR_23->root;
      if (! (FUNC_4
      (VAR_11, VAR_10, VAR_22, VAR_0,
       VAR_5, 0, VAR_13, VAR_3, VAR_26, &VAR_24)))
 return VAR_3;
      VAR_23 = (struct elf_link_hash_entry *) VAR_24;





      if (VAR_23->root.type == VAR_8)
 {
   (*VAR_25->elf_backend_copy_indirect_symbol) (VAR_11, VAR_12, VAR_23);



   if (! *VAR_17)
     {
       if (! VAR_27)
  {
    if (VAR_11->shared
        || VAR_23->ref_dynamic)
      *VAR_17 = VAR_4;
  }
       else
  {
    if (VAR_23->ref_regular)
      *VAR_17 = VAR_4;
  }
     }
 }
    }

  return VAR_4;
}
