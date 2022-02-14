
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct external_sun4_dynamic_link {struct external_sun4_dynamic_link* ld_text; struct external_sun4_dynamic_link* ld_symb_size; struct external_sun4_dynamic_link* ld_symbols; struct external_sun4_dynamic_link* ld_buckets; struct external_sun4_dynamic_link* ld_stab_hash; struct external_sun4_dynamic_link* ld_stab; struct external_sun4_dynamic_link* ld_hash; struct external_sun4_dynamic_link* ld_rel; struct external_sun4_dynamic_link* ld_plt_sz; struct external_sun4_dynamic_link* ld_plt; struct external_sun4_dynamic_link* ld_got; struct external_sun4_dynamic_link* ld_rules; struct external_sun4_dynamic_link* ld_need; struct external_sun4_dynamic_link* ld_loaded; struct external_sun4_dynamic_link* ld; struct external_sun4_dynamic_link* ldd; struct external_sun4_dynamic_link* ld_version; } ;
struct external_sun4_dynamic {struct external_sun4_dynamic* ld_text; struct external_sun4_dynamic* ld_symb_size; struct external_sun4_dynamic* ld_symbols; struct external_sun4_dynamic* ld_buckets; struct external_sun4_dynamic* ld_stab_hash; struct external_sun4_dynamic* ld_stab; struct external_sun4_dynamic* ld_hash; struct external_sun4_dynamic* ld_rel; struct external_sun4_dynamic* ld_plt_sz; struct external_sun4_dynamic* ld_plt; struct external_sun4_dynamic* ld_got; struct external_sun4_dynamic* ld_rules; struct external_sun4_dynamic* ld_need; struct external_sun4_dynamic* ld_loaded; struct external_sun4_dynamic* ld; struct external_sun4_dynamic* ldd; struct external_sun4_dynamic* ld_version; } ;
struct bfd_link_info {scalar_t__ shared; } ;
typedef scalar_t__ file_ptr ;
typedef scalar_t__ bfd_vma ;
typedef scalar_t__ bfd_size_type ;
typedef struct external_sun4_dynamic_link bfd_byte ;
typedef int bfd_boolean ;
struct TYPE_14__ {int flags; TYPE_2__* sections; } ;
typedef TYPE_1__ bfd ;
struct TYPE_15__ {scalar_t__ size; scalar_t__ output_offset; int flags; int reloc_count; TYPE_9__* output_section; struct external_sun4_dynamic_link* contents; struct TYPE_15__* next; } ;
typedef TYPE_2__ asection ;
struct TYPE_18__ {scalar_t__ filepos; scalar_t__ vma; TYPE_1__* owner; } ;
struct TYPE_17__ {int size; } ;
struct TYPE_16__ {scalar_t__ bucketcount; TYPE_1__* dynobj; int got_needed; int dynamic_sections_needed; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_1__*,struct external_sun4_dynamic_link*) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,struct external_sun4_dynamic_link*) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,TYPE_9__*,struct external_sun4_dynamic_link*,scalar_t__,scalar_t__) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_5__* FUNC_7 (TYPE_1__*) ;
 TYPE_3__* FUNC_8 (struct bfd_link_info*) ;

