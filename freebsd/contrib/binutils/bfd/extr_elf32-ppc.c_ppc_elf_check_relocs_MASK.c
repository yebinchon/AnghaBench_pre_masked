
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_52__ TYPE_9__ ;
typedef struct TYPE_51__ TYPE_8__ ;
typedef struct TYPE_50__ TYPE_7__ ;
typedef struct TYPE_49__ TYPE_6__ ;
typedef struct TYPE_48__ TYPE_5__ ;
typedef struct TYPE_47__ TYPE_4__ ;
typedef struct TYPE_46__ TYPE_3__ ;
typedef struct TYPE_45__ TYPE_2__ ;
typedef struct TYPE_44__ TYPE_23__ ;
typedef struct TYPE_43__ TYPE_22__ ;
typedef struct TYPE_42__ TYPE_20__ ;
typedef struct TYPE_41__ TYPE_1__ ;
typedef struct TYPE_40__ TYPE_19__ ;
typedef struct TYPE_39__ TYPE_16__ ;
typedef struct TYPE_38__ TYPE_15__ ;
typedef struct TYPE_37__ TYPE_14__ ;
typedef struct TYPE_36__ TYPE_13__ ;


struct TYPE_43__ {int * dynobj; struct elf_link_hash_entry* hgot; } ;
struct ppc_elf_link_hash_table {TYPE_22__ elf; int sym_sec; int * old_bfd; void* plt_type; TYPE_16__* sdata; int * got; } ;
struct ppc_elf_dyn_relocs {int count; int pc_count; TYPE_7__* sec; struct ppc_elf_dyn_relocs* next; } ;
struct TYPE_47__ {char* string; } ;
struct TYPE_41__ {scalar_t__ link; } ;
struct TYPE_45__ {TYPE_1__ i; } ;
struct TYPE_48__ {scalar_t__ type; TYPE_4__ root; TYPE_2__ u; } ;
struct TYPE_46__ {int refcount; } ;
struct elf_link_hash_entry {int non_got_ref; int needs_plt; TYPE_5__ root; int def_regular; TYPE_3__ got; } ;
struct bfd_link_info {int shared; int symbolic; int pie; int flags; int executable; scalar_t__ relocatable; } ;
typedef int flagword ;
typedef enum elf_ppc_reloc_type { ____Placeholder_elf_ppc_reloc_type } elf_ppc_reloc_type ;
typedef int bfd_vma ;
typedef void* bfd_boolean ;
typedef int bfd ;
struct TYPE_50__ {int flags; int reloc_count; int has_tls_get_addr_call; int has_tls_reloc; } ;
typedef TYPE_7__ asection ;
struct TYPE_52__ {int r_addend; scalar_t__ r_offset; int r_info; } ;
struct TYPE_51__ {unsigned long sh_info; } ;
struct TYPE_49__ {int sh_name; } ;
struct TYPE_44__ {int e_shstrndx; } ;
struct TYPE_42__ {int local_dynrel; TYPE_7__* sreloc; TYPE_6__ rel_hdr; } ;
struct TYPE_40__ {TYPE_8__ symtab_hdr; } ;
struct TYPE_39__ {int * sym; int * section; } ;
struct TYPE_38__ {int tls_mask; struct ppc_elf_dyn_relocs* dyn_relocs; void* has_sda_refs; } ;
struct TYPE_37__ {int name; } ;
struct TYPE_36__ {int makes_plt_call; int has_rel16; } ;
typedef TYPE_8__ Elf_Internal_Shdr ;
typedef TYPE_9__ Elf_Internal_Rela ;


 int FUNC_0 (int) ;
 int FUNC_1 (char const*,char*) ;
 int VAR_0 ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int *,TYPE_7__*,long,int ) ;
 int FUNC_6 (int *,int) ;
 struct ppc_elf_dyn_relocs* FUNC_7 (int *,int) ;
 int FUNC_8 (int *,TYPE_7__*,struct elf_link_hash_entry*,int ) ;
 int FUNC_9 (int *,TYPE_7__*,struct elf_link_hash_entry*,scalar_t__) ;
 char* FUNC_10 (int *,int ,int ) ;
 int VAR_18 ;
 TYPE_7__* FUNC_11 (int *,char const*) ;
 char* FUNC_12 (int *,TYPE_7__*) ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 TYPE_7__* FUNC_13 (int *,char const*,int) ;
 TYPE_7__* FUNC_14 (int *,int *,TYPE_7__*,unsigned long) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int *,TYPE_7__*,int) ;
 int FUNC_17 (struct ppc_elf_link_hash_table*,TYPE_16__*) ;
 int FUNC_18 (int *,TYPE_16__*,struct elf_link_hash_entry*,TYPE_9__ const*) ;
 TYPE_23__* FUNC_19 (int *) ;
 struct elf_link_hash_entry* FUNC_20 (TYPE_22__*,char*,void*,void*,void*) ;
 TYPE_20__* FUNC_21 (TYPE_7__*) ;
 struct elf_link_hash_entry** FUNC_22 (int *) ;
 TYPE_19__* FUNC_23 (int *) ;
 int FUNC_24 (int ,char*,...) ;
 int FUNC_25 (struct bfd_link_info*,int) ;
 int FUNC_26 (int *,struct bfd_link_info*) ;
 int FUNC_27 (int *,struct bfd_link_info*,int,TYPE_16__*) ;
 TYPE_15__* FUNC_28 (struct elf_link_hash_entry*) ;
 struct ppc_elf_link_hash_table* FUNC_29 (struct bfd_link_info*) ;
 int FUNC_30 () ;
 TYPE_14__** VAR_22 ;
 TYPE_13__* FUNC_31 (int *) ;
 int VAR_23 ;
 scalar_t__ FUNC_32 (char*,char const*) ;
 int FUNC_33 (int ,int *,TYPE_7__*,long,int ) ;
 int FUNC_34 (int *,TYPE_8__*,unsigned long,int) ;
 int FUNC_35 (int *,struct elf_link_hash_entry*,TYPE_7__*,int ) ;

