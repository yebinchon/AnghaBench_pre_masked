
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_12__ ;


struct elf_strtab_hash {int dummy; } ;
struct TYPE_24__ {void* st_name; } ;
struct elf_link_local_dynamic_entry {TYPE_3__ isym; struct elf_link_local_dynamic_entry* next; } ;
struct elf_link_hash_table {struct elf_link_local_dynamic_entry* dynlocal; int * dynobj; struct elf_strtab_hash* dynstr; } ;
struct elf_backend_data {TYPE_2__* s; } ;
struct bfd_link_info {int dummy; } ;
typedef scalar_t__ bfd_size_type ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_25__ {int size; int * contents; } ;
typedef TYPE_4__ asection ;
struct TYPE_22__ {void* d_val; } ;
struct TYPE_30__ {int d_tag; TYPE_1__ d_un; } ;
struct TYPE_29__ {void* vda_name; } ;
struct TYPE_28__ {int vd_aux; scalar_t__ vd_cnt; scalar_t__ vd_next; } ;
struct TYPE_27__ {void* vna_name; } ;
struct TYPE_26__ {scalar_t__ vn_cnt; void* vn_file; scalar_t__ vn_next; } ;
struct TYPE_23__ {int (* swap_dyn_out ) (int *,TYPE_9__*,int *) ;int (* swap_dyn_in ) (int *,int *,TYPE_9__*) ;int sizeof_dyn; } ;
struct TYPE_21__ {scalar_t__ verref; scalar_t__ cverdefs; } ;
typedef TYPE_5__ Elf_Internal_Verneed ;
typedef TYPE_6__ Elf_Internal_Vernaux ;
typedef TYPE_7__ Elf_Internal_Verdef ;
typedef TYPE_8__ Elf_Internal_Verdaux ;
typedef TYPE_9__ Elf_Internal_Dyn ;
typedef int Elf_External_Verneed ;
typedef int Elf_External_Vernaux ;
typedef int Elf_External_Verdef ;
typedef int Elf_External_Verdaux ;


 int FUNC_0 (int ) ;







 int VAR_0 ;
 int FUNC_1 (struct elf_strtab_hash*) ;
 void* FUNC_2 (struct elf_strtab_hash*,void*) ;
 scalar_t__ FUNC_3 (struct elf_strtab_hash*) ;
 int FUNC_4 (int *,int *,TYPE_8__*) ;
 int FUNC_5 (int *,TYPE_8__*,int *) ;
 int FUNC_6 (int *,int *,TYPE_7__*) ;
 int FUNC_7 (int *,int *,TYPE_6__*) ;
 int FUNC_8 (int *,TYPE_6__*,int *) ;
 int FUNC_9 (int *,int *,TYPE_5__*) ;
 int FUNC_10 (int *,TYPE_5__*,int *) ;
 TYPE_4__* FUNC_11 (int *,char*) ;
 int VAR_1 ;
 struct elf_link_hash_table* FUNC_12 (struct bfd_link_info*) ;
 int FUNC_13 (struct elf_link_hash_table*,int ,struct elf_strtab_hash*) ;
 TYPE_12__* FUNC_14 (int *) ;
 struct elf_backend_data* FUNC_15 (int *) ;
 int FUNC_16 (int *,int *,TYPE_9__*) ;
 int FUNC_17 (int *,TYPE_9__*,int *) ;

