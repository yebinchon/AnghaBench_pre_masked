
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_50__ TYPE_9__ ;
typedef struct TYPE_49__ TYPE_8__ ;
typedef struct TYPE_48__ TYPE_7__ ;
typedef struct TYPE_47__ TYPE_6__ ;
typedef struct TYPE_46__ TYPE_5__ ;
typedef struct TYPE_45__ TYPE_4__ ;
typedef struct TYPE_44__ TYPE_3__ ;
typedef struct TYPE_43__ TYPE_2__ ;
typedef struct TYPE_42__ TYPE_1__ ;
typedef struct TYPE_41__ TYPE_15__ ;
typedef struct TYPE_40__ TYPE_12__ ;
typedef struct TYPE_39__ TYPE_10__ ;


struct xcoff_loader_info {int ldsym_count; scalar_t__ string_size; int * strings; void* failed; TYPE_9__* output_bfd; scalar_t__ string_alc; void* export_defineds; struct bfd_link_info* info; } ;
struct TYPE_43__ {TYPE_10__* section; scalar_t__ value; } ;
struct TYPE_44__ {TYPE_2__ def; } ;
struct TYPE_42__ {int string; } ;
struct TYPE_45__ {scalar_t__ type; TYPE_3__ u; TYPE_1__ root; } ;
struct xcoff_link_hash_entry {int flags; int ldindx; TYPE_4__ root; struct internal_ldsym* ldsym; } ;
struct xcoff_import_file {char const* path; char const* file; char const* member; struct xcoff_import_file* next; } ;
struct TYPE_47__ {scalar_t__ _n_zeroes; int _n_offset; } ;
struct TYPE_48__ {TYPE_6__ _n_n; } ;
struct internal_syment {int n_numaux; TYPE_7__ _n; } ;
struct internal_ldsym {int l_scnum; int l_smclas; scalar_t__ l_parm; scalar_t__ l_ifile; int l_smtype; scalar_t__ l_value; } ;
struct internal_ldhdr {int l_nsyms; int l_nreloc; size_t l_istlen; size_t l_nimpid; scalar_t__ l_impoff; scalar_t__ l_stlen; void* l_rldoff; void* l_symoff; scalar_t__ l_stoff; int l_version; } ;
struct bfd_strtab_hash {int dummy; } ;
struct bfd_link_info {scalar_t__ strip; scalar_t__ discard; int keep_memory; TYPE_5__* hash; TYPE_9__* input_bfds; scalar_t__ relocatable; scalar_t__ fini_function; scalar_t__ init_function; } ;
typedef scalar_t__ bfd_size_type ;
typedef int bfd_byte ;
typedef void* bfd_boolean ;
struct TYPE_50__ {scalar_t__ xvec; struct TYPE_50__* link_next; TYPE_10__* sections; } ;
typedef TYPE_9__ bfd ;
struct TYPE_39__ {int flags; scalar_t__ size; int * contents; struct TYPE_39__* next; } ;
typedef TYPE_10__ asection ;
struct TYPE_49__ {int size; } ;
struct TYPE_46__ {scalar_t__ creator; } ;
struct TYPE_41__ {unsigned long maxstack; unsigned long maxdata; int modtype; unsigned long* debug_indices; TYPE_10__** csects; } ;
struct TYPE_40__ {unsigned long file_align; int ldrel_count; TYPE_8__* debug_section; struct bfd_strtab_hash* debug_strtab; TYPE_10__* descriptor_section; TYPE_10__* toc_section; TYPE_10__* linkage_section; struct xcoff_import_file* imports; TYPE_10__* loader_section; struct internal_ldhdr ldhdr; TYPE_10__** special_sections; void* gc; void* textro; } ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_9__*) ;
 int FUNC_3 (TYPE_9__*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct bfd_strtab_hash*,char*,void*,void*) ;
 int FUNC_6 (struct bfd_strtab_hash*) ;
 TYPE_10__* VAR_9 ;
 int FUNC_7 (TYPE_9__*,void*,void*) ;
 scalar_t__ FUNC_8 (TYPE_9__*) ;
 scalar_t__ FUNC_9 (TYPE_9__*,struct internal_syment*) ;
 scalar_t__ FUNC_10 (TYPE_9__*) ;
 TYPE_10__* FUNC_11 (TYPE_9__*,char*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 struct internal_ldsym* FUNC_12 (scalar_t__) ;
 int FUNC_13 (TYPE_9__*,TYPE_10__*,int **) ;
 scalar_t__ VAR_12 ;
 int FUNC_14 (TYPE_9__*) ;
 void* FUNC_15 (TYPE_9__*) ;
 int FUNC_16 (TYPE_9__*) ;
 int FUNC_17 (TYPE_9__*) ;
 int FUNC_18 (TYPE_9__*,struct xcoff_loader_info*,struct internal_ldsym*,int ) ;
 int FUNC_19 (TYPE_9__*,struct internal_ldhdr*,int *) ;
 void* FUNC_20 (TYPE_9__*,scalar_t__) ;
 scalar_t__ VAR_13 ;
 int FUNC_21 (int *) ;
 int FUNC_22 (char*,int *,scalar_t__) ;
 scalar_t__ FUNC_23 (TYPE_9__*) ;
 scalar_t__ FUNC_24 (TYPE_9__*) ;
 int FUNC_25 (char*,char const*) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 size_t FUNC_26 (char const*) ;
 int FUNC_27 (int ) ;
 int VAR_16 ;
 TYPE_15__* FUNC_28 (TYPE_9__*) ;
 TYPE_12__* FUNC_29 (struct bfd_link_info*) ;
 struct xcoff_link_hash_entry* FUNC_30 (TYPE_12__*,char const*,void*,void*,void*) ;
 int FUNC_31 (TYPE_12__*,int ,void*) ;
 int FUNC_32 (struct bfd_link_info*,TYPE_10__*) ;
 int FUNC_33 (struct bfd_link_info*,struct xcoff_link_hash_entry*) ;
 int FUNC_34 (struct bfd_link_info*) ;

bfd_boolean
FUNC_35 (bfd *VAR_17,
     struct bfd_link_info *VAR_18,
     const char *VAR_19,
     const char *VAR_20,
     unsigned long VAR_21,
     unsigned long VAR_22,
     unsigned long VAR_23,
     bfd_boolean VAR_24,
     int VAR_25,
     bfd_boolean VAR_26,
     bfd_boolean VAR_27,
     asection **VAR_28,
     bfd_boolean VAR_29)
{
  struct xcoff_link_hash_entry *VAR_30;
  asection *VAR_31;
  struct xcoff_loader_info VAR_32;
  int VAR_33;
  size_t VAR_34, VAR_35;
  struct xcoff_import_file *VAR_36;
  struct internal_ldhdr *VAR_37;
  bfd_size_type VAR_38;
  char *VAR_39;
  asection *VAR_40;
  bfd *VAR_41;
  struct bfd_strtab_hash *VAR_42;
  bfd_byte *VAR_43 = ((void*)0);
  bfd_size_type VAR_44;

  if (FUNC_10 (VAR_17) != VAR_12)
    {
      for (VAR_33 = 0; VAR_33 < VAR_6; VAR_33++)
 VAR_28[VAR_33] = ((void*)0);
      return VAR_2;
    }

  VAR_32.failed = VAR_0;
  VAR_32.output_bfd = VAR_17;
  VAR_32.info = VAR_18;
  VAR_32.export_defineds = VAR_27;
  VAR_32.ldsym_count = 0;
  VAR_32.string_size = 0;
  VAR_32.strings = ((void*)0);
  VAR_32.string_alc = 0;

  FUNC_28 (VAR_17)->maxstack = VAR_22;
  FUNC_28 (VAR_17)->maxdata = VAR_23;
  FUNC_28 (VAR_17)->modtype = VAR_25;

  FUNC_29 (VAR_18)->file_align = VAR_21;
  FUNC_29 (VAR_18)->textro = VAR_26;

  VAR_30 = ((void*)0);
  if (VAR_20 != ((void*)0))
    {
      VAR_30 = FUNC_30 (FUNC_29 (VAR_18), VAR_20,
           VAR_0, VAR_0, VAR_2);
      if (VAR_30 != ((void*)0))
 VAR_30->flags |= VAR_4;
    }


  if (VAR_18->init_function || VAR_18->fini_function || VAR_29)
    {
      struct xcoff_link_hash_entry *VAR_45;
      struct internal_ldsym *VAR_46;

      VAR_45 = FUNC_30 (FUNC_29 (VAR_18),
         "__rtinit", VAR_0, VAR_0, VAR_2);
      if (VAR_45 == ((void*)0))
 {
   FUNC_4)
     (FUNC_1("error: undefined symbol __rtinit"));
   return VAR_0;
 }

      FUNC_33 (VAR_18, VAR_45);
      VAR_45->flags |= (VAR_3 | VAR_7);


      VAR_44 = sizeof (* VAR_46);
      VAR_46 = FUNC_12 (VAR_44);

      VAR_46->l_value = 0;
      VAR_46->l_scnum = 2;
      VAR_46->l_smtype = VAR_8;
      VAR_46->l_smclas = 5;
      VAR_46->l_ifile = 0;
      VAR_46->l_parm = 0;






      FUNC_0 (0 == VAR_32.ldsym_count);

      VAR_45->ldindx = 3;
      VAR_32.ldsym_count = 1;
      VAR_45->ldsym = VAR_46;

      if (! FUNC_18 (VAR_32.output_bfd, &VAR_32,
      VAR_45->ldsym, VAR_45->root.root.string))
 return VAR_0;



      VAR_45->flags |= VAR_3 | VAR_5;
      VAR_45->root.type = VAR_10;
      VAR_45->root.u.def.value = 0;
    }


  if (VAR_18->relocatable
      || ! VAR_24
      || VAR_30 == ((void*)0)
      || (VAR_30->root.type != VAR_10
   && VAR_30->root.type != VAR_11))
    {
      VAR_24 = VAR_0;
      FUNC_29 (VAR_18)->gc = VAR_0;



      for (VAR_41 = VAR_18->input_bfds; VAR_41 != ((void*)0); VAR_41 = VAR_41->link_next)
 {
   asection *VAR_47;

   for (VAR_47 = VAR_41->sections; VAR_47 != ((void*)0); VAR_47 = VAR_47->next)
     {
       if ((VAR_47->flags & VAR_1) == 0)
  {
    if (! FUNC_32 (VAR_18, VAR_47))
      goto error_return;
  }
     }
 }
    }
  else
    {
      if (! FUNC_32 (VAR_18, VAR_30->root.u.def.section))
 goto error_return;
      FUNC_34 (VAR_18);
      FUNC_29 (VAR_18)->gc = VAR_2;
    }


  for (VAR_33 = 0; VAR_33 < VAR_6; VAR_33++)
    {
      VAR_40 = FUNC_29 (VAR_18)->special_sections[VAR_33];

      if (VAR_40 != ((void*)0)
   && VAR_24
   && (VAR_40->flags & VAR_1) == 0)
 VAR_40 = ((void*)0);

      VAR_28[VAR_33] = VAR_40;
    }

  if (VAR_18->input_bfds == ((void*)0))

    return VAR_2;

  FUNC_31 (FUNC_29 (VAR_18), VAR_16,
       (void *) &VAR_32);
  if (VAR_32.failed)
    goto error_return;







  VAR_34 = FUNC_26 (VAR_19) + 3;
  VAR_35 = 1;
  for (VAR_36 = FUNC_29 (VAR_18)->imports; VAR_36 != ((void*)0); VAR_36 = VAR_36->next)
    {
      ++VAR_35;
      VAR_34 += (FUNC_26 (VAR_36->path)
    + FUNC_26 (VAR_36->file)
    + FUNC_26 (VAR_36->member)
    + 3);
    }


  VAR_37 = &FUNC_29 (VAR_18)->ldhdr;
  VAR_37->l_version = FUNC_14(VAR_17);
  VAR_37->l_nsyms = VAR_32.ldsym_count;
  VAR_37->l_nreloc = FUNC_29 (VAR_18)->ldrel_count;
  VAR_37->l_istlen = VAR_34;
  VAR_37->l_nimpid = VAR_35;
  VAR_37->l_impoff = (FUNC_15(VAR_17)
       + VAR_37->l_nsyms * FUNC_17(VAR_17)
       + VAR_37->l_nreloc * FUNC_16(VAR_17));
  VAR_37->l_stlen = VAR_32.string_size;
  VAR_38 = VAR_37->l_impoff + VAR_34;
  if (VAR_32.string_size == 0)
    VAR_37->l_stoff = 0;
  else
    VAR_37->l_stoff = VAR_38;





  VAR_37->l_symoff = FUNC_15 (VAR_17);
  VAR_37->l_rldoff = (FUNC_15 (VAR_17)
       + VAR_37->l_nsyms * FUNC_17 (VAR_17));



  VAR_31 = FUNC_29 (VAR_18)->loader_section;
  VAR_31->size = VAR_38 + VAR_37->l_stlen;
  VAR_31->contents = FUNC_20 (VAR_17, VAR_31->size);
  if (VAR_31->contents == ((void*)0))
    goto error_return;


  FUNC_19 (VAR_17, VAR_37, VAR_31->contents);


  VAR_39 = (char *) VAR_31->contents + VAR_37->l_impoff;
  FUNC_25 (VAR_39, VAR_19);
  VAR_39 += FUNC_26 (VAR_19) + 1;
  *VAR_39++ = '\0';
  *VAR_39++ = '\0';
  for (VAR_36 = FUNC_29 (VAR_18)->imports; VAR_36 != ((void*)0); VAR_36 = VAR_36->next)
    {
      const char *VAR_48;

      VAR_48 = VAR_36->path;
      while ((*VAR_39++ = *VAR_48++) != '\0')
 ;
      VAR_48 = VAR_36->file;
      while ((*VAR_39++ = *VAR_48++) != '\0')
 ;
      VAR_48 = VAR_36->member;
      while ((*VAR_39++ = *VAR_48++) != '\0')
 ;
    }

  FUNC_0 ((bfd_size_type) ((bfd_byte *) VAR_39 - VAR_31->contents) == VAR_38);


  if (VAR_32.string_size > 0)
    {
      FUNC_22 (VAR_39, VAR_32.strings, VAR_32.string_size);
      FUNC_21 (VAR_32.strings);
      VAR_32.strings = ((void*)0);
    }
  VAR_40 = FUNC_29 (VAR_18)->linkage_section;
  if (VAR_40->size > 0)
    {
      VAR_40->contents = FUNC_20 (VAR_17, VAR_40->size);
      if (VAR_40->contents == ((void*)0))
 goto error_return;
    }
  VAR_40 = FUNC_29 (VAR_18)->toc_section;
  if (VAR_40->size > 0)
    {
      VAR_40->contents = FUNC_20 (VAR_17, VAR_40->size);
      if (VAR_40->contents == ((void*)0))
 goto error_return;
    }
  VAR_40 = FUNC_29 (VAR_18)->descriptor_section;
  if (VAR_40->size > 0)
    {
      VAR_40->contents = FUNC_20 (VAR_17, VAR_40->size);
      if (VAR_40->contents == ((void*)0))
 goto error_return;
    }



  VAR_42 = FUNC_29 (VAR_18)->debug_strtab;

  for (VAR_41 = VAR_18->input_bfds; VAR_41 != ((void*)0); VAR_41 = VAR_41->link_next)
    {
      asection *VAR_49;
      bfd_size_type VAR_50;
      unsigned long *VAR_51;
      asection **VAR_52;
      bfd_byte *VAR_53, *VAR_54;
      bfd_size_type VAR_55;

      if (VAR_41->xvec != VAR_18->hash->creator)
 continue;
      VAR_49 = FUNC_11 (VAR_41, ".debug");
      if (VAR_49 == ((void*)0) || VAR_49->size == 0)
 continue;

      if (VAR_18->strip == VAR_14
   || VAR_18->strip == VAR_15
   || VAR_18->discard == VAR_13)
 {
   VAR_49->size = 0;
   continue;
 }

      if (! FUNC_3 (VAR_41))
 goto error_return;

      VAR_50 = FUNC_24 (VAR_41);
      VAR_51 = FUNC_20 (VAR_41, VAR_50 * sizeof (unsigned long));
      if (VAR_51 == ((void*)0))
 goto error_return;
      FUNC_28 (VAR_41)->debug_indices = VAR_51;






      if (! FUNC_13 (VAR_41, VAR_49, &VAR_43))
 goto error_return;

      VAR_52 = FUNC_28 (VAR_41)->csects;


      if (((void*)0) != VAR_52)
 {
   VAR_55 = FUNC_8 (VAR_41);
   VAR_53 = (bfd_byte *) FUNC_23 (VAR_41);
   VAR_54 = VAR_53 + VAR_50 * VAR_55;

   while (VAR_53 < VAR_54)
     {
       struct internal_syment VAR_56;

       FUNC_7 (VAR_41, (void *) VAR_53, (void *) &VAR_56);

       *VAR_51 = (unsigned long) -1;

       if (VAR_56._n._n_n._n_zeroes == 0
    && *VAR_52 != ((void*)0)
    && (! VAR_24
        || ((*VAR_52)->flags & VAR_1) != 0
        || *VAR_52 == VAR_9)
    && FUNC_9 (VAR_41, &VAR_56))
  {
    char *VAR_57;
    bfd_size_type VAR_58;

    VAR_57 = (char *) VAR_43 + VAR_56._n._n_n._n_offset;
    VAR_58 = FUNC_5 (VAR_42, VAR_57, VAR_2, VAR_2);
    if (VAR_58 == (bfd_size_type) -1)
      goto error_return;
    *VAR_51 = VAR_58;
  }

       VAR_53 += (VAR_56.n_numaux + 1) * VAR_55;
       VAR_52 += VAR_56.n_numaux + 1;
       VAR_51 += VAR_56.n_numaux + 1;
     }
 }

      FUNC_21 (VAR_43);
      VAR_43 = ((void*)0);



      VAR_49->size = 0;

      if (! VAR_18->keep_memory)
 {
   if (! FUNC_2 (VAR_41))
     goto error_return;
 }
    }

  if (VAR_18->strip != VAR_14)
    FUNC_29 (VAR_18)->debug_section->size =
      FUNC_6 (VAR_42);

  return VAR_2;

 error_return:
  if (VAR_32.strings != ((void*)0))
    FUNC_21 (VAR_32.strings);
  if (VAR_43 != ((void*)0))
    FUNC_21 (VAR_43);
  return VAR_0;
}
