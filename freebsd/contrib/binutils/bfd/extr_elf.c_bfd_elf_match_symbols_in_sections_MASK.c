
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct elf_symbuf_symbol {scalar_t__ st_info; scalar_t__ st_other; int st_name; } ;
struct elf_symbuf_head {int count; unsigned int st_shndx; struct elf_symbuf_symbol* ssym; } ;
struct TYPE_14__ {struct elf_symbol* isym; struct elf_symbuf_symbol* ssym; } ;
struct elf_symbol {int name; unsigned int st_shndx; scalar_t__ st_info; scalar_t__ st_other; TYPE_2__ u; int st_name; } ;
struct elf_backend_data {TYPE_1__* s; } ;
struct bfd_link_info {int reduce_memory_overheads; } ;
typedef int bfd_size_type ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_15__ {int name; int * owner; } ;
typedef TYPE_3__ asection ;
struct TYPE_16__ {int sh_size; int sh_link; } ;
struct TYPE_17__ {struct elf_symbuf_head* symbuf; TYPE_4__ symtab_hdr; } ;
struct TYPE_13__ {int sizeof_sym; } ;
typedef struct elf_symbol Elf_Internal_Sym ;
typedef TYPE_4__ Elf_Internal_Shdr ;


 scalar_t__ FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,TYPE_3__*) ;
 struct elf_symbol* FUNC_2 (int *,TYPE_4__*,int,int ,int *,int *,int *) ;
 void* FUNC_3 (int *,int ,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 struct elf_symbol* FUNC_5 (int) ;
 scalar_t__ VAR_3 ;
 struct elf_symbuf_head* FUNC_6 (int,struct elf_symbol*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 scalar_t__ FUNC_9 (TYPE_3__*) ;
 int VAR_4 ;
 TYPE_5__* FUNC_10 (int *) ;
 int FUNC_11 (struct elf_symbol*) ;
 struct elf_backend_data* FUNC_12 (int *) ;
 int FUNC_13 (struct elf_symbol*,int,int,int ) ;
 scalar_t__ FUNC_14 (int,int) ;

bfd_boolean
FUNC_15 (asection *VAR_5, asection *VAR_6,
       struct bfd_link_info *VAR_7)
{
  bfd *VAR_8, *VAR_9;
  const struct elf_backend_data *VAR_10, *VAR_11;
  Elf_Internal_Shdr *VAR_12, *VAR_13;
  bfd_size_type VAR_14, VAR_15;
  Elf_Internal_Sym *VAR_16, *VAR_17;
  struct elf_symbuf_head *VAR_18, *VAR_19;
  Elf_Internal_Sym *VAR_20, *VAR_21;
  struct elf_symbol *VAR_22 = ((void*)0), *VAR_23 = ((void*)0);
  bfd_size_type VAR_24, VAR_25, VAR_26;
  int VAR_27, VAR_28;
  bfd_boolean VAR_29;

  VAR_8 = VAR_5->owner;
  VAR_9 = VAR_6->owner;



  if (FUNC_0 (VAR_5->name, ".gnu.linkonce")
      && FUNC_0 (VAR_6->name, ".gnu.linkonce"))
    return FUNC_14 (VAR_5->name + sizeof ".gnu.linkonce",
     VAR_6->name + sizeof ".gnu.linkonce") == 0;


  if (FUNC_4 (VAR_8) != VAR_3
      || FUNC_4 (VAR_9) != VAR_3)
    return VAR_0;

  if (FUNC_9 (VAR_5) != FUNC_9 (VAR_6))
    return VAR_0;

  if ((FUNC_8 (VAR_5) & VAR_1) != 0
      && (FUNC_8 (VAR_6) & VAR_1) != 0)
    {


      if (FUNC_14 (FUNC_7 (VAR_5), FUNC_7 (VAR_6)) != 0)
 return VAR_0;
    }

  VAR_27 = FUNC_1 (VAR_8, VAR_5);
  VAR_28 = FUNC_1 (VAR_9, VAR_6);
  if (VAR_27 == -1 || VAR_28 == -1)
    return VAR_0;

  VAR_10 = FUNC_12 (VAR_8);
  VAR_11 = FUNC_12 (VAR_9);
  VAR_12 = &FUNC_10 (VAR_8)->symtab_hdr;
  VAR_14 = VAR_12->sh_size / VAR_10->s->sizeof_sym;
  VAR_13 = &FUNC_10 (VAR_9)->symtab_hdr;
  VAR_15 = VAR_13->sh_size / VAR_11->s->sizeof_sym;

  if (VAR_14 == 0 || VAR_15 == 0)
    return VAR_0;

  VAR_29 = VAR_0;
  VAR_16 = ((void*)0);
  VAR_17 = ((void*)0);
  VAR_18 = FUNC_10 (VAR_8)->symbuf;
  VAR_19 = FUNC_10 (VAR_9)->symbuf;

  if (VAR_18 == ((void*)0))
    {
      VAR_16 = FUNC_2 (VAR_8, VAR_12, VAR_14, 0,
           ((void*)0), ((void*)0), ((void*)0));
      if (VAR_16 == ((void*)0))
 goto done;

      if (!VAR_7->reduce_memory_overheads)
 FUNC_10 (VAR_8)->symbuf = VAR_18
   = FUNC_6 (VAR_14, VAR_16);
    }

  if (VAR_18 == ((void*)0) || VAR_19 == ((void*)0))
    {
      VAR_17 = FUNC_2 (VAR_9, VAR_13, VAR_15, 0,
           ((void*)0), ((void*)0), ((void*)0));
      if (VAR_17 == ((void*)0))
 goto done;

      if (VAR_18 != ((void*)0) && !VAR_7->reduce_memory_overheads)
 FUNC_10 (VAR_9)->symbuf = VAR_19
   = FUNC_6 (VAR_15, VAR_17);
    }

  if (VAR_18 != ((void*)0) && VAR_19 != ((void*)0))
    {

      bfd_size_type VAR_30, VAR_31, VAR_32;
      struct elf_symbol *VAR_33;
      struct elf_symbuf_symbol *VAR_34, *VAR_35;

      VAR_30 = 0;
      VAR_31 = VAR_18->count;
      VAR_18++;
      VAR_24 = 0;
      while (VAR_30 < VAR_31)
 {
   VAR_32 = (VAR_30 + VAR_31) / 2;
   if ((unsigned int) VAR_27 < VAR_18[VAR_32].st_shndx)
     VAR_31 = VAR_32;
   else if ((unsigned int) VAR_27 > VAR_18[VAR_32].st_shndx)
     VAR_30 = VAR_32 + 1;
   else
     {
       VAR_24 = VAR_18[VAR_32].count;
       VAR_18 += VAR_32;
       break;
     }
 }

      VAR_30 = 0;
      VAR_31 = VAR_19->count;
      VAR_19++;
      VAR_25 = 0;
      while (VAR_30 < VAR_31)
 {
   VAR_32 = (VAR_30 + VAR_31) / 2;
   if ((unsigned int) VAR_28 < VAR_19[VAR_32].st_shndx)
     VAR_31 = VAR_32;
   else if ((unsigned int) VAR_28 > VAR_19[VAR_32].st_shndx)
     VAR_30 = VAR_32 + 1;
   else
     {
       VAR_25 = VAR_19[VAR_32].count;
       VAR_19 += VAR_32;
       break;
     }
 }

      if (VAR_24 == 0 || VAR_25 == 0 || VAR_24 != VAR_25)
 goto done;

      VAR_22 = FUNC_5 (VAR_24 * sizeof (struct elf_symbol));
      VAR_23 = FUNC_5 (VAR_25 * sizeof (struct elf_symbol));
      if (VAR_22 == ((void*)0) || VAR_23 == ((void*)0))
 goto done;

      VAR_33 = VAR_22;
      for (VAR_34 = VAR_18->ssym, VAR_35 = VAR_34 + VAR_24;
    VAR_34 < VAR_35; VAR_34++, VAR_33++)
 {
   VAR_33->u.ssym = VAR_34;
   VAR_33->name = FUNC_3 (VAR_8,
       VAR_12->sh_link,
       VAR_34->st_name);
 }

      VAR_33 = VAR_23;
      for (VAR_34 = VAR_19->ssym, VAR_35 = VAR_34 + VAR_25;
    VAR_34 < VAR_35; VAR_34++, VAR_33++)
 {
   VAR_33->u.ssym = VAR_34;
   VAR_33->name = FUNC_3 (VAR_9,
       VAR_13->sh_link,
       VAR_34->st_name);
 }


      FUNC_13 (VAR_22, VAR_24, sizeof (struct elf_symbol),
      VAR_4);
      FUNC_13 (VAR_23, VAR_24, sizeof (struct elf_symbol),
      VAR_4);

      for (VAR_26 = 0; VAR_26 < VAR_24; VAR_26++)

 if (VAR_22 [VAR_26].u.ssym->st_info != VAR_23 [VAR_26].u.ssym->st_info
     || VAR_22 [VAR_26].u.ssym->st_other != VAR_23 [VAR_26].u.ssym->st_other
     || FUNC_14 (VAR_22 [VAR_26].name, VAR_23 [VAR_26].name) != 0)
   goto done;

      VAR_29 = VAR_2;
      goto done;
    }

  VAR_22 = FUNC_5 (VAR_14 * sizeof (struct elf_symbol));
  VAR_23 = FUNC_5 (VAR_15 * sizeof (struct elf_symbol));
  if (VAR_22 == ((void*)0) || VAR_23 == ((void*)0))
    goto done;


  VAR_24 = 0;
  for (VAR_20 = VAR_16, VAR_21 = VAR_20 + VAR_14; VAR_20 < VAR_21; VAR_20++)
    if (VAR_20->st_shndx == (unsigned int) VAR_27)
      VAR_22[VAR_24++].u.isym = VAR_20;

  VAR_25 = 0;
  for (VAR_20 = VAR_17, VAR_21 = VAR_20 + VAR_15; VAR_20 < VAR_21; VAR_20++)
    if (VAR_20->st_shndx == (unsigned int) VAR_28)
      VAR_23[VAR_25++].u.isym = VAR_20;

  if (VAR_24 == 0 || VAR_25 == 0 || VAR_24 != VAR_25)
    goto done;

  for (VAR_26 = 0; VAR_26 < VAR_24; VAR_26++)
    VAR_22[VAR_26].name
      = FUNC_3 (VAR_8, VAR_12->sh_link,
      VAR_22[VAR_26].u.isym->st_name);

  for (VAR_26 = 0; VAR_26 < VAR_25; VAR_26++)
    VAR_23[VAR_26].name
      = FUNC_3 (VAR_9, VAR_13->sh_link,
      VAR_23[VAR_26].u.isym->st_name);


  FUNC_13 (VAR_22, VAR_24, sizeof (struct elf_symbol),
  VAR_4);
  FUNC_13 (VAR_23, VAR_24, sizeof (struct elf_symbol),
  VAR_4);

  for (VAR_26 = 0; VAR_26 < VAR_24; VAR_26++)

    if (VAR_22 [VAR_26].u.isym->st_info != VAR_23 [VAR_26].u.isym->st_info
 || VAR_22 [VAR_26].u.isym->st_other != VAR_23 [VAR_26].u.isym->st_other
 || FUNC_14 (VAR_22 [VAR_26].name, VAR_23 [VAR_26].name) != 0)
      goto done;

  VAR_29 = VAR_2;

done:
  if (VAR_22)
    FUNC_11 (VAR_22);
  if (VAR_23)
    FUNC_11 (VAR_23);
  if (VAR_16)
    FUNC_11 (VAR_16);
  if (VAR_17)
    FUNC_11 (VAR_17);

  return VAR_29;
}