__attribute__((used)) static bfd_boolean
FUNC_18 (bfd *VAR_2, struct bfd_link_info *VAR_3)
{
  struct elf_link_hash_table *VAR_4 = FUNC_12 (VAR_3);
  struct elf_link_local_dynamic_entry *VAR_5;
  struct elf_strtab_hash *VAR_6 = VAR_4->dynstr;
  bfd *VAR_7 = VAR_4->dynobj;
  asection *VAR_8;
  bfd_size_type VAR_9;
  const struct elf_backend_data *VAR_10;
  bfd_byte *VAR_11;

  FUNC_1 (VAR_6);
  VAR_9 = FUNC_3 (VAR_6);

  VAR_10 = FUNC_15 (VAR_7);
  VAR_8 = FUNC_11 (VAR_7, ".dynamic");
  FUNC_0 (VAR_8 != ((void*)0));


  for (VAR_11 = VAR_8->contents;
       VAR_11 < VAR_8->contents + VAR_8->size;
       VAR_11 += VAR_10->s->sizeof_dyn)
    {
      Elf_Internal_Dyn VAR_12;

      VAR_10->s->swap_dyn_in (VAR_7, VAR_11, &VAR_12);
      switch (VAR_12.d_tag)
 {
 case 128:
   VAR_12.d_un.d_val = VAR_9;
   break;
 case 132:
 case 129:
 case 131:
 case 130:
 case 133:
 case 134:
   VAR_12.d_un.d_val = FUNC_2 (VAR_6, VAR_12.d_un.d_val);
   break;
 default:
   continue;
 }
      VAR_10->s->swap_dyn_out (VAR_7, &VAR_12, VAR_11);
    }


  for (VAR_5 = VAR_4->dynlocal; VAR_5 ; VAR_5 = VAR_5->next)
    VAR_5->isym.st_name = FUNC_2 (VAR_6,
        VAR_5->isym.st_name);


  FUNC_13 (VAR_4, VAR_1, VAR_6);


  if (FUNC_14 (VAR_2)->cverdefs)
    {
      asection *VAR_13;
      bfd_byte *VAR_14;
      bfd_size_type VAR_15;
      Elf_Internal_Verdef VAR_16;
      Elf_Internal_Verdaux VAR_17;

      VAR_13 = FUNC_11 (VAR_7, ".gnu.version_d");
      VAR_14 = VAR_13->contents;
      do
 {
   FUNC_6 (VAR_2, (Elf_External_Verdef *) VAR_14,
       &VAR_16);
   VAR_14 += sizeof (Elf_External_Verdef);
   if (VAR_16.vd_aux != sizeof (Elf_External_Verdef))
     continue;
   for (VAR_15 = 0; VAR_15 < VAR_16.vd_cnt; ++VAR_15)
     {
       FUNC_4 (VAR_2,
     (Elf_External_Verdaux *) VAR_14, &VAR_17);
       VAR_17.vda_name = FUNC_2 (VAR_6,
       VAR_17.vda_name);
       FUNC_5 (VAR_2,
      &VAR_17, (Elf_External_Verdaux *) VAR_14);
       VAR_14 += sizeof (Elf_External_Verdaux);
     }
 }
      while (VAR_16.vd_next);
    }


  if (FUNC_14 (VAR_2)->verref)
    {
      asection *VAR_18;
      bfd_byte *VAR_19;
      bfd_size_type VAR_20;
      Elf_Internal_Verneed VAR_21;
      Elf_Internal_Vernaux VAR_22;

      VAR_18 = FUNC_11 (VAR_7, ".gnu.version_r");
      VAR_19 = VAR_18->contents;
      do
 {
   FUNC_9 (VAR_2, (Elf_External_Verneed *) VAR_19,
        &VAR_21);
   VAR_21.vn_file = FUNC_2 (VAR_6, VAR_21.vn_file);
   FUNC_10 (VAR_2, &VAR_21,
         (Elf_External_Verneed *) VAR_19);
   VAR_19 += sizeof (Elf_External_Verneed);
   for (VAR_20 = 0; VAR_20 < VAR_21.vn_cnt; ++VAR_20)
     {
       FUNC_7 (VAR_2,
     (Elf_External_Vernaux *) VAR_19, &VAR_22);
       VAR_22.vna_name = FUNC_2 (VAR_6,
        VAR_22.vna_name);
       FUNC_8 (VAR_2,
      &VAR_22,
      (Elf_External_Vernaux *) VAR_19);
       VAR_19 += sizeof (Elf_External_Vernaux);
     }
 }
      while (VAR_21.vn_next);
    }

  return VAR_0;
}