__attribute__((used)) static bfd_boolean
FUNC_9 (bfd *VAR_5, struct bfd_link_info *VAR_6)
{
  bfd *VAR_7;
  asection *VAR_8;
  asection *VAR_9;
  asection *VAR_10;

  if (! FUNC_8 (VAR_6)->dynamic_sections_needed
      && ! FUNC_8 (VAR_6)->got_needed)
    return VAR_4;

  VAR_7 = FUNC_8 (VAR_6)->dynobj;

  VAR_10 = FUNC_4 (VAR_7, ".dynamic");
  FUNC_1 (VAR_10 != ((void*)0));





  VAR_9 = FUNC_4 (VAR_7, ".need");
  if (VAR_9 != ((void*)0) && VAR_9->size != 0)
    {
      file_ptr VAR_11;
      bfd_byte *VAR_12;

      VAR_11 = VAR_9->output_section->filepos + VAR_9->output_offset;
      VAR_12 = VAR_9->contents;
      while (1)
 {
   bfd_vma VAR_13;

   FUNC_3 (VAR_7, FUNC_2 (VAR_7, VAR_12) + VAR_11, VAR_12);
   VAR_13 = FUNC_2 (VAR_7, VAR_12 + 12);
   if (VAR_13 == 0)
     break;
   FUNC_3 (VAR_7, VAR_13 + VAR_11, VAR_12 + 12);
   VAR_12 += 16;
 }
    }



  VAR_9 = FUNC_4 (VAR_7, ".got");
  FUNC_1 (VAR_9 != ((void*)0));
  if (VAR_6->shared || VAR_10->size == 0)
    FUNC_3 (VAR_7, 0, VAR_9->contents);
  else
    FUNC_3 (VAR_7, VAR_10->output_section->vma + VAR_10->output_offset,
       VAR_9->contents);

  for (VAR_8 = VAR_7->sections; VAR_8 != ((void*)0); VAR_8 = VAR_8->next)
    {
      if ((VAR_8->flags & VAR_3) != 0
   && VAR_8->contents != ((void*)0))
 {
   FUNC_1 (VAR_8->output_section != ((void*)0)
        && VAR_8->output_section->owner == VAR_5);
   if (! FUNC_5 (VAR_5, VAR_8->output_section,
       VAR_8->contents,
       (file_ptr) VAR_8->output_offset,
       VAR_8->size))
     return VAR_2;
 }
    }

  if (VAR_10->size > 0)
    {
      struct external_sun4_dynamic VAR_14;
      struct external_sun4_dynamic_link VAR_15;
      file_ptr VAR_16;


      FUNC_3 (VAR_7, (bfd_vma) 3, VAR_14.ld_version);
      FUNC_3 (VAR_7,
  VAR_10->output_section->vma + VAR_10->output_offset + sizeof VAR_14,
  VAR_14.ldd);
      FUNC_3 (VAR_7,
  (VAR_10->output_section->vma
   + VAR_10->output_offset
   + sizeof VAR_14
   + VAR_1),
  VAR_14.ld);

      if (! FUNC_5 (VAR_5, VAR_10->output_section, &VAR_14,
          (file_ptr) VAR_10->output_offset,
          (bfd_size_type) sizeof VAR_14))
 return VAR_2;

      FUNC_3 (VAR_7, (bfd_vma) 0, VAR_15.ld_loaded);

      VAR_9 = FUNC_4 (VAR_7, ".need");
      if (VAR_9 == ((void*)0) || VAR_9->size == 0)
 FUNC_3 (VAR_7, (bfd_vma) 0, VAR_15.ld_need);
      else
 FUNC_3 (VAR_7, VAR_9->output_section->filepos + VAR_9->output_offset,
    VAR_15.ld_need);

      VAR_9 = FUNC_4 (VAR_7, ".rules");
      if (VAR_9 == ((void*)0) || VAR_9->size == 0)
 FUNC_3 (VAR_7, (bfd_vma) 0, VAR_15.ld_rules);
      else
 FUNC_3 (VAR_7, VAR_9->output_section->filepos + VAR_9->output_offset,
    VAR_15.ld_rules);

      VAR_9 = FUNC_4 (VAR_7, ".got");
      FUNC_1 (VAR_9 != ((void*)0));
      FUNC_3 (VAR_7, VAR_9->output_section->vma + VAR_9->output_offset,
  VAR_15.ld_got);

      VAR_9 = FUNC_4 (VAR_7, ".plt");
      FUNC_1 (VAR_9 != ((void*)0));
      FUNC_3 (VAR_7, VAR_9->output_section->vma + VAR_9->output_offset,
  VAR_15.ld_plt);
      FUNC_3 (VAR_7, VAR_9->size, VAR_15.ld_plt_sz);

      VAR_9 = FUNC_4 (VAR_7, ".dynrel");
      FUNC_1 (VAR_9 != ((void*)0));
      FUNC_1 (VAR_9->reloc_count * FUNC_6 (VAR_7)
    == VAR_9->size);
      FUNC_3 (VAR_7, VAR_9->output_section->filepos + VAR_9->output_offset,
  VAR_15.ld_rel);

      VAR_9 = FUNC_4 (VAR_7, ".hash");
      FUNC_1 (VAR_9 != ((void*)0));
      FUNC_3 (VAR_7, VAR_9->output_section->filepos + VAR_9->output_offset,
  VAR_15.ld_hash);

      VAR_9 = FUNC_4 (VAR_7, ".dynsym");
      FUNC_1 (VAR_9 != ((void*)0));
      FUNC_3 (VAR_7, VAR_9->output_section->filepos + VAR_9->output_offset,
  VAR_15.ld_stab);

      FUNC_3 (VAR_7, (bfd_vma) 0, VAR_15.ld_stab_hash);

      FUNC_3 (VAR_7, (bfd_vma) FUNC_8 (VAR_6)->bucketcount,
  VAR_15.ld_buckets);

      VAR_9 = FUNC_4 (VAR_7, ".dynstr");
      FUNC_1 (VAR_9 != ((void*)0));
      FUNC_3 (VAR_7, VAR_9->output_section->filepos + VAR_9->output_offset,
  VAR_15.ld_symbols);
      FUNC_3 (VAR_7, VAR_9->size, VAR_15.ld_symb_size);




      FUNC_3 (VAR_7,
  FUNC_0 (FUNC_7 (VAR_5)->size, 0x2000),
  VAR_15.ld_text);

      VAR_16 = VAR_10->output_offset;
      VAR_16 += sizeof VAR_14 + VAR_1;
      if (! FUNC_5 (VAR_5, VAR_10->output_section, &VAR_15,
          VAR_16, (bfd_size_type) sizeof VAR_15))
 return VAR_2;

      VAR_5->flags |= VAR_0;
    }

  return VAR_4;
}