__attribute__((used)) static bfd_boolean
FUNC_36 (bfd *VAR_24,
        struct bfd_link_info *VAR_25,
        asection *VAR_26,
        const Elf_Internal_Rela *VAR_27)
{
  struct ppc_elf_link_hash_table *VAR_28;
  Elf_Internal_Shdr *VAR_29;
  struct elf_link_hash_entry **VAR_30;
  const Elf_Internal_Rela *VAR_31;
  const Elf_Internal_Rela *VAR_32;
  asection *VAR_33, *VAR_34;
  struct elf_link_hash_entry *VAR_35;

  if (VAR_25->relocatable)
    return VAR_17;







  if ((VAR_26->flags & VAR_5) == 0)
    return VAR_17;







  if (!VAR_22[210])
    FUNC_30 ();

  VAR_28 = FUNC_29 (VAR_25);
  VAR_35 = FUNC_20 (&VAR_28->elf, "__tls_get_addr",
         VAR_2, VAR_2, VAR_17);
  VAR_29 = &FUNC_23 (VAR_24)->symtab_hdr;
  VAR_30 = FUNC_22 (VAR_24);
  VAR_33 = FUNC_11 (VAR_24, ".got2");
  VAR_34 = ((void*)0);

  VAR_32 = VAR_27 + VAR_26->reloc_count;
  for (VAR_31 = VAR_27; VAR_31 < VAR_32; VAR_31++)
    {
      unsigned long VAR_36;
      enum elf_ppc_reloc_type VAR_37;
      struct elf_link_hash_entry *VAR_38;
      int VAR_39;

      VAR_36 = FUNC_2 (VAR_31->r_info);
      if (VAR_36 < VAR_29->sh_info)
 VAR_38 = ((void*)0);
      else
 {
   VAR_38 = VAR_30[VAR_36 - VAR_29->sh_info];
   while (VAR_38->root.type == VAR_20
   || VAR_38->root.type == VAR_21)
     VAR_38 = (struct elf_link_hash_entry *) VAR_38->root.u.i.link;
 }




      if (VAR_38 != ((void*)0)
   && VAR_28->got == ((void*)0)
   && FUNC_32 (VAR_38->root.root.string, "_GLOBAL_OFFSET_TABLE_") == 0)
 {
   if (VAR_28->elf.dynobj == ((void*)0))
     VAR_28->elf.dynobj = VAR_24;
   if (!FUNC_26 (VAR_28->elf.dynobj, VAR_25))
     return VAR_2;
   FUNC_0 (VAR_38 == VAR_28->elf.hgot);
 }

      VAR_39 = 0;
      VAR_37 = FUNC_3 (VAR_31->r_info);
      if (VAR_38 != ((void*)0) && VAR_38 == VAR_35)
 switch (VAR_37)
   {
   default:
     break;

   case 156:
   case 162:
   case 147:
   case 154:
   case 152:
   case 153:
   case 212:
   case 219:
   case 217:
   case 218:
     if (VAR_31 != VAR_27
  && (FUNC_3 (VAR_31[-1].r_info) == 138
      || FUNC_3 (VAR_31[-1].r_info) == 137))


       ;
     else

       VAR_26->has_tls_get_addr_call = 1;
     break;
   }

      switch (VAR_37)
 {
 case 138:
 case 137:


   break;

 case 171:
 case 168:
 case 169:
 case 170:
   VAR_39 = VAR_15 | VAR_14;
   goto dogottls;

 case 175:
 case 172:
 case 173:
 case 174:
   VAR_39 = VAR_15 | VAR_13;
   goto dogottls;

 case 167:
 case 164:
 case 165:
 case 166:
   if (!VAR_25->executable)
     VAR_25->flags |= VAR_0;
   VAR_39 = VAR_15 | VAR_16;
   goto dogottls;

 case 179:
 case 176:
 case 177:
 case 178:
   VAR_39 = VAR_15 | VAR_12;
 dogottls:
   VAR_26->has_tls_reloc = 1;



 case 183:
 case 180:
 case 181:
 case 182:

   if (VAR_28->got == ((void*)0))
     {
       if (VAR_28->elf.dynobj == ((void*)0))
  VAR_28->elf.dynobj = VAR_24;
       if (!FUNC_26 (VAR_28->elf.dynobj, VAR_25))
  return VAR_2;
     }
   if (VAR_38 != ((void*)0))
     {
       VAR_38->got.refcount += 1;
       FUNC_28 (VAR_38)->tls_mask |= VAR_39;
     }
   else

     if (!FUNC_34 (VAR_24, VAR_29, VAR_36, VAR_39))
       return VAR_2;
   break;


 case 187:
   if (VAR_25->shared)
     {
       FUNC_6 (VAR_24, VAR_37);
       return VAR_2;
     }
   if (VAR_28->sdata[0].section == ((void*)0)
       && !FUNC_27 (VAR_24, VAR_25, 0,
       &VAR_28->sdata[0]))
     return VAR_2;
   if (!FUNC_18 (VAR_24, &VAR_28->sdata[0],
        VAR_38, VAR_31))
     return VAR_2;
   if (VAR_38 != ((void*)0))
     {
       FUNC_28 (VAR_38)->has_sda_refs = VAR_17;
       VAR_38->non_got_ref = VAR_17;
     }
   break;


 case 189:
   if (VAR_25->shared)
     {
       FUNC_6 (VAR_24, VAR_37);
       return VAR_2;
     }
   if (VAR_28->sdata[1].section == ((void*)0)
       && !FUNC_27 (VAR_24, VAR_25, VAR_11,
       &VAR_28->sdata[1]))
     return VAR_2;
   if (!FUNC_18 (VAR_24, &VAR_28->sdata[1],
        VAR_38, VAR_31))
     return VAR_2;
   if (VAR_38 != ((void*)0))
     {
       FUNC_28 (VAR_38)->has_sda_refs = VAR_17;
       VAR_38->non_got_ref = VAR_17;
     }
   break;

 case 144:
   if (VAR_25->shared)
     {
       FUNC_6 (VAR_24, VAR_37);
       return VAR_2;
     }
   if (VAR_28->sdata[0].sym == ((void*)0)
       && !FUNC_17 (VAR_28, &VAR_28->sdata[0]))
     return VAR_2;
   if (VAR_38 != ((void*)0))
     {
       FUNC_28 (VAR_38)->has_sda_refs = VAR_17;
       VAR_38->non_got_ref = VAR_17;
     }
   break;

 case 188:
   if (VAR_25->shared)
     {
       FUNC_6 (VAR_24, VAR_37);
       return VAR_2;
     }
   if (VAR_28->sdata[1].sym == ((void*)0)
       && !FUNC_17 (VAR_28, &VAR_28->sdata[1]))
     return VAR_2;
   if (VAR_38 != ((void*)0))
     {
       FUNC_28 (VAR_38)->has_sda_refs = VAR_17;
       VAR_38->non_got_ref = VAR_17;
     }
   break;

 case 190:
 case 195:
   if (VAR_25->shared)
     {
       FUNC_6 (VAR_24, VAR_37);
       return VAR_2;
     }
   if (VAR_28->sdata[0].sym == ((void*)0)
       && !FUNC_17 (VAR_28, &VAR_28->sdata[0]))
     return VAR_2;
   if (VAR_28->sdata[1].sym == ((void*)0)
       && !FUNC_17 (VAR_28, &VAR_28->sdata[1]))
     return VAR_2;
   if (VAR_38 != ((void*)0))
     {
       FUNC_28 (VAR_38)->has_sda_refs = VAR_17;
       VAR_38->non_got_ref = VAR_17;
     }
   break;

 case 196:
 case 200:
 case 197:
 case 198:
 case 199:
   if (VAR_25->shared)
     {
       FUNC_6 (VAR_24, VAR_37);
       return VAR_2;
     }
   if (VAR_38 != ((void*)0))
     VAR_38->non_got_ref = VAR_17;
   break;

 case 157:
 case 156:
 case 155:
 case 158:
 case 159:
 case 160:
   if (VAR_38 == ((void*)0))
     {


       FUNC_5) (FUNC_4("%B(%A+0x%lx): %s reloc against "
           "local symbol"),
         VAR_24,
         VAR_26,
         (long) VAR_31->r_offset,
         VAR_22[VAR_37]->name);
       FUNC_15 (VAR_18);
       return VAR_2;
     }
   else
     {
       bfd_vma VAR_40 = 0;

       if (VAR_37 == 156)
  {
    FUNC_31 (VAR_24)->makes_plt_call = 1;
    VAR_40 = VAR_31->r_addend;
  }
       VAR_38->needs_plt = 1;
       if (!FUNC_35 (VAR_24, VAR_38, VAR_33, VAR_40))
  return VAR_2;
     }
   break;




 case 143:
 case 140:
 case 141:
 case 142:
 case 207:
 case 204:
 case 205:
 case 206:
 case 136:
   break;

 case 151:
 case 148:
 case 149:
 case 150:
   FUNC_31 (VAR_24)->has_rel16 = 1;
   break;


 case 139:
 case 201:
 case 161:
 case 128:
   break;


 case 209:
 case 186:
 case 163:
 case 145:
   break;


 case 211:
 case 194:
 case 191:
 case 192:
 case 193:
 case 202:
   break;


 case 162:
   if (VAR_38 != ((void*)0) && VAR_38 == VAR_28->elf.hgot && VAR_28->plt_type == VAR_4)
     {
       VAR_28->plt_type = VAR_3;
       VAR_28->old_bfd = VAR_24;
     }
   break;



 case 184:
   if (!FUNC_9 (VAR_24, VAR_26, VAR_38, VAR_31->r_offset))
     return VAR_2;
   break;



 case 185:
   if (!FUNC_8 (VAR_24, VAR_26, VAR_38, VAR_31->r_addend))
     return VAR_2;
   break;


 case 131:
 case 135:
 case 132:
 case 133:
 case 134:
   if (!VAR_25->executable)
     VAR_25->flags |= VAR_0;
   goto dodyn;


 case 208:
 case 203:
   goto dodyn;

 case 146:
   if (VAR_38 == ((void*)0)
       && VAR_33 != ((void*)0)
       && (VAR_26->flags & VAR_6) != 0
       && (VAR_25->shared || VAR_25->pie)
       && VAR_28->plt_type == VAR_4)
     {






       asection *VAR_41;

       VAR_41 = FUNC_14 (VAR_24, &VAR_28->sym_sec, VAR_26,
          VAR_36);
       if (VAR_41 == VAR_33)
  {
    VAR_28->plt_type = VAR_3;
    VAR_28->old_bfd = VAR_24;
  }
     }
   if (VAR_38 == ((void*)0) || VAR_38 == VAR_28->elf.hgot)
     break;
   goto dodyn1;

 case 147:
 case 154:
 case 152:
 case 153:
   if (VAR_38 == ((void*)0))
     break;
   if (VAR_38 == VAR_28->elf.hgot)
     {
       if (VAR_28->plt_type == VAR_4)
  {
    VAR_28->plt_type = VAR_3;
    VAR_28->old_bfd = VAR_24;
  }
       break;
     }


 case 210:
 case 212:
 case 216:
 case 213:
 case 214:
 case 215:
 case 219:
 case 217:
 case 218:
 case 129:
 case 130:
 dodyn1:
   if (VAR_38 != ((void*)0) && !VAR_25->shared)
     {


       if (!FUNC_35 (VAR_24, VAR_38, ((void*)0), 0))
  return VAR_2;


       VAR_38->non_got_ref = 1;
     }

 dodyn:
   if ((VAR_25->shared
        && (FUNC_25 (VAR_25, VAR_37)
     || (VAR_38 != ((void*)0)
         && (! VAR_25->symbolic
      || VAR_38->root.type == VAR_19
      || !VAR_38->def_regular))))
       || (VAR_1
    && !VAR_25->shared
    && VAR_38 != ((void*)0)
    && (VAR_38->root.type == VAR_19
        || !VAR_38->def_regular)))
     {
       struct ppc_elf_dyn_relocs *VAR_42;
       struct ppc_elf_dyn_relocs **VAR_43;
       if (VAR_34 == ((void*)0))
  {
    const char *VAR_44;

    VAR_44 = (FUNC_10
     (VAR_24,
      FUNC_19 (VAR_24)->e_shstrndx,
      FUNC_21 (VAR_26)->rel_hdr.sh_name));
    if (VAR_44 == ((void*)0))
      return VAR_2;

    FUNC_0 (FUNC_1 (VAR_44, ".rela")
         && FUNC_32 (FUNC_12 (VAR_24, VAR_26),
      VAR_44 + 5) == 0);

    if (VAR_28->elf.dynobj == ((void*)0))
      VAR_28->elf.dynobj = VAR_24;
    VAR_34 = FUNC_11 (VAR_28->elf.dynobj, VAR_44);
    if (VAR_34 == ((void*)0))
      {
        flagword VAR_45;

        VAR_45 = (VAR_7 | VAR_11
          | VAR_8 | VAR_9
          | VAR_5 | VAR_10);
        VAR_34 = FUNC_13 (VAR_28->elf.dynobj,
           VAR_44,
           VAR_45);
        if (VAR_34 == ((void*)0)
     || ! FUNC_16 (VAR_28->elf.dynobj,
         VAR_34, 2))
   return VAR_2;
      }
    FUNC_21 (VAR_26)->sreloc = VAR_34;
  }



       if (VAR_38 != ((void*)0))
  {
    VAR_43 = &FUNC_28 (VAR_38)->dyn_relocs;
  }
       else
  {




    asection *VAR_46;
    void *VAR_47;

    VAR_46 = FUNC_14 (VAR_24, &VAR_28->sym_sec,
       VAR_26, VAR_36);
    if (VAR_46 == ((void*)0))
      return VAR_2;

    VAR_47 = &FUNC_21 (VAR_46)->local_dynrel;
    VAR_43 = (struct ppc_elf_dyn_relocs **) VAR_47;
  }

       VAR_42 = *VAR_43;
       if (VAR_42 == ((void*)0) || VAR_42->sec != VAR_26)
  {
    VAR_42 = FUNC_7 (VAR_28->elf.dynobj, sizeof *VAR_42);
    if (VAR_42 == ((void*)0))
      return VAR_2;
    VAR_42->next = *VAR_43;
    *VAR_43 = VAR_42;
    VAR_42->sec = VAR_26;
    VAR_42->count = 0;
    VAR_42->pc_count = 0;
  }

       VAR_42->count += 1;
       if (!FUNC_25 (VAR_25, VAR_37))
  VAR_42->pc_count += 1;
     }

   break;
 }
    }

  return VAR_17;
}
