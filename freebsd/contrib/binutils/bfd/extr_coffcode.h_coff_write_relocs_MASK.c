
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_19__ ;


struct internal_reloc {int r_vaddr; int r_symndx; int r_offset; scalar_t__ r_type; } ;
struct external_reloc {int dummy; } ;
typedef int n ;
typedef int bfd_size_type ;
typedef int bfd_boolean ;
struct TYPE_23__ {TYPE_2__** outsymbols; TYPE_3__* sections; } ;
typedef TYPE_1__ bfd ;
struct TYPE_24__ {char* name; scalar_t__ section; int flags; TYPE_1__* the_bfd; } ;
typedef TYPE_2__ asymbol ;
struct TYPE_25__ {int reloc_count; int vma; int rel_filepos; TYPE_4__** orelocation; struct TYPE_25__* next; } ;
typedef TYPE_3__ asection ;
struct TYPE_26__ {int address; int addend; TYPE_19__* howto; TYPE_2__** sym_ptr_ptr; } ;
typedef TYPE_4__ arelent ;
struct TYPE_22__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_4__*,TYPE_3__*) ;
 int VAR_3 ;
 int FUNC_1 (struct internal_reloc,TYPE_19__*) ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,TYPE_1__*,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (struct external_reloc*,int,TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int VAR_6 ;
 TYPE_4__** FUNC_6 (int) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*,struct internal_reloc*,struct external_reloc*) ;
 int VAR_7 ;
 int FUNC_10 (TYPE_4__**) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_4__**,TYPE_4__**,size_t) ;
 int FUNC_13 (struct internal_reloc*,int ,int) ;
 int FUNC_14 (TYPE_1__*) ;
 scalar_t__ FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_4__**,int,int,int ) ;
 scalar_t__ FUNC_17 (char const*,char const*) ;

__attribute__((used)) static bfd_boolean
FUNC_18 (bfd * VAR_8, int VAR_9)
{
  asection *VAR_10;

  for (VAR_10 = VAR_8->sections; VAR_10 != ((void*)0); VAR_10 = VAR_10->next)
    {
      unsigned int VAR_11;
      struct external_reloc VAR_12;
      arelent **VAR_13;


      VAR_13 = VAR_10->orelocation;
      if (FUNC_7 (VAR_8, VAR_10->rel_filepos, VAR_3) != 0)
 return VAR_1;
      for (VAR_11 = 0; VAR_11 < VAR_10->reloc_count; VAR_11++)
 {
   struct internal_reloc VAR_14;
   arelent *VAR_15 = VAR_13[VAR_11];

   FUNC_13 (& VAR_14, 0, sizeof (VAR_14));
   if (VAR_15->sym_ptr_ptr[0]->the_bfd != VAR_8)
     {
       int VAR_16;
       const char *VAR_17 = VAR_15->sym_ptr_ptr[0]->name;
       asymbol **VAR_18 = VAR_8->outsymbols;

       for (VAR_16 = VAR_9; VAR_18[VAR_16]; VAR_16++)
  {
    const char *VAR_19 = VAR_18[VAR_16]->name;

    if (FUNC_17 (VAR_19, VAR_17) == 0)
      {

        VAR_15->sym_ptr_ptr = VAR_18 + VAR_16;
        break;
      }
  }
     }

   VAR_14.r_vaddr = VAR_15->address + VAR_10->vma;
     if (VAR_15->sym_ptr_ptr)
       {



  if ((*VAR_15->sym_ptr_ptr)->section == VAR_5
      && ((*VAR_15->sym_ptr_ptr)->flags & VAR_0) != 0)


    VAR_14.r_symndx = -1;
  else
    {
      VAR_14.r_symndx = FUNC_11 ((*(VAR_15->sym_ptr_ptr)));


      if (VAR_14.r_symndx > FUNC_14 (VAR_8))
        {
   FUNC_8 (VAR_6);
   FUNC_3 (FUNC_2("%B: reloc against a non-existant symbol index: %ld"),
         VAR_8, VAR_14.r_symndx);
   return VAR_1;
        }
    }
       }
   VAR_14.r_type = VAR_15->howto->type;

   FUNC_9 (VAR_8, &VAR_14, &VAR_12);

   if (FUNC_4 (& VAR_12, (bfd_size_type) FUNC_5 (VAR_8),
    VAR_8) != FUNC_5 (VAR_8))
     return VAR_1;
 }





    }

  return VAR_4;
}
