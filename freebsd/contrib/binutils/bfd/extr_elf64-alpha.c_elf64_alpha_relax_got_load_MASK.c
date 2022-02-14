
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_13__ ;
typedef struct TYPE_15__ TYPE_12__ ;


struct alpha_relax_info {int gp; void* changed_relocs; int gotobj; TYPE_3__* h; TYPE_2__* gotent; void* changed_contents; scalar_t__ contents; int abfd; TYPE_7__* link_info; int sec; } ;
struct TYPE_20__ {int name; } ;
typedef TYPE_4__ reloc_howto_type ;
typedef int bfd_vma ;
typedef int bfd_signed_vma ;
typedef void* bfd_boolean ;
struct TYPE_23__ {scalar_t__ shared; } ;
struct TYPE_22__ {int * tls_sec; } ;
struct TYPE_21__ {int r_info; scalar_t__ r_offset; } ;
struct TYPE_17__ {scalar_t__ type; } ;
struct TYPE_16__ {TYPE_1__ root; } ;
struct TYPE_19__ {TYPE_13__ root; } ;
struct TYPE_18__ {scalar_t__ use_count; } ;
struct TYPE_15__ {int total_got_size; int local_got_size; } ;
typedef TYPE_5__ Elf_Internal_Rela ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;


 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 void* VAR_8 ;
 int FUNC_3 (char*,int ,int ,unsigned long,int ) ;
 scalar_t__ FUNC_4 (TYPE_13__*,TYPE_7__*) ;
 TYPE_12__* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (TYPE_7__*) ;
 int FUNC_8 (unsigned long) ;
 unsigned int FUNC_9 (int ,scalar_t__) ;
 scalar_t__ VAR_9 ;
 int FUNC_10 (int ,int,scalar_t__) ;
 TYPE_4__* VAR_10 ;
 TYPE_6__* FUNC_11 (TYPE_7__*) ;
 int FUNC_12 (char*,int ,int ,unsigned long,int ) ;

__attribute__((used)) static bfd_boolean
FUNC_13 (struct alpha_relax_info *VAR_11, bfd_vma VAR_12,
       Elf_Internal_Rela *VAR_13, unsigned long VAR_14)
{
  unsigned int VAR_15;
  bfd_signed_vma VAR_16;


  VAR_15 = FUNC_9 (VAR_11->abfd, VAR_11->contents + VAR_13->r_offset);

  if (VAR_15 >> 26 != VAR_2)
    {
      reloc_howto_type *VAR_17 = VAR_10 + VAR_14;
      (FUNC_3)
       ("%B: %A+0x%lx: warning: %s relocation against unexpected insn",
 VAR_11->abfd, VAR_11->sec,
 (unsigned long) VAR_13->r_offset, VAR_17->name));
      return VAR_8;
    }


  if (FUNC_4 (&VAR_11->h->root, VAR_11->link_info))
    return VAR_8;


  if (VAR_14 == 128 && VAR_11->link_info->shared)
    return VAR_8;

  if (VAR_14 == VAR_5)
    {


      if ((VAR_11->h && VAR_11->h->root.root.type == VAR_9)
   || (!VAR_11->link_info->shared
       && (VAR_12 >= (bfd_vma)-0x8000 || VAR_12 < 0x8000)))
 {
   VAR_16 = 0;
   VAR_15 = (VAR_1 << 26) | (VAR_15 & (31 << 21)) | (31 << 16);
   VAR_15 |= (VAR_12 & 0xffff);
   VAR_14 = VAR_6;
 }
      else
 {
   VAR_16 = VAR_12 - VAR_11->gp;
   VAR_15 = (VAR_1 << 26) | (VAR_15 & 0x03ff0000);
   VAR_14 = VAR_4;
 }
    }
  else
    {
      bfd_vma VAR_18, VAR_19;

      FUNC_0 (FUNC_11 (VAR_11->link_info)->tls_sec != ((void*)0));
      VAR_18 = FUNC_6 (VAR_11->link_info);
      VAR_19 = FUNC_7 (VAR_11->link_info);
      VAR_16 = VAR_12 - (VAR_14 == 129 ? VAR_18 : VAR_19);

      VAR_15 = (VAR_1 << 26) | (VAR_15 & (31 << 21)) | (31 << 16);

      switch (VAR_14)
 {
 case 129:
   VAR_14 = VAR_3;
   break;
 case 128:
   VAR_14 = VAR_7;
   break;
 default:
   FUNC_0 (0);
   return VAR_0;
 }
    }

  if (VAR_16 < -0x8000 || VAR_16 >= 0x8000)
    return VAR_8;

  FUNC_10 (VAR_11->abfd, (bfd_vma) VAR_15, VAR_11->contents + VAR_13->r_offset);
  VAR_11->changed_contents = VAR_8;



  if (--VAR_11->gotent->use_count == 0)
    {
      int VAR_20 = FUNC_8 (VAR_14);
      FUNC_5 (VAR_11->gotobj)->total_got_size -= VAR_20;
      if (!VAR_11->h)
 FUNC_5 (VAR_11->gotobj)->local_got_size -= VAR_20;
    }


  VAR_13->r_info = FUNC_1 (FUNC_2 (VAR_13->r_info), VAR_14);
  VAR_11->changed_relocs = VAR_8;
  return VAR_8;
}
