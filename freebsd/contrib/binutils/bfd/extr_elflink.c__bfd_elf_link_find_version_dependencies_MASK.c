
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {TYPE_4__* verdef; } ;
struct TYPE_9__ {scalar_t__ link; } ;
struct TYPE_10__ {TYPE_1__ i; } ;
struct TYPE_11__ {scalar_t__ type; TYPE_2__ u; } ;
struct elf_link_hash_entry {int dynindx; TYPE_5__ verinfo; scalar_t__ def_regular; int def_dynamic; TYPE_3__ root; } ;
struct elf_find_verdep_info {int vers; int output_bfd; int failed; } ;
typedef int bfd_size_type ;
typedef int bfd_boolean ;
struct TYPE_16__ {TYPE_6__* verref; } ;
struct TYPE_15__ {scalar_t__ vna_nodename; scalar_t__ vna_other; struct TYPE_15__* vna_nextptr; int vna_flags; } ;
struct TYPE_14__ {scalar_t__ vn_bfd; TYPE_7__* vn_auxptr; struct TYPE_14__* vn_nextref; } ;
struct TYPE_12__ {scalar_t__ vd_bfd; scalar_t__ vd_nodename; int vd_exp_refno; int vd_flags; } ;
typedef TYPE_6__ Elf_Internal_Verneed ;
typedef TYPE_7__ Elf_Internal_Vernaux ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (int ,int) ;
 TYPE_8__* FUNC_1 (int ) ;

bfd_boolean
FUNC_2 (struct elf_link_hash_entry *VAR_3,
      void *VAR_4)
{
  struct elf_find_verdep_info *VAR_5 = VAR_4;
  Elf_Internal_Verneed *VAR_6;
  Elf_Internal_Vernaux *VAR_7;
  bfd_size_type VAR_8;

  if (VAR_3->root.type == VAR_2)
    VAR_3 = (struct elf_link_hash_entry *) VAR_3->root.u.i.link;



  if (!VAR_3->def_dynamic
      || VAR_3->def_regular
      || VAR_3->dynindx == -1
      || VAR_3->verinfo.verdef == ((void*)0))
    return VAR_1;


  for (VAR_6 = FUNC_1 (VAR_5->output_bfd)->verref; VAR_6 != ((void*)0); VAR_6 = VAR_6->vn_nextref)
    {
      if (VAR_6->vn_bfd != VAR_3->verinfo.verdef->vd_bfd)
 continue;

      for (VAR_7 = VAR_6->vn_auxptr; VAR_7 != ((void*)0); VAR_7 = VAR_7->vna_nextptr)
 if (VAR_7->vna_nodename == VAR_3->verinfo.verdef->vd_nodename)
   return VAR_1;

      break;
    }



  if (VAR_6 == ((void*)0))
    {
      VAR_8 = sizeof *VAR_6;
      VAR_6 = FUNC_0 (VAR_5->output_bfd, VAR_8);
      if (VAR_6 == ((void*)0))
 {
   VAR_5->failed = VAR_1;
   return VAR_0;
 }

      VAR_6->vn_bfd = VAR_3->verinfo.verdef->vd_bfd;
      VAR_6->vn_nextref = FUNC_1 (VAR_5->output_bfd)->verref;
      FUNC_1 (VAR_5->output_bfd)->verref = VAR_6;
    }

  VAR_8 = sizeof *VAR_7;
  VAR_7 = FUNC_0 (VAR_5->output_bfd, VAR_8);





  VAR_7->vna_nodename = VAR_3->verinfo.verdef->vd_nodename;

  VAR_7->vna_flags = VAR_3->verinfo.verdef->vd_flags;
  VAR_7->vna_nextptr = VAR_6->vn_auxptr;

  VAR_3->verinfo.verdef->vd_exp_refno = VAR_5->vers;
  ++VAR_5->vers;

  VAR_7->vna_other = VAR_3->verinfo.verdef->vd_exp_refno + 1;

  VAR_6->vn_auxptr = VAR_7;

  return VAR_1;
}
